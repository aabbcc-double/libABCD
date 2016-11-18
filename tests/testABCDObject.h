//
//  testABCDObject.h
//  libABCD
//
//  Created by Shakhzod Ikromov on 11/18/16.
//  Copyright © 2016 Shakhzod Ikromov. All rights reserved.
//

#ifndef libABCD_tests_testABCDObject_h
#define libABCD_tests_testABCDObject_h

#include "minunit.h"
#include "ABCDObject.h"

MU_TEST(test_ABCDObject_alloc_and_dealloc) {
        ABCDObject *object = [[ABCDObject alloc] init];
        mu_assert(object != nil, "ABCDObject became nil while allocating");
        [object dealloc];
}

MU_TEST(test_ABCDObject_class) {
        ABCDObject *object = [[ABCDObject alloc] init];
        Class c1 = object_getClass(object);
        Class c2 = [object class];
        
        const char * n1 = class_getName(c1);
        const char * n2 = class_getName(c2);
        
        mu_assert(c1 == c2, "Classes aren't same");
        mu_assert(strcmp(n1, n2) == 0, "Class names aren't same");
        [object dealloc];
}

MU_TEST_SUITE(test_suite_ABCDObject) {
        MU_RUN_TEST(test_ABCDObject_alloc_and_dealloc);
        MU_RUN_TEST(test_ABCDObject_class);
}


#endif /* libABCD_tests_testABCDObject_h */
