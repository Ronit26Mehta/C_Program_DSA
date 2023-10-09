#include<stdio.h>
#define size 10
int largest(int array[],int n);
void radix_sort(int array[], int n);
void main(){
    int array[size];
    int i;
    int n;
    printf("\n Enter the number of elements for an array:");
    scanf("%d",&n);
    printf("\n Start Entering the number of elements in an array:");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n array before sorting:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\nArray after each iterations:");
    radix_sort(array,n);
    printf("\n Sorted array:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d \t",array[i]);
    }
}
int largest(int array[],int n){
    int large = array[0],i;
    for (int i = 1; i < n; i++)
    {
         if (array[i]>large)
         {
            large = array[i];
         }
         
    }
    return large;
}
void radix_sort(int array[],int n){
     int bucket[size][size],bucket_count[size];
     int i,j,k,remainder,NOP = 0,divisor = 1,large,pass;
     large = largest(array,n);
     while (large>0)
     {
        NOP++;
        large/=size;
     }
     for ( pass = 0; pass < NOP; pass++)
     {
        for ( i = 0; i < size; i++)
        {
            bucket_count[i]=0;
        }
        for ( i = 0; i < n; i++)
        {
            remainder = (array[i]/divisor)%size;
            bucket[remainder][bucket_count[remainder]]=array[i];
            bucket_count[remainder]+=1;
        }
        i =0;
        for ( k = 0; k < size; k++)
        {
            for ( j = 0; j < bucket_count[k]; j++)
            {
                array[i]= bucket[k][j];
                i++;
            }
            
        }
        divisor*=size;
        printf("\n");
         for (int i = 0; i < n; i++)
    {
        printf(" %d \t",array[i]);
    }
     }
     
}