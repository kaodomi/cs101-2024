#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf(" 歡迎光臨長庚樂透彩購買機台\n 請問您要購買幾組樂透彩: ");
    int i=0, n;
    scanf("%d", &n);
    
    FILE* fp;
    fp = fopen("lotto.txt", "w+");
    time_t curtime;
    time(&curtime);
    fprintf(fp, "======== lotto649 =========\n= %s =", ctime(&curtime));
    
    srand((unsigned) time(NULL));
    for(i=0;i<(n*7);i++){
        if((i%7)==0){
            fprintf(fp, "\n[%d]:",i/7+1);
        } 
        else{
            fprintf(fp, " %02d", rand()%69+1);
        }
    }
    
    for(i=n*7;i<35;i++){
       if((i%7)==0){
            fprintf(fp, "\n[%d]:",i/7+1);
        } 
        else{
            fprintf(fp, " --");
        } 
    }
    fprintf(fp, "\n======== csie@CGU =========\n");
    
    fclose(fp);
    
    printf(" 已為您購買的 %d 組樂透組合輸出至 lotto.txt", n);
    
    return 0;
}
