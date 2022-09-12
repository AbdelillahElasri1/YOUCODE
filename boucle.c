#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int nbr;
    float i,s;
    printf("enter a number: ");
    scanf("%d",&nbr);
    s=0;
    for(i=0;i<=nbr;i++) {
         s=s+pow(10,i);
    }
    
        printf("%.2f",s);
    
    
    return 0;

}