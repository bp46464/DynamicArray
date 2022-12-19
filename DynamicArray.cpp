#include <iostream>
#include <ctime>
#include<chrono>
#include<string>
#include"array.h"
int main()
{
    clock_t start = clock();
    Dynamic_Array<int>* tab = new Dynamic_Array<int>();
    int rozmiar = 1000000;
    for (int i = 0; i < rozmiar; i++)
    {
        tab->add(i);
    }
    clock_t t1 = clock();
    std::cout << "Time:" << (float)(t1 - start) / (float)CLOCKS_PER_SEC << std::endl;
    std::cout << "Time ps:" << (float)(t1 - start) / (float)CLOCKS_PER_SEC / rozmiar << std::endl;

   // tab->bubble_sort();
   // tab->clear();
    //std::cout << "\nElementy tablicy: " << tab->fun();
    clock_t end = clock();
    std::cout << "Total Time:" << (float)(end - start) / (float)CLOCKS_PER_SEC << std::endl;
}