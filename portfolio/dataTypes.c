//
//  dataTypes.c
//  portfolio
//
//  Created by Titov, Aleksandr on 9/12/19.
//  Copyright © 2019 Titov, Aleksandr. All rights reserved.
//

#include "dataTypes.h"
#include <stdio.h>
#include <limits.h>

void dataTyper() {
    printf("Data type \t\t\t\t\t\t\t Minimum value \t\t\t\t\t\t maximum value\n");
    printf("Character \t\t\t\t\t\t\t%d\t\t\t\t\t\t\t\t%d\n", CHAR_MIN, CHAR_MAX);
    printf("Integer \t\t\t\t\t\t\t%d\t\t\t\t\t\t\t%d\n", INT_MIN, INT_MAX);
    printf("Unsigned Integer \t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\n", UINT_MAX);
    printf("Long Integer \t\t\t\t\t\t%ld\t\t\t\t%ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned Long Integer \t\t\t\t\t\t\t\t\t\t\t\t\t%lu\n\n", ULONG_MAX);
    
}
