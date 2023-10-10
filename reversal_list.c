#include<stdio.h>
#define max 10
void push(int stack[],int val);
int pop(int stack[]);
int stack[max],top = -1,val1;
void main(){
    int n,i;
    int val;
    int list[max];
    printf("\nEnter the number of elements for stack:");
    scanf("%d",&n);
    printf("\n start entering array  elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&list[i]);
    }
    printf("\nnot reversed list:\n");
    for (int i = 0; i < n; i++)
    {
         printf("%d\t",list[i]);
    }
    for ( i = 0; i < n; i++)
    {
        val = list[i];
        push(stack,val);
    }
    for (int i = 0; i < n; i++)
    {
        val = pop(stack);
        list[i] = val;
    }
    printf("\nreversed list:\n");
    for (int i = 0; i < n; i++)
    {
         printf("%d\t",list[i]);
    }
}
void push(int stack[],int val){
    if (top == max)
    {
        printf("\n stack overflow\n");
    }
    else{
        top++;
        stack[top] = val;
    }
}
int pop(int stack[]){
    if (top == -1)
    {
        printf("\n stack overflow");
    }
    else{
      val1 = stack[top];
      top--;
      return val1;
    }
    
}