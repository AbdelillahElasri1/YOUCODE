#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int nbr,i,resl,f; 
    printf("enter a number: ");
    scanf("%d",&nbr);
     f=1;
    for(i=1;i<=nbr;i++) {
       f=f*i;

    }
    printf("%d",f);

}