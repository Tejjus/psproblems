#include<stdio.h>
void main(){
for(int i=1; i<=6; i++)
    printf("%d ", i);
for(int i=5; i>=1; i--)
    printf("%d ", i);
    printf("\n");
for(int i=5; i>=1; i--){
    for(int j=1; j<=i; j++)
    printf("%d ", j);
    for(int j=(6-i)*4-3; j>=0; j--)
    printf(" ");
    for(int j=i; j>=1; j--)
    printf("%d ", j);
    printf("\n");
}
}