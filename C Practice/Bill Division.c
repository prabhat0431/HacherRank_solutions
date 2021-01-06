#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int paid;
    scanf("%d",&paid);
    int tobepaid=sum-a[k];
    if((tobepaid)/2==paid)
    {
        printf("Bon Appetit\n");
    }
    else {
    printf("%d\n",paid-(tobepaid)/2);
    }
    return 0;
}
