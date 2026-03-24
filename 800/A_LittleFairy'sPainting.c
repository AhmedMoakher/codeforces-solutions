#include <stdio.h>  
#include <stdbool.h>

void startColoring(void);
bool exist(int x,int n,int t[n]);

int main(void)
{
    int t;

    scanf("%d", &t);
    for(int i=0;i<t;i++){
        startColoring();
    }

    return 0;
}

void startColoring(void)
{
    int n;

    /* n represents the number of colored cells . n between 1 and 100*/
    scanf("%d", &n);

    int t[n]; //t for saving n integers representing the colors
    for(int i=0;i<n;i++){
        scanf("%d", &t[i]);
    }

    int k=0;/*for representing the number of distinct colors in the ribbon*/

    for(int i=0;i<n;i++){
        bool seen=false;
        for(int j=i-1;j>-1;j--){
            if(t[i] == t[j]) {
                seen = true;
                break;
            }
        }
        if (seen == false) k++;
    }

    int x=k;
    /*we will increment x until it matches one of the numbers in t then this number will color the remaining cells*/

    while(!exist(x,n,t)) x++;

    printf("%d\n", x);
}

bool exist(int x,int n,int t[n])
{
    for(int i=0;i<n;i++){
        if(t[i] == x) return true;
    }

    return false;
}