#include <assert.h>
#include <ctype.h>
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
    int n,cnt,temp,num=0;
    int i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
    cnt=0;
    for(j=0;j<n;j++)
    {
        temp=0;
    if (abs(arr[i]-arr[j])<=1){
        for(int k=0;k<n;k++)
        {
            if(arr[k]==arr[i]||arr[k]==arr[j])
            temp++;
        }
    }
        if(temp>cnt)
        cnt=temp;
    }
    if(cnt>num)
    num=cnt;
    }
    printf("%d",num);
    return 0;
}
