#include <stdio.h>
#include <locale.h>

void task1();

int main()
{
    setlocale(LC_ALL, "RUS");

    task1();

    return 0;
}

void task1()
{
    printf("         |    |    |\n");
    printf("        )_)  )_)  )_)\n");
    printf("       )___))___))___)\\\n");
    printf("     _____)_____))_____)\\\\\n");
    printf("    _____|______||________\\\\\n");
    printf("   \\^^^^^^^^^^^^^^^^^^^^^^^/\n");
    printf("    \\_____________________/\n");
    printf("\n");
}