#define MAX 100

int stack[MAX];
int top = -1;

// push
void pushDigit(int var) {
    if(top == MAX) {
        printf("Stack Overflow");
    }
    else{
        top++;
        stack[top] = var;     
        stack[++top]
    }
}

// pull
void pull() {

}

// head
void peak() {

}


// isEmpty
int isEmpty() {

}