#include <stdio.h>
#include <math.h>

int a[9][9];
int main(){

    freopen("C:\\code\\cpp_ex_2\\48.txt", "rt", stdin);
    int avg_sum[9] = {0}, distance = 214748367, d_avg[9] = {0};
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            avg_sum[i] += a[i][j];    
        }
        avg_sum[i] = (avg_sum[i] / 9.0) + 0.5;
        //avg_sum[i] += 0.5;
    }

    for(int i=0; i<9; i++){
        distance = 214748367;
        for(int j=0; j<9; j++){
            if(distance>abs(avg_sum[i]-a[i][j])){
                distance = abs(avg_sum[i]-a[i][j]);
                d_avg[i] = a[i][j];
            } 
            else if(distance==abs(avg_sum[i]-a[i][j])){
               if(d_avg[i] < a[i][j]) d_avg[i] = a[i][j];
            }         
        }
    }   

    for(int i=0; i<9; i++) printf("%d %d\n", avg_sum[i], d_avg[i]);
 
    return 0;
}