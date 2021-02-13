#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
    char *s;
    s = malloc(1024*sizeof(char));
    scanf("%s", s);
    int len = strlen(s);
    int arr[10],i;
    for(i = 0; i < 10; i++)
        arr[i] = 0;
    for(i = 0; i < len; i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            arr[s[i]-'0']++;
        }
    }
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}
