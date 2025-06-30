#include <stdio.h> //standard input output library

// binay search function
int binary_search(int a[], int n, int x) {
    int l = 0; // lower bound
    int r = n - 1; //upper bound

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] == x) {
            return mid; // Element found
        } else if (a[mid] < x) {
            l = mid + 1; // search in right side array
        } else {
            r = mid - 1; // search in left side array
        }
    }

    return -1; // Element not found
}

int main() {
    int n, x; // declare variables
// take user input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &x);

    int index = binary_search(a, n, x); // function call store the return value in index
    
// check for index
    if (index != -1) {
        printf("Element %d found at index %d.\n", x, index);
    } else {
        printf("Element %d not found in the array.\n", x);
    }

    return 0;
}
