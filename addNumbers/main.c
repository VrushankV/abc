#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

void findSum(char[] ,char[]);

int main(){
    char number1[MAX],number2[MAX],result[MAX];
    printf("Enter two large numbers: ");
    scanf("%s",number1);
    scanf("%s",number2);
    findSum(number1,number2);
    return 0;
}

void findSum(char number1[MAX], char number2[MAX]){
    int length1 , length2;
    length1 = strlen(number1);
    length2 = strlen(number2);
    printf("%s %d %d %s",number1,number2, length1,length2);
}
