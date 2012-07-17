V8TrySelector
=============
A thought experiment adding the Rails concept of try to NSObject.

by Shawn Veader (@veader) of [V8 Logic](http://v8logic.com) / [V8 Labs, LLC](http://v8labs.com)

Idea
----
Try to implement the Rails #try command on NSObject to decrease a few lines of code.

Go from:
    SEL someSelector = @selector(doThatThing);
    if ([someObject respondsToSelector:someSelector]) {
      [someObject performSelector:someSelector]
    }

Can now be:
    [foo trySelector:@selector(doThatThing)];


Usage
-----
Just add the files to your project and import.
    #import "NSObject+V8TrySelector.h"

