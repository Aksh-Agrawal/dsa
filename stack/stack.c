#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int item[MAX];
    int top;
}Stack;

void init(Stack*s){
    s->top = -1;
}

int isFull(Stack*s){
    s->top == MAX -1 ;
}

int isEmpty(Stack*s){
    s->top == -1;
}

void push(Stack*s, int value){
    if(isFull(s)){
        printf("Can't Push Stack is Full");
    }else{
        s->item[++(s->top)] = value;
        printf("The Pushed Value is : %d\n",value);
    }
}

int pop(Stack*s){
    if(isEmpty(s)){
        printf("Can't pop stack is empty\n");
    }else{
        return s->item[(s->top)--];
    }
}

int peek(Stack*s){
    return s->item[(s->top)];
}

void display(Stack*s){
    printf("Top to Bottom \n");
    for (int i = s->top ; i >= 0 ; i--){
        printf("%d", s->item[i]);
    }
}