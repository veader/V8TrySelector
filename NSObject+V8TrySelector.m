
#import "NSObject+V8TrySelector.h"

@implementation NSObject (V8TrySelector)

- (id)trySelector:(SEL)selector {
	if ([self respondsToSelector:selector]) {
		return [self performSelector:selector];
	}
	return nil;
}

- (id)trySelector:(SEL)selector withObject:(id)obj {
	if ([self respondsToSelector:selector]) {
		return [self performSelector:selector withObject:obj];
	}
	return nil;
}

@end
