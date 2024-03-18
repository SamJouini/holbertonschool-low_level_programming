#ifndef FUNCTIONPOINTERS_H
#define FUNCTIONPOINTERS_H

void print_name(char *name, void (*f)(char *));

int int_index(int *array, int size, int (*cmp)(int));

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif