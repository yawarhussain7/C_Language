#include<stdlib.h>
#include<stdio.h>

int main(int argc,char **argv)
{

    double BTC = atof(argv[1]);
    double dollar;

    dollar = 25976.67 * BTC;
    printf("You have %.5f BTC and you will got %.2f$ \n",BTC,dollar);

    return 0;
}