#pragma once
#include<iostream>
#include<string>
template <typename T>
class Dynamic_Array
{
public:
    Dynamic_Array();
    T* tab;
    int size;
    int count;
    int factor = 2;

    void add(T);
    T get(int);
    void grow_array();
    void clear();
    void swap(T, int);
    void bubble_sort();
    std::string fun();
};

template<typename T>
inline Dynamic_Array<T>::Dynamic_Array()
{
    size = 1;
    count = 0;
    tab = new T[1];
    tab[0] = NULL;
}

template<typename T>
inline void Dynamic_Array<T>::add(T dane)
{
    if (size == count)
    {
        grow_array();
    }
    tab[count] = dane;
    count++;
}

template<typename T>
inline T Dynamic_Array<T>::get(int index)
{
    if (index >= size)
        return NULL;
    else
        return tab[index];
}

template<typename T>
inline void Dynamic_Array<T>::grow_array()
{
    T* temp = new T[size * factor];
    for (int i = 0; i < size; i++)
    {
        temp[i] = tab[i];
    }

    tab = temp;
    size = size * factor;
}

template<typename T>
inline void Dynamic_Array<T>::clear()
{
    size = 0;
    count = 0;
    delete[] tab;
}

template<typename T>
inline void Dynamic_Array<T>::swap(T dane, int index)
{
    if (index > size)
        return;
    else
        tab[index] = dane;

}

template<typename T>
inline void Dynamic_Array<T>::bubble_sort()
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (tab[j + 1] > tab[j])
            {
                T temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;

            }
        }
    }
}
template<typename T>
inline std::string Dynamic_Array<T>::fun()
{
    T* tmp_tab = new T;
    tmp_tab = tab;
    std::string tmp;
    for (int i = 0; i < count; i++)
    {
        tmp += std::to_string(tmp_tab[i]);
        tmp += " ";
    }

    return tmp;
}
