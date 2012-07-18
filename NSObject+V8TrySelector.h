
#import <Foundation/Foundation.h>

@interface NSObject (V8TrySelector)

- (id)trySelector:(SEL)selector;
- (id)trySelector:(SEL)selector withObject:(id)obj;

@end
