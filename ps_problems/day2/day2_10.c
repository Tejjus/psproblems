#include<stdio.h>

void main(){
for(int i=5; i>0; i-=2){
    for(int j=0; j<i; j++){
        printf("* ");
    }
    printf("\n");
}
for(int i=3; i<=5; i+=2){
    for(int j=0; j<i; j++){
        printf("* ");
    }
    printf("\n");
}
}