#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb2(void) {
    int i, j;

    for (i = 0; i <= 98; i++) {
        for (j = i + 1; j <= 99; j++) {
            ft_putchar(i / 10 + '0');
            ft_putchar(i % 10 + '0');
            ft_putchar(' ');
            ft_putchar(j / 10 + '0');
            ft_putchar(j % 10 + '0');

            if (i != 98 || j != 99) {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
}
/*
int main(void) {
    ft_print_comb2();
    return 0;
}
*/