#include<stdio.h>
int main(){
    char FullName[13];
    printf("Enter yoiur FullName : ");
    fgets(FullName, sizeof(FullName), stdin);

    printf("Hello %s", FullName);
    printf("%p",&FullName);
    return 0;
}