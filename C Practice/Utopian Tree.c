#include<stdio.h>
int main()
{
    int t,n,h,j;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<=n;j++)
        {
        if(j==0)
        h=1;
        else if(j%2==0)
        {
            h=h+1;
        }
        else {
        h=h*2;
        }
        }
        printf("%d\n",h);
    }
    return 0;
}
