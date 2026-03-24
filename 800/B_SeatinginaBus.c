#include <stdio.h>
#include <stdbool.h>

char* VerifySeating(void);
bool VerifyNeighborExisting(int i,int *a);

int main(void)
{
    int t;

    scanf("%d", &t);
    for(int i=0;i<t;i++) {
        printf("%s\n",VerifySeating());
    }

    return 0;
}

char* VerifySeating(void)
{
    int n;

    scanf("%d", &n);

    int a[n]; 
    /*
    a is an array to store the seat numbers for each passanger 
    (i represent passanger number i+1 
    and a[i] represent the seat number associate to him)
    */

    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    bool test=true;

    int i=1;// represent the passanger number (the first passanger is always valid)

    while(test==true && i<n){
        if(VerifyNeighborExisting(i,a)) i++;
        else test=false;
    }

    return test? "YES" : "NO";
}

bool VerifyNeighborExisting(int i,int *a)
{
    int x=*(a+i) , j=i-1; // x representing the seat number of passanger i+1

    do{
        if(a[j] == x-1 || a[j] == x+1) return true;
        else j--;
    } while(j>=0);

    return false;
}