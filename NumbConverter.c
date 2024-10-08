#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>

void ConvInt() {
    int i = 0;
    char result[32];
    int num;
    int base;
    printf("Enter the number to convert: ");
    scanf("%d", &num);
    printf("Choose a base: ");
    scanf("%d", &base);
    if (base <= 16 && base > 1) {
     while (num > 0) {
        int r = num % base;
        num = num / base;
        if (r > 9) {
            result[i++] = 'A' + r - 10;
        } else {
            result[i++] = '0' + r;
        }
     }
    result[i] = '\0'; 
    printf("THE RESULT IS: ");
    for (int k = i - 1; k >= 0; k--) {
        printf("%c",result[k]);
    }
  }
    else {
         printf("Unsopported base! It must be an integer in the range from 2 to 16!\n");
         ConvInt();
    }
        
}

int main() {
    bool on = true;
    char input;
    
    while (on) {
        printf("\nType F or f if you want to stop the program, otherwise type R or r : ");
        scanf(" %c", &input); 
        if (input == 'R'|| input == 'r') {
            ConvInt();
        } 
        else if (input == 'F' || input == 'f') {
            for (int h = 1; h <=5; h++){
                printf("THE PROGRAM WILL STOP IN: ");
                printf("%d",5-h+1);
                printf(" seconds\n");
                sleep(1);
            }
            on = false;
        
        }
    }
    return 0;
}
