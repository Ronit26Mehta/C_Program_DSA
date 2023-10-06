#include<stdio.h>
void selection_sort(int a[],int n);
void main(){
    int a[100];
    int i;
    int n;
    printf("\n Enter the array Size:");
    scanf("%d",&n);
    printf("\n start entering the elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray Before Sorting:-");
    for (int k = 0; k < n; k++)
    {
        printf("%d\t",a[k]);
    }
    selection_sort(a,n);
    
}
void selection_sort(int a[],int n){
    int i;
    int j;
    int min;
    int t;
    for ( i = 0; i < n-1; i++)
    {
        min = i;
        for ( j = i+1; j < n; j++)
        {
            if(a[j]<a[min]){
                min = j;
            }
        }
         t = a[i];
         a[i]= a[min];
         a[min]=t;
         printf("\n %d iterations",i);
        for (int k = 0; k < n; k++)
        {
            printf("%d\t",a[k]);
        }
    }
     printf("\n after sorting the final array:");
    for(int r = 0;r<n;r++){
        printf("%d\t",a[r]);
    }

}