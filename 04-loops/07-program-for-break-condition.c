#include <stdio.h>

int main () {

    int count;

    printf("Enter a positive integer: ");
    scanf("%d", &count);    

    // Change condition to '1' (true) so the loop ALWAYS runs at least once
    // OR acts as an infinite loop until we manually break it.
    while (1) { 
        
        // 1. Check for negative input immediately
        if (count < 0) {
            printf("Negative number entered, exiting loop.\n");
            break; // This will now work!
        }

        // 2. Check if we reached 0 (normal loop finish)
        if (count == 0) {
            break; 
        }

        printf("%d\n", count); 
        count--; 
    }
    
    return 0;
}