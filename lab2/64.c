#include<stdio.h>
int main()
{
    unsigned int x=1;
    int count=0;
    while(x !=0) {
        x=x<<1;
        count=count+1;
    }
    printf("%d",count);
    return 0;
}