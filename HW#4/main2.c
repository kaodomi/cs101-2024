#include <stdio.h>

int multi(int i, int j){
    if(j ==1){
        printf("%d*%d=%d\n", i, j, i*j);
        return 0;
    } else{
        printf("%d*%d=%d\n", i, j, i*j);
        multi(i, j-1);
    }
}

int main(){
    multi(1, 1);
    
    return 0;
}
