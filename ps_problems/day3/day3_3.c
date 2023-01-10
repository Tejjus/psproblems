#include<stdio.h>
#include<math.h>

int fact(int x){
    if(x==1||x==0)
    return 1;
    else if(x>1)
    return x*fact(x-1);
}

void main(){
    int n, x;
    float s=0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter x: ");
    scanf("%d", &x);
    for(int i=0; i<n; i++)
    s = s+pow(x, i)/(float)(fact(i));
    printf("%f", s);
}