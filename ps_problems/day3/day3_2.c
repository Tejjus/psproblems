#include<stdio.h>

int fact(int x){
    if(x==1||x==0)
    return 1;
    else if(x>1)
    return x*fact(x-1);
}

void main(){
    int n;
    float s=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    s = s+(float)fact(i)/i;
    printf("%f", s);
}