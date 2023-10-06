#include<stdio.h>
void insertion_sort(int a[],int n);
void main(){
    int a[100];
    int n;
    int i;
    printf("\n Enter the number of the elements for an Array:");
    scanf("%d",&n);
    printf("\n start enterring the elemets");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Before Sorting:");
    for(int k = 0;k<n;k++){
        printf("%d \t",a[k]);
    }
    insertion_sort(a,n);
}
void insertion_sort(int a[],int n){
    int t;
    int j;
    for(int i = 1;i<n;i++){
        t=a[i];
        j=i-1;
        while (j>=0 && a[j]>t)
        {
            a[j+1] = a[j];
            j = j - 1 ;
        }
        a[j+1]=t;
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