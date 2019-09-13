//
//  pythagorium.c
//  portfolio
//
//  Created by Titov, Aleksandr on 9/10/19.
//  Copyright © 2019 Titov, Aleksandr. All rights reserved.
//

#include "pythagorium.h"
#include <stdio.h>
#include <math.h>


double calcTriangle() {
    printf("Enter side a: ");
    double a;
    scanf("%lf",&a);
    printf("Enter side b: ");
    double b;
    scanf("%lf",&b);
    double c = a*a + b*b;
    return sqrt(c);
}
