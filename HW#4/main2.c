#include <stdio.h>

int multiplication(int i, int j){
    if(j ==9){
        printf("%d*%d=%d\n", i, j, i*j);
        return 0;
    } else{
        printf("%d*%d=%d ", i, j, i*j);
        multiplication(i, j+1);
    }
}

int main(){
    multiplication(1, 1);
    
    return 0;
}
