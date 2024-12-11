#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "hello world 123!";
    int letterCount = 0;            
    printf("Chuoi da khai bao: %s\n", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            letterCount++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", letterCount);
    return 0;
}

