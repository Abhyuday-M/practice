#include<stdio.h>

int main(){
    int array[5] = {4,1,6,2,3};
    int find = 6;
    for(int i=0;i<5;i++){
        if(find==array[i]) printf("%d is the index position of element",i);
    }
}