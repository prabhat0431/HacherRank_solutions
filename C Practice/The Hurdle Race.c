#include<stdio.h>
#include<math.h>

int main()
{
    int n,k,max=0,res;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
      if(a[i]>max) 
    max=a[i];
        }
    }
    if(max>k)
    {
        res=abs(k-max);
    printf("%d",res);
    }
    else
    {
    printf("0");
    }
    return 0;
}
