#include<stdio.h>

int main()
{
    int n,pl,pc,ps=5;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     pl=(ps/2);
     pc=pc+pl;
     ps=pl*3;   
    }
    printf("%d",pc);
    return 0;
}
