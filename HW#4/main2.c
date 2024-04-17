#include <stdio.h>

int multiplication(int i, int j){
    if(i==9){
        if(j ==9){
            printf("%d*%d=%d\n", i, j, i*j);
            return 0;
        } 
        else{
            printf("%d*%d=%d ", i, j, i*j);
            multiplication(i, j+1);
        }
    }
    else{
        if(j ==9){
            printf("%d*%d=%d\n", i, j, i*j);
            i++;
            multiplication(i, 1);
        } 
        else{
            printf("%d*%d=%d ", i, j, i*j);
            multiplication(i, j+1);
            }
    }
}

int main(){
    multiplication(1, 1);
    
    return 0;
}
