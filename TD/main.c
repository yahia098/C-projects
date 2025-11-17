#include<stdio.h>

int main(int argc, char ** argv) {
    int i,sum,j;
    sum = 0;
    j = 1;
    printf("enter i : ");
    scanf("%d",&i);
    while(i >= j ) {
        sum+=j;
        j++;
    }
    printf("\n %d",sum);
    return 0;
}