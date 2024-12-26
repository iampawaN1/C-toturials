#include<stdio.h>
int main() {
    int myName[] ={54,235,2432,3412,044,932, 13,42,4352,241};
    int i;

    float avg, sum =0;

    int length = sizeof(myName) /sizeof(myName[0]);

    for(i=0; i<10; i++){
        sum += myName[i];
    }
    avg = sum / length;

    printf("the avg myNane is %.2f", avg);
    return 0; 
}