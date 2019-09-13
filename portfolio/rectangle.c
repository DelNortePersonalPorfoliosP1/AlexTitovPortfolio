//
//  rectangle.c
//  portfolio
//
//  Created by Titov, Aleksandr on 9/11/19.
//  Copyright © 2019 Titov, Aleksandr. All rights reserved.
//

#include "rectangle.h"

void rectangle() {
    printf("Enter side a: ");
    double a;
    scanf("%lf",&a);
    printf("Enter side b: ");
    double b;
    scanf("%lf",&b);
    
    printf("Side a is: %lf\n", a);
    printf("Side b is: %lf\n", b);
    printf("Perimeter is: %lf\n", a+a+b+b);
    printf("Area is: %lf\n", a*b);
}
