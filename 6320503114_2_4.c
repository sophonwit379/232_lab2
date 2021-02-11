#include<stdio.h>
int main()
{
    int num,b=92;
    char ch;
    scanf("%c",&ch);
    scanf("%d",&num);
    if(num%10==5)
    {
        printf("%c",b);
    }
    if(num%2==1)
    {
        if(ch>=65&&ch<=73)
        {
            printf("(^_^)");
        }
        if(ch>=74&&ch<=82)
        {
            printf("(o)");
        }
        if (ch>=83&&ch<=90)
        {
            printf("(T_T)");
        }
    }
    else
    {
        if(ch>=65&&ch<=73)
            {
                printf("{@_@}");
            }
        if(ch>=74&&ch<=82)
            {
                printf("{v}");
            }
        if (ch>=83&&ch<=90)
            {
                printf("{x_x}");
            }
    }
    if(num%10==5)
    {
        printf("/");
    }
}







