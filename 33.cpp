#include <bits/stdc++.h>

using namespace std;

int a[101];
int cnt[101];

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n-1;i++){
        int max_idx = i;
        for(int j=i+1;j<n;j++){
            if(a[max_idx] < a[j]) max_idx = j;            
        }
        int temp = a[i];
        a[i] = a[max_idx];
        a[max_idx] = temp;
    }

    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    cnt[0] = 1;
    for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1]) cnt[i+1] = cnt[i]+1;
        else if(a[i] == a[i+1]) cnt[i+1] = cnt[i];
    }

    printf("\n");

    int j;
    for(j=0; j<n; j++){
        printf("%d ", cnt[j]);
        if(cnt[j]==3) break;     
    }

    printf("%d", a[j]);

    return 0;
}
