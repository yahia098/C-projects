#include<stdio.h>

int main(){
    int N;
    printf("enter integer: ");
    scanf("%d",&N);
    if((N%2)==1) {N--;}
    while (N >= 0) {
        printf("\n %d",N);
        N-=2;
    }
    return 0 ;
}