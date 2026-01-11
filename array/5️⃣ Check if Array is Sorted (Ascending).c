#include<stdio.h>

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int smallest = array[0];
    int a=0;
    for(int i=0;i<5;i++){
        if(smallest>array[i]){
            printf(" unsorted ");
            a++;
        }
    }
    if(a==0) printf("True");
}