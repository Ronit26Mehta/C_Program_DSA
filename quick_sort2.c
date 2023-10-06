#include<stdio.h>
int partition(int array[], int beg, int end);
void quick_sort(int array[], int beg, int end);

int main() {
    int array[100];
    int n;

    printf("Enter the size of array:\n");
    scanf("%d", &n);
    
    printf("Start entering the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("The unsorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }

    quick_sort(array, 0, n - 1);

    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    } 
    return 0;  
}

void quick_sort(int array[], int beg, int end) {
    int loc;
    if (beg < end) {
        loc = partition(array, beg, end);
        quick_sort(array, beg, loc - 1);
        quick_sort(array, loc + 1, end);
    }
}

int partition(int array[], int beg, int end) {
    int left, right, temp, loc, flag;
    loc = left = beg;
    right = end;
    flag = 0;
    
    while (flag != 1) {
        while ((array[loc] <= array[right]) && (loc != right))
            right--;
        
        if (loc == right)
            flag = 1;
        else if (array[loc] > array[right]) {
            temp = array[loc];
            array[loc] = array[right];
            array[right] = temp;
            loc = right;
        }
        
        if (flag != 1) {
            while ((array[loc] >= array[left]) && (loc != left))
                left++;
            
            if (loc == left)
                flag = 1;
            else if (array[loc] < array[left]) {
                temp = array[loc];
                array[loc] = array[left];
                array[left] = temp;
                loc = left;
            }
        }
    }
    return loc;
}
