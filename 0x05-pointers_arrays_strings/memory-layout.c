#include <stdio.h>

int unintialized_data = 10;

int main(void)
{
    static int data = 10; // Stored in uninitialized area
    return 0;
}
