#include<stdio.h>

int main(){

    int s,n,m,res = -1,keyboard[1001],usb[1001],max=-1;

    scanf("%d %d %d",&s,&n,&m);
    for(int i = 0; i < n; i++)
    scanf("%d",&keyboard[i]);
    for(int i = 0; i < m; i++)
    scanf("%d",&usb[i]);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(keyboard[i]+usb[j] <= s)
            res = (keyboard[i]+usb[j]);
             if(res>max){
            max=res;}
        }
    }
    printf("%d",max);
    return 0;
}
