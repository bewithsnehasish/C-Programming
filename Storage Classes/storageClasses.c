#include <stdio.h>

extern int externVar;

void func();

int main() {
    auto int autoVar = 10;

    register int registerVar = 20;

    static int staticVar = 30;

    printf("autoVar: %d\n", autoVar);
    printf("registerVar: %d\n", registerVar);
    printf("staticVar: %d\n", staticVar);
    printf("externVar: %d\n", externVar);

    func();

    return 0;
}

int externVar = 40;

void func() {
    auto int autoVarFunc = 50;
    printf("autoVarFunc inside func(): %d\n", autoVarFunc);

    static int staticVarFunc = 60;
    printf("staticVarFunc inside func(): %d\n", staticVarFunc);
}
