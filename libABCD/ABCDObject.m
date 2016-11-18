//
//  ABCDObject.m
//  libABCD
//
//  Created by Shakhzod Ikromov on 11/18/16.
//  Copyright © 2016 Shakhzod Ikromov. All rights reserved.
//

#import "ABCDObject.h"

#import <objc/runtime.h>

@interface ABCDObject () {
        Class isa;
}

@end

@implementation ABCDObject

+ (id)alloc {
        return class_createInstance(self, 0);
}

- (id)init {
        isa = object_getClass(self);
        return self;
}

- (void)dealloc {
        object_dispose(self);
}

+ (Class)class {
        return self;
}

- (Class)class {
        return isa;
}

@end