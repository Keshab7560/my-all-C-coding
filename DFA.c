#include <stdio.h>
#include <string.h>
int isAccepted(char *str) {
 int state = 0; // Initial state
 for (int i = 0; i < strlen(str); i++) {
 char symbol = str[i];
 if (symbol == 'a') {
 state = 1; // Transition to state 1 when 'a' is encountered
 } else if (symbol == 'b') {
 state = 0; // Stay in or transition to state 0 when 'b' is encountered
 } else {
 // If an invalid character is encountered
 return 0;
 }
 }
 // DFA accepts if it ends in state 1 (last character is 'a')
 return state == 1;
}
int main() {
 char str[100];
 printf("Enter a string over {a, b}: ");
 scanf("%s", str);
 if (isAccepted(str)) {
 printf("The string is accepted by the DFA.\n");
 } else {
 printf("The string is not accepted by the DFA.\n");
 }
 return 0;
}
