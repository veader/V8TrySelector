V8TrySelector Category for NSObject
===================================
A fun thought experiment...

Idea
----
Rails offers an interesting method, `try`, that allows you to send a message to an object without checking if that object is nil.

    >> foo = nil
    => nil
    >> foo.bar
    NoMethodError: undefined method `bar' for nil:NilClass
    >> foo.try :bar
    => nil

While Objective-C doesn't care about sending messages to nil, it would be nice to avoid checking for response to a selector. Can we add something like this to `NSObject` to avoid a few lines of code?

Go from:

    SEL someSelector = @selector(doThatThing);
    if ([someObject respondsToSelector:someSelector]) {
        [someObject performSelector:someSelector]
    }

To:

    [someObject trySelector:@selector(doThatThing)];


Usage
-----
Add the files to your project and import the header.

    #import "NSObject+V8TrySelector.h"

Now `NSObject` supports the following:

    - (id)trySelector:(SEL)selector;
    - (id)trySelector:(SEL)selector withObject:(id)obj;

Both methods will return the value of the message has a return value or `nil` if the object does not respond to the selector.
