// Recursion

#include <iostream>

void tailHead(int n) {
    if (n > 0) {
        printf("%d ", n);   // Ausgabe: 3 2 1
        tailHead(n - 1);
        //printf("%d ", n);   // Ausgabe: 1 2 3
    }
}

//int x = 0;  // Gleich wie static int x = 0;
int staticVariableRecursion(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return staticVariableRecursion(n - 1) + x;
    }
    return 0;
}

int main()
{
    int x = 3;
    tailHead(x);

    int r = 0;
    r = staticVariableRecursion(5);
    printf("\n%d", r);  // Ausgabe: 25
    return 0;
}
