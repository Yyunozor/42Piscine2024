#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb2_recursive(int i, int j) {
    if (i > 98) {
        return;
    }

    if (j > 99) {
        ft_print_comb2_recursive(i + 1, i + 2);
        return;
    }

    ft_putchar(i / 10 + '0');
    ft_putchar(i % 10 + '0');
    ft_putchar(' ');
    ft_putchar(j / 10 + '0');
    ft_putchar(j % 10 + '0');

    if (i != 98 || j != 99) {
        ft_putchar(',');
        ft_putchar(' ');
    }

    ft_print_comb2_recursive(i, j + 1);
}

void ft_print_comb2(void) {
    ft_print_comb2_recursive(0, 1);
}
/*
int main(void) {
    ft_print_comb2();
    return 0;
}
*/