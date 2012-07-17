//
//  NSObject+V8TrySelector.h
//  fStats
//
//  Created by Shawn Veader on 5/10/12.
//  Copyright (c) 2012 V8 Labs, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (V8TrySelector)

- (id)trySelector:(SEL)selector;
- (id)trySelector:(SEL)selector withObject:(id)obj;

@end
