#include<stdio.h>
#include<math.h>
int main()
{
    float n,s;
    int r,r2;
    char pro;
    scanf("%c",&pro);
    scanf("%f",&n);
    r=n;
    r2=n*100;
    r2=r2%100;
    if(pro == 'A')
    {
        s=199;
        if(n>200)
        {
            r=r-200;
            s=s+(r*3);
            s=s+((r2*3)/60.0);
        }
        printf("%0.2f",s);
    }
    else if(pro == 'B')
    {
        s=299;
        if(n>400)
        {
            r=r-400;
            s=s+(r*2);
            s=s+((r2*2)/60.0);
        }
        printf("%0.2f",s);
    }


}
