#include<stdio.h>
int ls(int a[],int n, int x);
void main(){
    int a[100];
    int n;
    int x;
    int i;
    printf("Enter the number of the elments:");
    scanf("%d", &n);
    printf("start entering the number of the elments");
    for(i = 0;i < n ;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be found:");
    scanf("%d",&x);
    i = ls(a,n,x);
    if(i==n){
    printf("the element was not found");
    }
    else{
        printf("the elment was found at %d index",i);
    }
    }
    int ls(int a[], int n ,int x){
        int i;
        for( i = 0 ; i < n ; i++){

            
            if(a[i] == x){
                return i;
            }
        }
        return i;
    }


