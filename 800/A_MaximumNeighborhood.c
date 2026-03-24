#include <stdio.h>

void MaxNeigh(void);
int CalculateCost(int n,int t[n][n],int i,int j);

int main(void)
{
    int t;

    scanf("%d", &t);
    for(int i=0;i<t;i++){
        MaxNeigh();
    }

    return 0;
}

void MaxNeigh(void)
{
    int n;

    scanf("%d", &n);

    /*generate the array*/
    int t[n][n],k=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            t[i][j]=k++;
        }
    }
    /*determine the maximum neighborhood*/
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(maxi<CalculateCost(n,t,i,j)) maxi=CalculateCost(n,t,i,j);
        }
    }

    printf("%d\n", maxi);
}

int CalculateCost(int n,int t[n][n],int i,int j)
{
    int count=t[i][j];

    if(i>0) count+=t[i-1][j];
    if(i<n-1) count+=t[i+1][j];
    if(j>0) count+=t[i][j-1];
    if(j<n-1) count+=t[i][j+1];

    return count;
}