#include <stdio.h>

void RunTest(void);

int main(void)
{
    int t; //t is the number of test cases

    scanf("%d", &t);
    for(int i=0;i<t;i++){
        RunTest();
    }

    return 0;
}

void RunTest(void)
{
    int n; //n is the size of the initial array

    scanf("%d", &n);
    
    int t[n]; // read the numbers and store it in the array t
    for(int i=0;i<n;i++){
        scanf("%d", &t[i]);
    }

    int Maxop=0;// the maximum number of operations that can perform

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(t[i]>t[j]){
                Maxop++;
                for(int k=j;k<n-1;k++){
                    t[k]=t[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("%d\n",Maxop);
}
