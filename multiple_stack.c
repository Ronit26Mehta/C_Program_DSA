#include<stdio.h>
#define max 5
int stack[max],topA = -1,topB = max,val1;
void pushA(int stack[],int val);
void pushB(int stack[],int val);
int popA(int stack[]);
int popB(int stack[]);
void displayA(int stack[]);
void displayB(int stack[]);
void main(){
    int Choice,val;
    do
    {
        printf("\nMenu\n");
        printf("Enter choice for operations:\n1.push to stack A\n2.push to stack B\n3.pop from stack A\n4.pop from stack B\n5.display stack A\n6.display stack B\n7.exit");
        scanf("%d",&Choice);
        switch (Choice)
        {
        case 1:
            printf("\nEnter the Value to be pushed in stack A:");
            scanf("%d",&val);
            pushA(stack,val);
            break;
        case 2:
            printf("\nEnter the Value to be pushed in stack B:");
            scanf("%d",&val);
            pushB(stack,val);
            break;
        case 3:
            val = popA(stack);
            printf("\nthe value popped is %d from stack A",val);
           break;
        case 4:
            val=popB(stack);
            printf("\n the value poped is %d From stack B",val);
            break;
        case 5:
             displayA(stack);
             break;
        case 6:
             displayB(stack);
             break;         
        default:
            printf("\nInvalid choice or exiting the program");
            break;
        }
    } while (Choice!=7);
    
}
void pushA(int stack[],int val){
    if (topA == max-1 || topA+1 == topB)
    {
        printf("\nstack overflow");
    }
    else{
        topA+=1;
        stack[topA]=val;
    }
}
void pushB(int stack[],int val){
    if (topB -1 == topA)
    {
        printf("\nstack overflow");
    }
    else 
    {
        topB-=1;
        stack[topB]=val;

    }
    
}
int popA(int stack[]){
    if (topA == -1)
    {
        printf("\nstack underflow");
    }
    else
    {
      val1 = stack[topA];
      topA--;
      return val1;
    }
    
}
int popB(int stack[]){
    if (topB == max)
    {
        printf("\nstack underflow");
    }
    else  
    {
        val1 = stack[topB];
        topB++;
        return val1;

    }
    
    
}
void displayA(int stack[]){
    if (topA == -1 )
    {
        printf("\n Stack is Empty");
    }
    else 
    {
        printf("\nthe stack is displayed here:");
        for(int i=topA;i>=0;i--)
         printf("\t %d",stack[i]);
        
    }
}
void displayB(int stack[]){
    if (topB == max)
    {
        printf("\n the stack is displayed here:");
    }
    else{
        printf("\n the stack is displayed here:");
        for(int i =topB;i<max;i++) 
          printf("\t %d",stack[i]);
        
    }
    
}