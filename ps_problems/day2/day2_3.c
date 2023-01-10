#include<stdio.h>

void main(){
for(int i=1; i<=3; i++){
    for(int j=0; j<i; j++){
        printf("%c", (char)('A'+i-1));
    }
    printf("\n");
}
}