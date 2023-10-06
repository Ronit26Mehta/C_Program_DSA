#include<stdio.h>
int binary_search(int a[],int n,int x);
void main(){
    int a[100];
    int i;
    int n;
    int x;
    printf("Enter the number of the elments:");
    scanf("%d", &n);
    printf("start entering the number of the elments");
    for(i = 0;i < n ;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be found:");
    scanf("%d",&x);
    i = binary_search(a,n,x);
    printf("the result is:%d",i);
    
}
int binary_search(int a[],int n,int x){
    int i = 0;
    int low = 0;
    int high = n -1;
    int mid;
    mid = (low+high)/2;
    while (low<=high)
    {
        if(a[mid] == x){
            return mid;
        }
        else if (a[mid] < x)
        {
            low = mid +1;
        }
        else 
        {
           high = mid - 1;
        }             
        
        
    }
    return -1;
    

}