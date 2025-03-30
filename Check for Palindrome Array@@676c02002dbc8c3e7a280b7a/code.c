#include <stdio.h>

int main() {
    int n, i, isPalindrome = 1;
    
    // Input array size
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is a palindrome
    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if (isPalindrome) {
        printf("Palindrome Array\n");
    } else {
        printf("Not a Palindrome Array\n");
    }

    return 0;
}
