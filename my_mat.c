#include <stdio.h>
#include <string.h>
#include <sys/queue.h>

int char2dig(char ch){
    return ch - '0';
}


int str2int(char *ptr){
    int num;
    num = 0;
    while (*ptr != '\0')
    {
        if ((*ptr <= '9') && (*ptr >= '0'))
        {
            num = num * 10 + char2dig(*ptr);
        }
        ptr++;
    }
    return num;
}

void func_a(int arr[10][10]){

    int counter = 0;
    int i = 0, j = 0;
    while (counter < 100)
    {
        char carr[10] = "";
        scanf("%s ", carr);
        char *ptr = carr;
        
        arr[i][j] = str2int(ptr);
        if (j == 9)
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

int q[10], visited[10], n = 10,f = 0, r = -1;
void bfs(int v, int arr[10][10]){

    for (int i = 0; i < n; i++)
    {
        if (arr[v][i] && !visited[i])
        {
            q[++r] = i;
        }
        if (f <= r)
        {
            visited[q[f]] = 1;
            bfs(q[f++], arr);
        }
        
    }
    
}

int func_b(int arr[10][10], int i, int j){
    
    if (i == j)
    {
        return 0;
    }
    

    for (int i = 0; i < n; i++)
    {
        q[i] = 0;
        visited[i] = 0;
    }

    bfs(i,arr);
    
    if(visited[j]){
        return 1;
    }
    return 0;
    
    

}



