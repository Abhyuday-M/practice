#include<stdio.h>

int main(){
    int array[5] = {2, 5, 1, 3, 0};
    int largest = array[0];
    for(int i=0;i<5;i++){
        if(largest<array[i]) largest = array[i];
    }
    printf("largest number %d\n",largest);
}