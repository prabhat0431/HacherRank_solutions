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
    int t,n,p,st,sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        sum=0;
        scanf("%d %d",&n,&p);
        for(int j=0;j<n;j++)
        {
           scanf("%d ",&st);
           if(st<=0) 
           sum++;
        }
        if(sum>=p)
        {
            printf("NO\n");
        }
        else
        printf("YES\n");
    }
    return 0;
}
