#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0;
    int inWord = 0;
    printf("Nhap vao chuoi bat ky: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) { 
            if (!inWord) {      
                count++;        
                inWord = 1;     
            }
        } else {                
            inWord = 0;        
        }
    }
    printf("So tu trong chuoi la: %d\n", count);

    return 0;
}

