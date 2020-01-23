#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b){
        if(a==b && b==c && c==a){
            printf("Equilateral triangle\n");
        }
        else if(a==b || b==c || c==a){
            printf("Isosceles triangle\n");
        }
        else{
            printf("Scalene Triangle\n");
        }
    }
    else{
        printf("Not a valid triangle\n");
    }

}

