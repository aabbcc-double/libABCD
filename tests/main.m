//
//  main.c
//  libABCD
//
//  Created by Shakhzod Ikromov on 11/18/16.
//  Copyright © 2016 Shakhzod Ikromov. All rights reserved.
//

#include <stdio.h>
#include "minunit.h"
#include "testABCDObject.h"

int main() {
        MU_RUN_SUITE(test_suite_ABCDObject);
        
        MU_REPORT();
        return minunit_status;
} 
