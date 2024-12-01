#include <stdio.h>

int fibb(int p) {
    int a = 0, b = 1, c, i, result;
    for (i=2;i<=p;i++){
        result = a + b;
        c = a;
        a = result;
        b = c;
    }
    if (p==1)
        return 0;
    else if(p==2)
        return 1;
    else if(p>=3)
        return result;
}

void main() {
    int a;
    printf("Enter the value of n: ");
    scanf("%d", &a);
    printf("%dth term of the Fibonacci Sequence is %d\n", a, fibb(a));
}