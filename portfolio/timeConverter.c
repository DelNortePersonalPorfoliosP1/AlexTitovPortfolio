//
//  timeConverter.c
//  portfolio
//
//  Created by Titov, Aleksandr on 9/13/19.
//  Copyright © 2019 Titov, Aleksandr. All rights reserved.
//

#include "timeConverter.h"

void timeChange() {
    printf("Enter the amount of seconds:");
    int seconds;
    scanf("%d",&seconds);
    int time = seconds;
    int days = 0;
    int hours = 0;
    int minutes = 0;
    while(1==1) {
        if(seconds >= 86400) {
            days++;
            seconds -= 86400;
        } else if(seconds >= 3600) {
            hours++;
            seconds -= 3600;
        } else if(seconds >= 60) {
            minutes++;
            seconds -= 60;
        } else {
            break;
        }
    }
    printf("In %d seconds there are:\n", time);
    printf("Days: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);
}
