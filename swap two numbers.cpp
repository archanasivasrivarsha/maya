#include <stdio.h>

int main()
 {
    int a, b;

    // Input two integers
    scanf("%d %d", &a, &b);

    // Swap without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output the swapped values
    printf("%d%d", a, b);

    return 0;
}
