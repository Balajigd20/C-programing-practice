#include <stdio.h>
int main(){
    int rows = 0;
    int coloums =0;
    char symbol ='\0';

    printf("enter the # of rows: ");
    scanf("%d", &rows);

    printf("enter the # of columns: ");
    scanf("%d", &coloums);

    printf("enter a symbol to use: ");
    scanf(" %c", &symbol);

    for(int i=0;i<rows;i++){
        for(int i=0;i<coloums;i++){
            printf(" %c", symbol);
        }
        printf(" \n");
    }
    return 0;
}