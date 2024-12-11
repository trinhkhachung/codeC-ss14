#include <stdio.h>

int main() {
    char str[] = "hello word";

    printf("Chuoi da khai bao: %s\n", str);
    printf("Cac ky tu trong chuoi: ");

    for (int i = 0; str[i] != '\0'; i++) { 
        printf("%c", str[i]);             
        if (str[i + 1] != '\0') {        
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}

