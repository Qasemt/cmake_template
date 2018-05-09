#include <iostream>
#include <stdlib.h>
#include "helper.h"

int main()
{

   
    // printf("======================= TEST LIB SHARED (hello_test64.dll)\n");
    // Lib_Helper d;
    // d.add(120, 600);
    // printf("LIB HELPER : %d \n", d.getSum());
    
    printf("\n======================= TEST EXE \n");
    int i = 1;
    int hh = 333;
    Helper *h = new Helper();
    h->add(10, 21);
    printf("HELPER RESULT---: %d\n", h->getSum());

    std::cout << "HELLO WORLD " << std::endl;
    for (int k = 0; k < 5; k++)
    {
        printf(" v: %d ", k);
    }
    getchar();
    return 0;
}
