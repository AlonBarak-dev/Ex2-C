#include <stdio.h>
#include <string.h>

int char2dig(char ch){
    return ch - '0';
}


int str2int(char *ptr){
    int num;
    num = 0;
    while (*ptr != '\0')
    {
        num = num * 10 + char2dig(*ptr);
        ptr++;
    }
    return num;
}

void func_a(int arr[10][10]){


    char dig;
    int counter = 0;
    int i = 0, j = 0;
    while (counter < 100)
    {
        char carr[] = "";
        scanf("%s", carr);
        char *ptr = carr;
        
        arr[i][j] = str2int(ptr);
        if (j == 10)
        {
            j=0;
            i += 1;
        }
        else{
            j += 1;
        }
        counter += 1;
    }
    return;
}