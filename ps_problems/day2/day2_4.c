#include<stdio.h>

void main(){
for(int i=1; i<=4; i++){
    for(int j=i; j<2*i; j++){
        printf("%c", (char)('A'+j-1));
    }
    printf("\n");
}
}