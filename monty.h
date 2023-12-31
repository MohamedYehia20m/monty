#ifndef MONTY_H
#define MONTY_H

/******************************************************/
/*********************** Includes *********************/
/******************************************************/

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/******************************************************/
/*********************** Structures *******************/
/******************************************************/

/**
 * struct stack_s - doubly linked list of a stack/queue
 * @n: integer
 * @prev: previous element of stack/queue
 * @next: next element of stack/queue
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and opcode function
 * @opcode: opcode
 * @f: function handling opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/******************************************************/
/******************* Extern variables *****************/
/******************************************************/
extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);

/******************************************************/
/*************** Functions Prototypes *****************/
/******************************************************/

/*file operations*/
void open_file(char *file_name);
int parse_line(char *buffer, int line_number, int format);
void read_file(FILE *);
int len_chars(FILE *);
void find_func(char *, char *, int, int);

/*Stack operations*/
stack_t *create_node(int n);
void free_nodes(void);
void print_stack(stack_t **, unsigned int);
void push(stack_t **new_element, __attribute__((unused))unsigned int ln);
void add_to_queue(stack_t **, unsigned int);

void call_fun(op_func, char *, char *, int, int);

void peek(stack_t **, unsigned int);
void pop_top(stack_t **, unsigned int);
void nop(stack_t **, unsigned int);
void swap_nodes(stack_t **, unsigned int);

/*Math operations with nodes*/
void add_nodes(stack_t **stack, unsigned int ln);
void sub_nodes(stack_t **, unsigned int);
void div_nodes(stack_t **, unsigned int);
void mul_nodes(stack_t **, unsigned int);
void mod_nodes(stack_t **, unsigned int);

/*String operations*/
void print_char(stack_t **, unsigned int);
void print_str(stack_t **, unsigned int);
void rotl(stack_t **, unsigned int);

/*Error hanlding*/
void errors_1_5(int error_code, ...);
void errors_6_9(int error_code, ...);
void errors_10_11(int error_code, ...);
void rotr(stack_t **, unsigned int);

#endif
