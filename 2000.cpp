#include <stdio.h>

int main()
 {
    int N;
    scanf("%d", &N);  // Read number of Rs.2000 notes
    
    int result = N * 4;  // Each Rs.2000 note = 4 Rs.500 notes
    printf("%d", result);
    
    return 0;
}
