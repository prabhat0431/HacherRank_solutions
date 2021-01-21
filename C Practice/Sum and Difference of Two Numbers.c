#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,n2,sum1,diff1;
    float n3,n4,diff2,sum2;
    scanf("%d %d",&n1,&n2);
    scanf("%f %f",&n3,&n4);
    sum1=n1+n2;
    diff1=n1-n2;
    sum2=n3+n4;
    diff2=n3-n4;
    scanf("%f %f",&n3,&n4);
    printf("%d %d\n",sum1,diff1);
    printf("%.1f %.1f",sum2,diff2);
    return 0;
}
