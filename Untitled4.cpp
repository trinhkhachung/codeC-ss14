#include <stdio.h>

int main() {
    char str[] = "Lap trinh C"; 
    char ch;                  
    int count = 0;             
    printf("Chuoi da khai bao: %s\n", str);
    printf("Nhap vao 1 ky tu bat ky: ");
    scanf(" %c", &ch); 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) { 
            count++;
        }
    }
    printf("So lan xuat hien cua ky tu '%c' trong chuoi: %d\n", ch, count);

    return 0;
}

