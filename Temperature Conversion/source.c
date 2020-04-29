//
//  source.c
//  Temperature Conversion
//
//  Created by Prajwal Dhungana on 4/29/20.
//  Copyright © 2020 Prajwal Dhungana. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "header.h"


float userInputPart(void)
{
    float FreezingPT = 32.0f;
    float ScaleFactor = 5.0f / 9.0f;
    float Fahrenheit, Celsius;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &Fahrenheit);
    Celsius = (Fahrenheit - FreezingPT) * ScaleFactor;
    return Celsius;
}
