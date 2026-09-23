#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // code here
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);

    return 0;
}