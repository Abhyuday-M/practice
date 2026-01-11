#include<stdio.h>

int main(){
    int array[6] = {12, 35, 1, 10, 34, 1};
    int largest = array[0];
    int second_largest = array[1];
    for(int i =0;i<6;i++){
        if(array[i]>largest){
            second_largest=largest;
            largest=array[i];
        }
        else if(array[i]<largest && array[i]>second_largest) second_largest=array[i];
    }
    printf("second largest is %d\n",second_largest);
    return 0;
}