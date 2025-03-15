#include <stdio.h>
// Swap function using pointers
void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
// Bubble Sort Algorithm
void sort(int arr[],int l) {

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - i - 1; j++) {
            if (arr[j] > arr[j + 1]) 
                swap(&arr[j], &arr[j + 1]);  // Pass addresses
        }
    }
}
int main() {
    int arr[100]={};
    int l;
    printf("Enter the length of array: ");
    scanf("%d",&l);
    printf("\nNow start entering elements:\n");
    for (int m=0;m<l;m++) {
        int val;
        scanf("%d",&val);
        arr[m]=val;
    }
    sort(arr,l); // Sorting the array
    printf("\nYour new sorted array:\n");
    for (int t = 0; t < l; t++) {
        printf("%d  ", arr[t]);
    }
    int n;
    printf("\nEnter a no you want to found: ");
    scanf("%d",&n);
    int low=0;
    int high=l-1;
    int mid;
    /* It will return index no of no requested to search.
    If not found then it will return 0*/
    while (low<=high) {
        mid=(low+high)/2;
        if (arr[mid]==n) {
            printf("Index no of value to be searched: %d",mid);
            return 1;
        }
        else if (arr[mid]>n) high--;
        else low++;
    }
    printf("No not found!");
    return 0;

}