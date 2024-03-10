#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the values: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int odd;
    int even;

    // Write your code below.
    // Note that the number of odd integers should be stored in the variable odd and the number of even integers should be stored in the variable even.
    even = 0;
    odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {

            even = even + (array[i] - array[i]) + 1; // Alternate way of either by subtracting n by itself and then adding 1 to it or dividing size of array(bit) byitself. Both Works
        }
        else
        {
            odd = odd + sizeof(array[i]) / sizeof(array[i]); // Alternate way of either by subtracting n by itself and then adding 1 to it or dividing size of array(bit) byitself. Both Works
        };
    };

    printf("The number of odd values is %d\n", odd);
    printf("The number of even values is %d\n", even);
    return 0;
}