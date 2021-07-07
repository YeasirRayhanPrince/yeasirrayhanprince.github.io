#define STACK_MAX_SIZE 20

int data[STACK_MAX_SIZE]; // storage
int top; // index: where the next insertion will happen

void initialize_stack()
{
    top = 0 ; // initially there are no items
}

int push(int item)
{
    if(top == STACK_MAX_SIZE) return -1; // the static array is full
    data[top] = item ; // insert item at top
    top++; // update top so that next insertion can be a success
    return 1;
}

int pop()
{
    if(top == 0) return -1; // the static array is empty
    top--;
    return data[top]; // return the item that is deleted
}

int empty()
{
    if(top == 0)
        return 1;
    else
        return 0;
}


int full()
{
    if(top == STACK_MAX_SIZE)
        return 1;
    else
        return 0;
}

int main(){

}
