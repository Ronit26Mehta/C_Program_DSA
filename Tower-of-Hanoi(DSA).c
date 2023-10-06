// Online C compiler to run C program online
#include <stdio.h>
void tower_of_hanoi(int n, char startpeg, char destpeg, char auxpeg);
int main() {
    // Write C code here
    int n;
    printf("Enter the pegs");
    scanf("%d",&n);
    printf("the value entered is %d",n);
    tower_of_hanoi(n,"A","C","B");
    return 0;
}
void tower_of_hanoi(int n,char startped,char destpeg,char auxpeg){
    if(n==1){
        printf("the distance between moving disks is 1 ");
        return;
    }
    tower_of_hanoi(n-1,startped,auxpeg,destpeg);
    printf("the %d is covered between %c and %c \n",n,startped,auxpeg);
    tower_of_hanoi(n-1,auxpeg,destpeg,startped);
}