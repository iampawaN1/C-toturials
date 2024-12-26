#include<stdio.h>
int main(){
    int LockerCode;

    printf("Enter LockerCode :");
    scanf("%d", &LockerCode);

    if(LockerCode == 1551) {
        printf("Acess granted ! Locker is opening");
    } else
    printf("Alert ! Acess not granted");

    return 0;
}