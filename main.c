#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_mat.h"



int main(){
void func_a(int[10][10]);

    char ch;
    while (scanf(" %c", &ch) != EOF)
    {
        int arr[10][10];        // the mat

        while (ch != 'D')
        {
            if (ch == 'A')
            {
                
                func_a(arr);

                // for (int i = 0; i < 10; i++)
                // {
                //     for (int j = 0; j < 10; j++)
                //     {
                //         printf("%d ", arr[i][j]);
                //     }
                    
                // }
                printf("%ld ", sizeof(arr)/4);
                
            }
            if (ch == 'B')
            {
                /* code */
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