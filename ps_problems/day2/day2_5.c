#include<stdio.h>

void main(){
for(int i=1; i<=5; i++){
    for(int j=i-1; j>=0; j--){
        printf("%c", (char)('E'-j));
    }
    printf("\n");
}
}