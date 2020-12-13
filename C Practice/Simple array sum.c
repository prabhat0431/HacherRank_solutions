#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int ar[n],ar_i;
for(ar_i=0;ar_i<n;ar_i++)
{scanf("%d",&ar[ar_i]);}
int result=0;
for(ar_i=0;ar_i<n;ar_i++)
{result += ar[ar_i];}
printf("%d",result);
return 0;
}
