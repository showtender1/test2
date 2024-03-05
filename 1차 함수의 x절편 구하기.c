#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n];
    long long int x2[n];
    long long int check[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= arr[i]; j++){
            if(j * j < arr[i]){
                x2[i] = j * j;
                check[i] = j;

            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%lld %lld\n", x2[i], check[i]);
    }
}
