#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,m,total=0;
scanf("%d",&n);
 for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&m);
        if (i==j)
        total += m;
        if (i==n-j-1)
        total -= m;
        
    }
}
printf("%d",abs(total));
return 0;
}



