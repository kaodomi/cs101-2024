#include <stdio.h>
#include <string.h>

typedef struct Books {
    int id;
    int price;
    char name[50];
}books_t;


void total_price(books_t boo[]){
    int sum = 0;
    for (int i=0; i<6; i++){
        sum+=boo[i].price; 
    }
    printf("%d\n", sum);
    return;
}


void list_books(books_t boo[], int i){
    i-=1;
    printf("%d %s\n", boo[i].price, boo[i].name);
    return;
};


int main(){
    int n=0;
    scanf("%d", &n);
    books_t boo[6];
    
    boo[0].id=1;
    boo[0].price=1000;
    strcpy(boo[0].name,"All the Light We Cannot See");
    
    boo[1].id=2;
    boo[1].price=300;
    strcpy(boo[1].name,"The 38 Letters from J.D. Rockefeller to his son");
    
    boo[2].id=3;
    boo[2].price=1000;
    strcpy(boo[2].name,"The Ballad of Songbirds and Snakes");
    
    boo[3].id=4;
    boo[3].price=550;
    strcpy(boo[3].name,"Killers of the Flower Moon");
    
    boo[4].id=5;
    boo[4].price=870;
    strcpy(boo[4].name,"Elon Musk");
    
    boo[5].id=6;
    boo[5].price=1344;
    strcpy(boo[5].name,"Milk and Honey 12-Month 2024");
    
    if(n==0){
        total_price(boo);
    }
    else{
        list_books(boo, n);
    }

    return 0;
}
