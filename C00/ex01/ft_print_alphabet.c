#include <unistd.h>


void    ft_print_alphabet(void)
{
    char    c;

    c = 'a';
    while(c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
    //write(1, "abcdefghijklmnopqrstuvwxyz", 27);
}
/*
int main(void)
{
    ft_print_alphabet();
    return(0);
}
*/