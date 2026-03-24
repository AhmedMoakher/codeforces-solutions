#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int g,c,l,maxi,mini,midd;

    scanf("%d %d %d", &g,&c,&l);

    maxi=g;
    mini=g;

    if(c>maxi) maxi=c;
    if(l>maxi) maxi=l;

    if(c<mini) mini=c;
    if(l<mini) mini=l;

    if((maxi-mini)>=10){
        printf("check again");
        exit(EXIT_SUCCESS); // stdlib.h
    }

    //the simple method for midd
    /*
    if((c<=l && c>=g) || (c<=g && c>=l)) midd=c;
    else if ((g<=l && g>=c) || (g<=c && g>=l)) midd=g;
    else midd=l;
    */

    //more simplified
    midd=(g+c+l)-maxi-mini;

    printf("final %d", midd);

    exit(EXIT_SUCCESS); //stdlib.h
}