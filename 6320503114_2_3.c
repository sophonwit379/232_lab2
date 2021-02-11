#include<stdio.h>
int main()
{
    int a,b,c,i,max,min,avg;
    char ch[3];
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        max=a;
    else if(b>a && a>c)
        max=b;
    else
        max=c;
    if(a<b && a<c)
        min=a;
    else if(b<a && b<c)
        min=b;
    else
        min=c;
    if(a!=min && a!=max)
        avg=a;
    else if(b!=min && b!=max)
        avg=b;
    else
        avg=c;
    scanf("%s",ch);
    for(i=0;i<3;i++)
    {
        if(ch[i]=='A')
            printf("%d ",min);
        else if(ch[i]=='B')
            printf("%d ",avg);
        else
            printf("%d ",max);
    }

}
