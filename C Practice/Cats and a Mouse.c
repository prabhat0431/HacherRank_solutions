#include<stdio.h>
#include<math.h>

int main()
{
    int q,i,ca,cb,m;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d %d %d",&ca,&cb,&m);
        if(abs(ca-m)<abs(cb-m))
        printf("Cat A\n");
        else if(abs(ca-m)>abs(cb-m))
        printf("Cat B\n");
        else
        printf("Mouse C\n");
        
    }
    return 0;
}
