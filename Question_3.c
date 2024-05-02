#include <stdio.h>

void strrev(char *str) {
    int length = 0;
    char temp;

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str1[] = "1";
    char str2[] = "4 4";
    char str3[] = "9 9 9";
    char str4[] = "16 16 16";
    char str5[] = "25 25 25 25 25";

    strrev(str1);
    strrev(str2);
    strrev(str3);
    strrev(str4);
    strrev(str5);

    printf("Reversed strings:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", str4);
    printf("%s\n", str5);

    return 0;

}
