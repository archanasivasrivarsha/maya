#include <stdio.h>
#include <ctype.h>  // for toupper()

int main()
 {
    char ch;
    scanf("%c", &ch);

    // Convert input to uppercase to handle case-insensitivity
    ch = toupper(ch);

    switch(ch)
     {
        case 'V':
            printf("Violet");
            break;
        case 'I':
            printf("Indigo");
            break;
        case 'B':
            printf("Blue");
            break;
        case 'G':
            printf("Green");

