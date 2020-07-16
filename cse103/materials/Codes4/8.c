/* Input 1: 31
   Input 2: -21 (Any problem with the Output? How can you solve it?)
   Input 3: 0 (Any problem with the Output? How can you solve it?)
   Input 4: 101 (Any problem with the Output? How can you solve it?)
*/
#include <stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);

    if(mark>=97 && mark<=100){
        printf("A+\n");
    }
    else if(mark>=90 && mark<=96){
        printf("A\n");
    }
    else if(mark>=87 && mark<=89){
        printf("A-\n");
    }
    else if(mark>=83 && mark<=86){
        printf("B+\n");
    }
    else if(mark>=80 && mark<=82){
        printf("B\n");
    }
    else if(mark>=77 && mark<=79){
        printf("B-\n");
    }
    else if(mark>=73 && mark<=76){
        printf("C+\n");
    }
    else if(mark>=70 && mark<=72){
        printf("C\n");
    }
    else if(mark>=67 && mark<=69){
        printf("C-\n");
    }
    else if(mark>=63 && mark<=66){
        printf("D+\n");
    }
	else if(mark>=60 && mark<=62){
        printf("D\n");
    }
    else {
        printf("F\n");
    }

    return 0;

}
