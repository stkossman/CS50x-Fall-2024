#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Hello World!\n");
    string name = get_string("What is your name?\n");
    printf("Hello, %s\n", name);
}