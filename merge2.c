#include<stdio.h>
void merge(int array[],int l,int mid,int h);
void merge_sort(int array[],int l,int h);

void main(){
    int array[100];
    int l;
    int h;
    int n;
    printf("Enter the size of the array:\n ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the lower bound:\n");
    scanf("%d",&l);
    printf("Enter the high bound:\n");
    scanf("%d",&h);
    printf("unsorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
    merge_sort(array,l,h);
    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
}
void merge_sort(int array[],int l,int h){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        merge_sort(array,l,mid);
        merge_sort(array,mid+1,h);
        merge(array,l,mid,h);
    }
     
}
void merge(int array[],int l,int mid , int h){
    int n1;
    int n2;
    n1 = mid - l + 1;
    n2 = h - mid;
    int L[n1+1];
    int R[n2+1];
    for (int i = 0; i < n1; i++)
    {
        L[i] = array[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = array[mid+1+i];
    }
    L[n1] = 99999;
    R[n2] = 99999;
    int i =0;
    int j =0;
    for (int k = l; k <= h; k++)
    {
        if (L[i]<R[j])
        {
            array[k] = L[i];
            i = i + 1;
        }
        else{
            array[k] = R[j];
            j = j + 1;
        }
        
    }
    
    
}
