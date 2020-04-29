//
//  main.c
//  Temperature Conversion
//
//  Created by Prajwal Dhungana on 4/29/20.
//  Copyright © 2020 Prajwal Dhungana. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//Declaration of funcions
float userInputPart(void);

int main(int argc, const char * argv[])
{
    //Creating necessary variables
    int usrInp;
    float tempReturn;
    
    //Use of while infinte loop
    while (1) {
        
    //Userinput portion
    printf("\n");
    printf("------------------------------------------------------\n");
    printf(" F to C TEMPERATURE CONVERSION\n");
    printf("------------------------------------------------------\n");
    printf("1. Convert from F to C\n");
    printf("2. Exit the program\n");
    printf("------------------------------------------------------\n");
    printf("Your choice: ");
    scanf("%d", &usrInp);
    
    switch (usrInp) {
        case 1:
            //tempReturn gets the return float value from the function
            tempReturn = userInputPart();
            printf("Celsius equivalent: %.1f\n",tempReturn);
            break;
            
        case 2:
            printf("Thanks for using the program\n");
            printf("Program closed\n");
            return EXIT_SUCCESS;
            
        default:
            printf("Wrong input!!!!!!\n");
            printf("Please try again\n");
            printf("\n");
            break;
    }//end of switch
    }//end of while loop
    return 0;
}
//end of main

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
