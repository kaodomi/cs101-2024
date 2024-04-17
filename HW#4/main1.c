#include <stdio.h>
#include <stdio.h>
typedef struct {
    char *num[10];
} my_mm_t;

//
int g_mm[10];
my_mm_t mms;

//
void print_calloc_array(int flag) {
    while (g_mm != '\0') {
        if (g_mm != 0) {
            *mms.num == "1";
        }
        mms.num++;
        *g_mm++;
    }
    printf("%s", mms);
}

//
int *my_calloc(int n, int size) {
    if((g_mm + size) != ('\0' || NULL)){
        for(t == size; t>0; t--){
            while(g_mm != '\0'){
                if (g_mm == 0){
                g_mm = size;
                }
            *g_mm++;
            }  
        }
        print_calloc_array(1);
        printf("\n");
    }
    else{
        print_calloc_array(1);
        printf(" <- Out of space\n");
    }
    
}

//
void my_free(int *p) {
    while (*g_mm != '\0') {
        if (*g_mm == *p) {
            g_mm = 0;
        }
        g_mm++;
    }
    print_calloc_array(1);
    
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
