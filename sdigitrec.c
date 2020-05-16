#include <stdio.h>
#include <stdlib.h>
int sum(int);
void main()
{
    int num,ans;
    printf("enter the number");
    scanf("%d",&num);
    ans=sum(num);
    printf("%d",ans);
}
int sum(int a)
{
    int c,b;
    c=a%10;
    if(c==0)
    {
        return 0;
    }
    b=a/10;
    return c+sum(b);
}



