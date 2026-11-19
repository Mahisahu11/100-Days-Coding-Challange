//Q89: Count frequency of a given character in a string.

#include<stdio.h>
int main() {
    int i, j, count;
    char str[100];
    printf("Enter the elements: ");
    
        scanf("%s", str);
    
    for(i = 0; str[i] != 0; i++) {
        count = 0;
        for(j = 0; str[j] != 0; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }
    }
    printf("%c = %d\n", str[i], count);
    return 0;
}