#include <stdio.h>

//DO NOT EDIT THIS FUNCTION
int check(int x[], int size){
    int freq[10]= {};
    int i;
    for(i = 0; i < size; i++){
        freq[x[i]] += 1;
    }
    int flag = 1;
    for(i = 1; i < 10; i++){
        if(freq[i] != 1){
            flag = 0;
            break;
        }
    }
    return flag;

}

// IMPLEMENT THE MAIN FUNCTION
int main(){

}















