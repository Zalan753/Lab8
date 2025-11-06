/* Task description:
Write a program that asks the user to enter a word, stores it in a string, and prints it letter by letter vertically. For example if you give „Word”, the result should be:

W
o
r
d

You can assume that the word is never longer than 99 characters.

*/


#include <stdio.h>
#include <string.h>

int main(){
char str[100];
char*p=str;
printf("Enter a word\n");
fgets(str, 100, stdin);
while(*p != '\0'){
  printf("%c\n", *p);
  p++;
}
  return 0;
}
