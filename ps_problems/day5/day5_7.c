#include<stdio.h>

void main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0; i<5; i++){
        int t=arr[9-i];
        arr[9-i]=arr[i];
        arr[i]= t;
    }

    for(int i=0; i<10; i++)
    printf("%d ", arr[i]);
}