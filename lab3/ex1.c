#include <stdio.h>
int www(char s[])
{
    int i;
    int count1=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='A'){
              count1++;
        }
    }
    return  count1;
}
int ggg(char t[]){
    int i;
    int count2=0;
    for(i=0;t[i]!='\0';i++){
        if(t[i]=='0'){
            count2++;
        }
    }
    return count2;
}
int main(){
   printf("请输入一段总长度不超过50个字符的任意字母数字，空格符，制表符");
    char c[50];
    int i=0;
    c[i]=getchar();
    while(c[i]!='\n'){
        i++;
        c[i]=getchar();
    }
    printf   ("the number of a is %dand the number of 0 is%d",www(c),ggg(c));
}