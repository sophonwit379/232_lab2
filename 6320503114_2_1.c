#include<stdio.h>
int main()
{
    int a,b,c,r;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    r=a+b+c;
    if(80<=r && r<=100)
        printf("A");
    else if(75<=r && r<=79)
        printf("B+");
    else if(70<=r && r<=74)
        printf("B");
    else if(65<=r && r<=69)
        printf("C+");
    else if(60<=r && r<=64)
        printf("C");
    else if(55<=r && r<=59)
        printf("D+");
    else if(50<=r && r<=54)
        printf("D");
    else if(0<=r && r<=49)
        printf("F");


}
