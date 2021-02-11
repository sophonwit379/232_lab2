#include<stdio.h>
int main()
{
    int num,tmp,i,tmp2,rev=0;
    scanf("%d",&num);
    while(num!=0)
    {
        tmp2=num%10;
        rev=(rev*10)+tmp2;
        num/=10;
    }
    i=rev;
    while(i>0)
    {
        tmp=i;
        tmp%=10;
        switch(tmp)
        {
            case 0:
                printf("Zero");
                break;
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
        }
         printf("-");
        i/=10;
    }


}
