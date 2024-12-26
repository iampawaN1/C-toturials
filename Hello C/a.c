#include<stdio.h>
int main(){
    char greating[] = "Hello Bishop ";
    greating[11] = 'G' ; 
    printf("%s\n", greating);
    printf("%p",&greating);
    return 0;
}