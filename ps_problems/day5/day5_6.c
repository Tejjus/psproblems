#include<stdio.h>

void main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0; i<10; i=i+2){
        int t=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]= t;
    }

    for(int i=0; i<10; i++)
    printf("%d ", arr[i]);
}