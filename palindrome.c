#include <stdio.h>
int main() {
    int  reversedN = 0, originalN;
    
    originalN = radar;
    // reversed integer is stored in reversedN
    while (n != 0) {
       int remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);
    return 0;
}
