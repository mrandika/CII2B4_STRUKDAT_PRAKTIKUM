//
// Created by Andika on 02/12/21.
//

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

#ifndef W9_STACK_H
#define W9_STACK_H

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
void ascending(stack &s);
void descending(stack &s);

#endif //W9_STACK_H
