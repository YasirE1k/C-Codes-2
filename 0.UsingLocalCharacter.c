#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    printf("Hello World\n");
    printf("������");
    return 0;
}

