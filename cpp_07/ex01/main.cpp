#include <iostream>

template <typename T>
void func(T &b)
{
    std::cout << b << std::endl;
}
template <typename T>
void iter(T *arr, size_t nb, void (*func)(T &))
{
    for (size_t i = 0; i < nb; i++)
    {
        func(arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    iter(arr, 4, func);
}