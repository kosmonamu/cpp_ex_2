#include <stdio.h>

int a[50+2][50+2];
int main(){

    freopen("C:\\code\\cpp_ex_2\\input.txt", "rt", stdin);
    int n, cnt=0;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1] && a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j]) cnt++;
        }
    }

    printf("%d", cnt);
 
    return 0;
}