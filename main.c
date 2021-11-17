#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_mat.h"



int main(){
void func_a(int[10][10]);
int func_b(int[10][10], int i, int j);
int func_c(int[10][10], int i, int j);

    
    char ch;
    while (scanf(" %c", &ch) != EOF)
    {
        int arr[10][10];        // the mat
        while (ch != 'D')
        {
            if (ch == 'A')
            {
                func_a(arr);
            }
            if (ch == 'B')
            {
                int i,j;
                scanf(" %d %d", &i, &j);
                if(func_b(arr,i,j) == 1){
                    printf("True \n");
                }
                else{
                    printf("False \n");
                }
            }
            if (ch == 'C')
            {
                int i,j;
                scanf(" %d %d", &i, &j);
                int res = func_c(arr,i,j);
                printf("%d\n", res);

            }
            
            scanf(" %c", &ch);
        }
        
    }

    return 0;
}