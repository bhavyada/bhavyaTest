/*
 ============================================================================
 Name        : trial_function_pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#define NUM_A 1
#define NUM_B 2

// define a function pointer type
typedef int (*two_num_operation)(int, int);

// an actual standalone function
static int sum(int a, int b) {
    return a + b;
}

// use function pointer as param,
static int sum_via_pointer(int a, int b, two_num_operation funp) {
    return (*funp)(a, b);
}

// use function pointer as return value,
static two_num_operation get_sum_fun() {
    return &sum;
}

// test - use function pointer as variable,
void test_pointer_as_variable() {
    // create a pointer to function,
    two_num_operation sum_p = &sum;
    // call function via pointer
    printf("pointer as variable:\t %d + %d = %d\n", NUM_A, NUM_B, (*sum_p)(NUM_A, NUM_B));
}

// test - use function pointer as param,
void test_pointer_as_param() {
    printf("pointer as param:\t %d + %d = %d\n", NUM_A, NUM_B, sum_via_pointer(NUM_A, NUM_B, &sum));
}

// test - use function pointer as return value,
void test_pointer_as_return_value() {
    printf("pointer as return value:\t %d + %d = %d\n", NUM_A, NUM_B, (*get_sum_fun())(NUM_A, NUM_B));
}

int main() {
    test_pointer_as_variable();
    test_pointer_as_param();
    test_pointer_as_return_value();

    return 0;
}
