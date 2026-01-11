#include<stdio.h>

int main(){
    int array[5] = {8, 10, 3, 7, 9};
    int smallest = array[0];
    for(int i = 0;i<5;i++){
        if(smallest>array[i]) smallest = array[i];
    }
    printf("smallest is %d\n",smallest);
}