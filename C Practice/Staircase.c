#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++)
        {
        for(int k=1;k<=a-i;k++)
            {
            printf(" ");  
            }
        for(int l=i;l>0;l--)
            {
            printf("#");
        }
        printf("\n");
        }
        return 0;
}
