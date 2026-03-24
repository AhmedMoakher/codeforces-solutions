#include <stdio.h>

int main(void)
{
    int n,k;

    scanf("%d %d", &n,&k);

    for(int i=0;i<k;i++){
        n = ( (n % 10) == 0 ) ? n / 10 : n-1; // this is a conditional expression
    }

    printf("%d\n", n);

    return 0;
}