#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+\n");
        return 1;
    } else if (n == 0) {
        printf("0\n");
        return 0;
    } else {
        printf("-\n");
        return -1;
    }
}

int main() {
    int number = 5;
    int result = print_sign(number);

    // You can use 'result' if needed, which will contain 1, 0, or -1 based on the sign.
    
    return 0;
}
