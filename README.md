V8TrySelector
=============
A thought experiment adding the Rails concept of try to NSObject.

by Shawn Veader (@veader) of [V8 Logic](http://v8logic.com) / [V8 Labs, LLC](http://v8labs.com)

Idea
----
Rails offers an interesting method, `try`, that allows you to send a method to an object without checking if that object is nil.

    >> foo = nil
    => nil
    >> foo.bar
    NoMethodError: undefined method `bar' for nil:NilClass
    >> foo.try :bar
    => nil

While Objective-C doesn't care about sending messages to nil, it would be nice to avoid checking for response to a selector. Can we add something like this to NSObject to avoid a few lines of code?

Go from:

    SEL someSelector = @selector(doThatThing);
    if ([someObject respondsToSelector:someSelector]) {
        [someObject performSelector:someSelector]
    }

To:

    [foo trySelector:@selector(doThatThing)];


Usage
-----
Just add the files to your project and import.

    #import "NSObject+V8TrySelector.h"

