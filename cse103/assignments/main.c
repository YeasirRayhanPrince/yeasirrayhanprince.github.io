#include <stdio.h>
/*
This function returns the maximum element of array a. If the max element is
a duplicate then pick the first occurrence of the duplicate element
*/
int find_max(int a[], int size){

}
/*
This function returns 1 if a is monotone increasing, else 0
An array is monotone increasing if each element is either less or equal than the next element,
a_1 <= a_2 <= a_3 <= a_4 <= ... ... <= a_size
*/
int is_monotone_increasing(int a[], int size){

}

/*
This function returns 1 if a is monotone decreasing, else 0
An array is monotone increasing if each element is either greater or equal than the next element,
a_1 >= a_2 >= a_3 >= a_4 >= ... ... >= a_size
*/
int is_monotone_decreasing(int a[], int size){

}

int main(){
    int N; //size of the input array
    scanf("%d", &N)
    int x[N];
    int i;
    for(i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }
    // Call function find_max to find the index of the largest element of the input array



    // Call function is_monotone_increasing to check if the sub-array from index 0 - l (index of the largest element) is monotone
    // increasing or not




    // Call function is_monotone_decreasing to check if the sub-array from index l (index of the largest element)- N-1  is monotone
    // decreasing or not



    // Write additional codes below to check if the array is mountain array or not.



    return 0;
}















