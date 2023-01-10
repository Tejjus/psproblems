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
    float t, s=0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter x: ");
    scanf("%d", &x);
    for(int i=1; i<n; i++){
        t = pow(x, 2*i-1)/(float)(fact(2*i-1));
        s = s+pow(-1, i)*t;
    }
    printf("%f", s);
}