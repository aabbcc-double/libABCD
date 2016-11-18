//
//  ABCDObject.h
//  libABCD
//
//  Created by Shakhzod Ikromov on 11/18/16.
//  Copyright © 2016 Shakhzod Ikromov. All rights reserved.
//

#ifndef libABCD_ABCDObject_h
#define libABCD_ABCDObject_h

#import <objc/runtime.h>

@interface ABCDObject

+ (id)alloc;
- (id)init;
- (void)dealloc;

+ (Class)class;
- (Class)class;

@end

#endif /* libABCD_ABCDObject_h */
