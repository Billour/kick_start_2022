#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i_array[] = {3, 5, 33, 12121};
    int i_process[20];
    int *ptr = i_array;
    int i = 1, itmp = 0, i_process_i = 0;

    do
    {

        i_process_i = 0;
        itmp = ptr[i];
        while (itmp > 0) //do till num greater than  0
        {
            i_process[i_process_i] = itmp % 10;     //split last digit from number
            printf("%d\n", i_process[i_process_i]); //print the digit.

            itmp = itmp / 10; //divide num by 10. num /= 10 also a valid one
        }

        printf("\n");
        i++;
    } while (i <= ptr[0]);

    system("pause");
    return 0;
}
