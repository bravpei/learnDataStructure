#include <stdio.h>
#include "function.h"
int main() {
    stackArray s=createStackArray(10);
    pushStackArray(1,s);
    freeStackArray(s);
    printf("%d",lengthStackArray(s));
}
