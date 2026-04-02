#include "Array.hpp"

template <typename T>
Array<T>::Array() : element(NULL), size(0){};
template <typename T>
Array<T>::Array(unsigned int n) : size(n)
{
    if (n != 0)
    {
        return new T[n];
    }
    return NULL;
};

template <typename T>

Array<T>::Array(const Array &other)
{
    this->_size = other._size;
    if (this->_size == 0)
        this->_element = NULL;
    else
    {
        this->_element = new T[this->_size];
        for (int i = 0; i < this->_size; i++)
        {
            this->_element[i] = other._element[i];
        }
    }
}
template <typename T>
Array<T>::~Array()
{
    delete[] T;
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == other)
        return *this;
    delete[] _elements;
    this->_size = other._size;
    _elements = new T[_size];
    for (int i = 0; i < this->_size; i++)
    {
        this->_element[i] = other._element[i];
    }
    return *this;
}
template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (this->_size <= index)
    {
        throw std::out_of_range("Index out of bounds");
    }
    else
    {
        return _elements[index];
    }
}
template <typename T>
unsigned int Array<T>::size() const
{
    
}