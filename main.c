#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_mat.h"



int main(){
void func_a(int[10][10]);
int func_b(int[10][10], int i, int j);
int str2int(char*);

    
    char ch;
    while (scanf(" %c", &ch) != EOF)
    {
        int arr[10][10];        // the mat
        while (ch != 'D')
        {
            if (ch == 'A')
            {
                func_a(arr);
                for (int i = 0; i < 10; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }   
            }
            if (ch == 'B')
            {
                int i,j;
                scanf(" %d %d", &i, &j);
                printf("%d ,%d", i, j);
                if(func_b(arr,i,j) == 1){
                    printf("True \n");
                }
                else{
                    printf("False \n");
                }
            }
            if (ch == 'C')
            {
                /* code */
            }
            
            scanf(" %c", &ch);
        }
        
    }

    return 0;
}