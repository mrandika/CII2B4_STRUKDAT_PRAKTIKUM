//
// Created by Andika on 16/12/21.
//

#ifndef W11_STACK_H
#define W11_STACK_H

#define top(S) (S).top
#define info(S) (S).info

const int NMAX = 10;

typedef int infotype;

struct stack {
    infotype info[NMAX];
    int top;
};

void createStack(stack &s);
bool isEmpty(stack s);
bool isFull(stack s);
void push(stack &s, infotype value);
int pop(stack &s);
void printInfo(stack s);

void undoAction(stack &undo, stack &redo);
void redoAction(stack &redo, stack &undo);

#endif //W11_STACK_H
