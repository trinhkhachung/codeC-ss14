#include <stdio.h>
#include <string.h>
int main(){
    char arr[100];
    printf("Moi nhap: ");
    scanf("%99s", arr); 
    int length = strlen(arr); 
    printf("Xau ki tu vua nhap: %s\n", arr);
    printf("Do dai cua chuoi la: %d\n", length);
    return 0;
}
