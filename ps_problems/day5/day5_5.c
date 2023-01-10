#include<stdio.h>

void main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[100], j=0;
    for(int i=1; i<=n; i=i+2){
        arr[j]=i;
        j++;
    }
    if(n%2==0){
    for(int i=n; i>=2; i=i-2){
        arr[j]=i;
        j++;
    }
    }
    else{
        for(int i=n-1; i>=2; i=i-2){
        arr[j]=i;
        j++;
    }
    }
    for(int i=0; i<j; i++)
    printf("%d ", arr[i]);

}