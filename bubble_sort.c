#include<stdio.h>
void bubble_sort(int a[],int n);
void main(){
    int a[100];
    int i;
    int n;
    printf("Enter the number of the elements to be put in array: \n");
    scanf("%d",&n);
    printf("\nStart Enterring the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("before sorting:");
    for(int k = 0; k < n ; k++){
        printf("\t");
        printf("%d",a[k]);

    }
    bubble_sort(a,n);
}
void bubble_sort(int a[],int n){
int i ;
int j ;
int temp = 0;
for(i = 0;i<n-1;i++){
    for ( j = 0; j < n-i-1; j++)
    {
     if (a[j] > a[j+1])
     {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
     }
      
    }
     printf("\n %d iteration",i);
    for( int k = 0; k < n; k++)
    {
        printf("\t");
       printf("%d",a[k]);
    }
    }
    printf("\n after sorting of an array:");
    for( int k = 0; k < n; k++)
    {
        printf("\t");
       printf("%d",a[k]);
    }
    
}