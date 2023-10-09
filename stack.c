#include<stdio.h>
#define max 10
int stack[max],top=-1;
void push(int stack[],int val);
int pop(int stack[]);
int peek(int stack[]);
void display(int stack[]);
void main(){
    int val,choice;
    do{
        printf("stack operation\n");
        printf("1.press 1 for push\n2.press 2 for pop\n3.press 3 for peek\n4.press 4 for peek\n5.press 5 for exit");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter Value to push:");
            scanf("%d",&val);
            push(stack,val);
            break;
        case 2:
            val = pop(stack);
            if (val == -1)
            {
                printf("stack empty");
            }
            else{
                printf("the value poped is : %d",val);
            }
            break;
        case 3:
           val = peek(stack);
           if (val == -1)
           {
             printf("stack is empty");
           }
           else{
            printf("peeked element is : %d",val);
           }
           break;
        case 4:
           display(stack);
           break;
        default:
            printf("Enter valid choice");
            break;
        }
    }while (choice!=5);
    
}
