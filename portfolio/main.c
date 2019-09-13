//
//  portfolio.c
//  portfolio
//
//  Created by Titov, Aleksandr on 9/9/19.
//  Copyright © 2019 Titov, Aleksandr. All rights reserved.
//this is the main file
double calcTriangle(void);
void rectangle(void);
void dataTyper(void);
void timeChange(void);
#include "main.h"
#include <stdio.h>
#include <math.h>

int main(){
    while (1==1) {
        
        printf("\nChoose a lab:\n");
        printf("a: Pythagorium lab\n");
        printf("b: Rectangle lab\n");
        printf("c: DataType Lab\n");
        printf("d: Seconds Calculator Lab\n");
        printf("Input 'x' if done\n\n");
        
        char choice;
        scanf(" %c", &choice);
        
        if(choice == 'a') {
            printf("%lf\n", calcTriangle());
        } else if(choice == 'b') {
            rectangle();
        } else if(choice == 'c') {
            dataTyper();
        } else if(choice == 'd') {
            timeChange();
        } else if(choice == 'x') {
            break;
        }else {
            printf("Invalid choice\n");
        }
    }
}

