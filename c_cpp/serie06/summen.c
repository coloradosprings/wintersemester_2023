#include <stdio.h>

double folge_1(int N){
    double i,k;
    double sum = 0;
    for (i = 0;i <= N;i++) {
        for (k = 0;k <= i;k++) {
        sum += 1/ ( (N +1)*(N + 1) * (i-k+1)*(i-k+1) );
    }
    }
    return sum;
}
double folge_2(int N){
    double i;
    double sum = 0;
    for (i = 0;i <= N;i++) {
        sum += 1/ ( (i +1)*(i + 1) );
    }
    return sum;
}

int main(){
    int N;
    printf("N := \n");
    scanf("%d",&N);
    printf("1 : %d,2 : %d",folge_1(N),folge_2(N));

}