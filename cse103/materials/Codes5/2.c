#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);

    if( mark < 60 ){
        printf("F\n");
    }
    else if( mark <= 62 ){
        printf("D\n");
    }
    else if( mark <= 66 ){
        printf("D+\n");
    }
    else if( mark <= 69 ){
        printf("C-\n");
    }
    else if( mark <= 72 ){
        printf("C\n");
    }
    else if( mark <= 76 ){
        printf("C+\n");
    }
    else if( mark <= 79 ){
        printf("B-\n");
    }
    else if( mark <= 82 ){
        printf("B\n");
    }
    else if( mark <= 86 ){
        printf("B+\n");
    }
    else if( mark <= 89 ){
        printf("A-\n");
    }
	else if( mark <= 96 ){
        printf("A\n");
    }
    else {
        printf("A+\n");
    }

    return 0;

}

