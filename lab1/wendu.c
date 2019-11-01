#include<stdio.h>
int main()
{
    int fathr,celsius;
    int lower,upper,step;

    lower=0;
    upper=100;
    step=5;

    celsius=lower;
    while(celsius<=upper){
        fathr=celsius*9.0/5.0+32;
        printf("%d\t%d\n",celsius,fathr);
        celsius=celsius+step;
    }
    return 0;
}