#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,sum[102]={0},pairs=0,a[102];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum[a[i]]++;
    }
    for(i=0;i<101;i++)
    {
    if(sum[i]!=0)
    pairs+=sum[i]/2;
    }
    printf("%d",pairs);
    return 0;
}
