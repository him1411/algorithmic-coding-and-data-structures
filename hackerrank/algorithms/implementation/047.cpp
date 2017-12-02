#include<stdio.h>
#include<time.h>
int ackerman(int m, int n){
    int result;
    if(m == 0){
        result = n + 1;
    }
    else if(n == 0){
        result = ackerman(m - 1, 1);
    }
    else{
        result = ackerman(m - 1, ackerman(m, n - 1));
    }
    return result;
}
int main(void){
    int i,j;
    clock_t begin = clock();
    for(i = 0; i < 6 ; i ++){
        for(j = 0; j < 6; j ++){
            printf("i = %d  j = %d  ackerman(i, j) = %d\t%f\n",i,j,ackerman(i, j),(double)(clock() - begin) / CLOCKS_PER_SEC);
        }
    }
}
