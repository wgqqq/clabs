#include <stdio.h>
main()
{
    int count=0;
    int a=1;
    char b;
    int c=0;
    while((b=getchar())!='\n'){
        c=c*10+(b-'0');
    }
    while(c!=0){
        if(a&c!=0) count++;
        c>>1;
        }
        pointf("%d\n",count);
        return 0;
}
