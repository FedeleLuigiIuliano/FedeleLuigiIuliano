#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>
                          //This code provides you the possibility to convert a number using a base, both given by the user suing a simple console based interface; 
void ConvInt() {
    int i = 0;            // index for the result array 
    char result[32];      // array used to store the reminders;
    int num;
    int base;
    printf("Enter the number to convert: "); // ask user to choose a number;
    scanf("%d", &num);                       // scan the input given and assign it to num variable;
    printf("Choose a base: ");               // ask user to choose a base number for the conversion between 2 and 16;
    scanf("%d", &base);                      // scan the input given and assign it to base variable;
    if (base <= 16 && base > 1) {
     while (num > 0) {
        int r = num % base;            // remainder 
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
        printf("%c",result[k]);           // visualize the array of the result in the reversed way;
    }
  }
    else {
         printf("Unsopported base! It must be an integer in the range from 2 to 16! \n");
         ConvInt();
    }
        
}

int main() {
    bool on = true;
    char input;
    
    while (on) {
        printf("\nType F or f if you want to stop the program, otherwise type R or r : "); //ask for user's input;
        scanf(" %c", &input); //scan the input;
        if (input == 'R'|| input == 'r') {
            ConvInt();
        } 
        else if (input == 'F' || input == 'f') {
            for (int h = 0; h < 5; h++){
                printf("THE PROGRAM WILL STOP IN: ");
                printf("%d",5-h);                          //just a funny countdown :);
                printf(" seconds\n");
                sleep(1);
            }
            on = false; //close the program;
        
        }
    }
    return 0;
}
