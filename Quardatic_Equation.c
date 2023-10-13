/*
Author: Yawar-Husain

General form    ax^2 + bx + c
Equation  :  -b -+ sqrt( b^2 - 4ac )/2a

You must explicitly include math.h library in c using (" -lm " ) flage

 gcc file_name.c -lm
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv)
{
    double a, b, c;

    if(argc != 4)
    {
        printf("ERROR : You must input 4 number...! \n");
        exit(1);
    }
    //Get input on run time
    a = atof(argv[1]);                    //atoi(): argument ot integer
    b = atof(argv[2]);                    // [a] stand for alpha-numeric and [i] stand for integer
    c = atof(argv[3]);

    //Get input from user :

    // printf("Please enter value of a :\n");
    // scanf("%lf",&a);

    // printf("Please enter value of b :\n");
    // scanf("%lf",&b);

    // printf("Please enter value of c :\n");
    // scanf("%lf",&c);

    double root1 = ( -b + sqrt( pow(b, 2) - 4 * a *c )/(2 * a));
    double root2 = ( -b + sqrt( pow(b, 2) - 4 * a *c )/(2 * a));

    printf("The root of %.3fx^2 + %.4fx + %.2f are %f and %f \n",a,b,c,root1,root2);

    // // int a / 0 ;         //Give warning it crashed over program
    // int y = 0;
    // int x = x / y;           //it will not give warning because value is stored in integer but program crashed

    // printf("Almost done ....\n");

    return 0;
}