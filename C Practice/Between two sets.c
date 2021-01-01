#include <math.h>
#include <stdio.h>
#include <string.h>

int main(){
    int m,n,flag,card,x,i,j; 
    scanf("%d %d",&n,&m);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for(int b_i = 0; b_i < m; b_i++)
    {
       scanf("%d",&b[b_i]);
    }
    card=0;    
    for (x=1;x<=100;++x)  
    {
        flag=1;
        for (i=0;i<n;++i) if ((x % a[i]) != 0) flag=0;
        for (j=0;j<m;++j) if ((b[j] % x) != 0) flag=0;   
        if (flag == 1) ++card;    
    }
    printf("%d\n",card);    
    return 0;
}
