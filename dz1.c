#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    char name[] = "мищуканд";
    printf("%c", name[1]);
}