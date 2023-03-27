#include<iostream>
#include"DynamicArray.h"

int main() // some tests
{
    DynamicArray<int> str(10);

    std::cout << "enter some elements in dynamic array: ";
    for (int i = 0; i < 10; i++)
    {
        int x;
        std::cin >> x;
        str.Set(i, x);
    }
    std::cout << "fifth element is " << str.Get(4) << std::endl;

    std::cout << "enter new size ";
    int ns;
    std::cin >> ns;
    str.Resize(ns);

    for (int i = 0; i < ns; i++)
        std::cout << i + 1 << "th element is " << str.Get(i) << std::endl;
    return 0;
}

