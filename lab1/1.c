#include<stdio.h>
#include<stdio.h>
int count_one_bits(unsigned int value)
{
    int count=0;
    while (value !=0)
    {
        if (value%2==1)
        {
            count++;
        }
        value=value>>1;
    }
    return count;
}
int main()
{
    int num;
    int ret;
    printf("请输入一个大于0的数\n");
    scanf("%d",&num);
    ret=count_one_bits(num);
    printf("%d",ret);
    system("pause");
    return 0;
}