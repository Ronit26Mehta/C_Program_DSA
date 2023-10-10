#include<stdio.h>
#include<string.h>
#define max 10
int stack[max],top =-1;
void push(char value);
char pop();
void main(){
    int flag = 1,i;
    char exp[max],temp;
    printf("\n Enter an expression:");
    gets(exp);
    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{' )
        {
            push(exp[i]);
        }
        if (exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if (top == -1)
            {
                flag = 0;
                break;
            }
            
        }
         else {
                temp = pop();
                if ((exp[i] == ')' && (temp == '[' || temp == '{')) ||
                    (exp[i] == '}' && (temp == '(' || temp == '[')) ||
                    (exp[i] == ']' && (temp == '(' || temp == '{'))) {
                    flag = 0;
                    break;  // Exit the loop early, as it's already invalid
                }
        }
        if (top>=0)
        {
            flag =0;
        }

        if (flag == 1)
        {
            printf("\nvalid expression");
        }else{
            printf("\n invalid expression");

        }
    }
}
void push(char value){
if (top == max-1)
{
    printf("\n stack overflow");
}
else{
    top++;
    stack[top]=value;

}
}
char pop(){
    if (top == -1)
    {
        printf("\n stack underflow");
    }
    else 
    {
        return (stack[top--]);
    }
    
    
}