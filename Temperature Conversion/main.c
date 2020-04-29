//
//  main.c
//  Temperature Conversion
//
//  Created by Prajwal Dhungana on 4/29/20.
//  Copyright © 2020 Prajwal Dhungana. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float FreezingPT = 32.0f;
    float ScaleFactor = 5.0f / 9.0f;
    float Fahrenheit, Celsius;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &Fahrenheit);
    Celsius = (Fahrenheit - FreezingPT) * ScaleFactor;
    printf("Celsius equivalent: %.1f\n", Celsius);
    
    return 0;
}
