#include <stdio.h>
typedef struct {
    
} my_mm_t;

//
int g_mm[10];
my_mm_t mms;

//
void print_calloc_array(int flag) {
    
}

//
int *my_calloc(int n, int size) {
    
}

//
void my_free(int *p) {
    
}

//
int main()
{
    int *np1 = my_calloc(1, 1);
    int *np2 = my_calloc(1, 2);
    int *np3 = my_calloc(1, 3);
    int *np4 = my_calloc(1, 4);
    my_free(np1);
    my_free(np4);
    int *np5 = my_calloc(1, 5);
    int *np6 = my_calloc(1, 1);
    return 0;
}
