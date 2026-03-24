#include <stdio.h>

void RunTest(void); /*start one test case*/

int main(void)
{
    int t;

    /*printf("enter the number of test cases: ");*/
    // t must be t>=1 && t<=500

    scanf("%d", &t);

    for(int i=0;i<t;i++){
        RunTest();
    }

    return 0;
}

void RunTest(void)
{
    int l,a,b;
    int max_prize;

    /*printf("enter l a and b (with spaces between them): ");*/
    //l a b must be !(l<1 || b>5000 || a<0 || a>(l-1))

    scanf("%d %d %d", &l,&a,&b);


    /* k = 0 → l ensures all possible positions before sequence repeats are considered*/
    max_prize=a;
    for(int k=1;k<=l;k++){
        if(max_prize < ((a+k*b)%l)) max_prize=(a+k*b)%l;
    }

    printf("%d\n",max_prize); //Maximum prize
}

