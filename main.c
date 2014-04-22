#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    char c;
    scanf("%c", &c);
    
    switch(c) {
        case 'a'...'z':
            printf("Is lower char: %c\n", c);
            break;
        default:
            printf("Not lower char: %c\n", c);
            break;
    }

    return 0;
}
