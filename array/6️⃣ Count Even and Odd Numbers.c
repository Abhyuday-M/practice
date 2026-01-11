#include<stdio.h>

int main(){
    int array[5]={1,2,3,4,5};
    int even=0,odd=0,i;
    for(i=0;i<5;i++){
        if(array[i]%2==0) even++;
        else odd++;
    }
    printf("odd is %d and even is %d",odd,even);
}