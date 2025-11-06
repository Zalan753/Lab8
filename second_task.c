/* Task description:
It is a common task to remove leading and trailing spaces from a string. This function is often called trim().

Write a function that removes the spaces from the beginning and from the end of a string (other spaces must stay)! 
For example if the original string is "  Hi, what's up?   ", then the new string should be "Hi, what's up?". 
The function should take two parameters: a source array (containing the original string) and a destination array (to put the trimmed string into). 
You can assume that the destination array is long enough for the resulting string.


Hint: 1) First find (and remember) the first non-space character from the beginning of the string, 2) then find the end of the string, 3) and starting from there find the first non-space character backwards (the last one in the string). These two positions identify the segment of the string to copy. After copying into destination, do not forget to terminate the destination string.

Write a short program, too, that calls this function and demonstrates that it operates correctly!

Modify your function to allocate space for the trimmed string! What is the difference in calling? Why the resulted string still "alive" outside the function? (Do not forget to erase the memory allocation!)

*/


#include <stdio.h>
#include <string.h>
void trim(char str1[], char str2[], int size){
    char *first = NULL;
    char *last = NULL;
    for (int i = 0; i < size; i ++){
        if (str1[i] != ' '){
            first = &str1[i];
            break;
        }
    }
    for (int i = strlen(str1)-1; i >= 0; i-- ){
        if (str1[i] != ' '){
            last = &str1[i];
            break;
        }
    }
    if (first == NULL || last == NULL){
        str2[0] = '\0';
    }
    while(first <= last){
        *str2 = *first;
        first++;
        str2++;
    }
    *str2 = '\0';
    
}

int main(){
int size = 100;
char str1[] = "  Mukszik basszameg          ";
char str2[100];
trim(str1, str2, size);
printf("%s\n", str2);
return 0;
}
