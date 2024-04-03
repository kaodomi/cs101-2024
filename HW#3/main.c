#include <stdio.h>
#include <stdlib.h>

void arrayRand(int[5][7], int);
void out2Txt(int[5][7]);

typedef struct{
    int receipt_id;
    int receipt_price;
    char receipt_time[32];
    int lotto_set[5][7];
}lotto_record_t;

int main(){
    
    printf("歡迎光臨長庚樂透彩購買機台\n");
    printf("請問您要買幾組樂透彩:");

    int input;
    int target[5][7] = {0};

    scanf( "%d", &input);
    
    if(input==0){
        printf("請輸入中獎號碼 (最多三個):");
        int winning_num[3];
        scanf( "%d", &winning_num[3]);
        printf("輸入中獎號碼為:");
        for ( int u=1 ; u<=3 ;y++){
            printf("%02d",winning_num[u]);
        }
        printf("\n以下為中獎彩卷:");
        
    }
    else{
        arrayRand(target, input);
        out2Txt(target);
        
        printf("已為您購買的 %d 組樂透組合輸出至 lotto.txt", input);
    }

    return 0;

}


void arrayRand(int v[5][7], int k){

    int Y;
    int X;
    int idx;

    srand(1);

    for ( Y=0 ; Y<k ; Y++ ){
        for ( X=0 ; X<7 ; X++ ){
            v[Y][X] = rand()%69+1;

            for ( idx=X-1 ; idx>=0 ; idx--){
                if ( v[Y][idx] == v[Y][X] ){
                    idx=-1;
                    X--;
                }
            }
        }
    }


}


void out2Txt(int out[5][7]){

    int x;
    int y;
    int filenum=;

    FILE *fptr;
    fptr = fopen("lotto[0000"filenum"].txt","w");
    
    time_t curtime;
    time(&curtime);
    
    fprintf(fptr,"======== lotto649 =========\n");
    fprintf(fptr,"=======+ No.0000%d +========", filenum);
    fprintf(fptr,"= %s", ctime(&curtime));
    buffer[strcspn(buffer, "\n")] = '\0';
    fprintf(fptr," =");

    for ( y=0 ; y<5 ;y++){
        fprintf(fptr,"[%1d]:",y+1);

        for ( x=0 ; x<7 ; x++){
            if ( out[y][x] > 0 ){
                fprintf(fptr," %02d",out[y][x]);
            }
            else{
                fprintf(fptr," __");
            }
        }

        fprintf(fptr,"\n");
    }
    fprintf(fptr,"======== csie@CGU =========\n");
    
    fclose(fptr);

}
