#include <stdio.h>

int main() {
    int x;
    int d[10001] = {};
    scanf("%d", &x);
    for(int i = 1; i < x + 1; i++){
        d[i] = d[i - 1] + 1;
        if((i % 2) == 0){
            if((d[i / 2] + 1) < d[i]){
                d[i] = d[i / 2] + 1;
            }
        }
        if((i % 3) == 0){
            if((d[i / 3] + 1) < d[i]){
                d[i] = d[i / 3] + 1;
            }
        }
        if((i % 5) == 0){
            if((d[i / 5] + 1) < d[i]){
                d[i] = d[i / 3] + 1;
            }
        }
    }
    printf("%d", d[x]);
}
