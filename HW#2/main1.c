#include <stdio.h>
#include <stdlib.h>

void lotto_print(int i, int j){
    
}

int main(){
    int i=0, n;
    scanf("%d", &n);
    
    int a[5][7];
    
    FILE* fp;
    fp = fopen("lotto.txt", "w+");
    fprintf(fp, "========= lotto649 =========");
    
    srand(1);
    for(i=0;i<(n*8);i++){
        if()
        
        
        if((i%8)==0){
            fprintf(fp, "\n[%d]:",i/8+1);
        } 
        else{
            fprintf(fp, " %02d", rand()%69+1);
        }
    }
    
    for(i=n*8;i<40;i++){
       if((i%8)==0){
            fprintf(fp, "\n[%d]:",i/8+1);
        } 
        else{
            fprintf(fp, " --");
        } 
    }
    fprintf(fp, "\n========= csie@CGU =========\n");
    
    fclose(fp);
    
    return 0;
}
