#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);

    if( mark >= 97 ){
        printf("A+\n");
    }
    else if( mark >= 90 ){
        printf("A\n");
    }
    else if( mark >= 87 ){
        printf("A-\n");
    }
    else if( mark >= 83 ){
        printf("B+\n");
    }
    else if( mark >= 80 ){
        printf("B\n");
    }
    else if( mark >= 77 ){
        printf("B-\n");
    }
    else if( mark >= 73 ){
        printf("C+\n");
    }
    else if( mark >= 70 ){
        printf("C\n");
    }
    else if( mark >= 67 ){
        printf("C-\n");
    }
    else if( mark >= 63 ){
        printf("D+\n");
    }
	else if( mark >= 60 ){
        printf("D\n");
    }
    else {
        printf("F\n");
    }

    return 0;

}
