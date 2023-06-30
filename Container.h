// Name: Anita Jalili-Kalhori
// SSID: 187-49-22
// Assignment #: 1
// Submission Date: 3/3/23
//
#ifndef _CONTAINER_H
#define _CONTAINER_H
#include <iostream>
#include <string>

template <class T, int N>
class Container
{
    public:
    using value_type = T;
    void add_item(T item); // output container full , if add_item cannot add
    T get_item(int index ); //throw a string if index out of bounds
    void remove_item(T item); // remove first occurrence of item
    bool empty (); // check if Container is empty
    void clear (); // clear all contents , assign value_type
    constexpr int size (); // return current number of elements in container
    T* begin ();
    T* end();
    private:
    int _size = 0;
    T container[N];
    
};// Container interface

/* Sample Template member function definitions */
template <class T, int N>
constexpr int Container <T, N>:: size (){ return _size ;}

template <class T, int N>
void Container <T, N>:: clear ()
{
    for (int i = 0; i < _size; i++)
        container[i] = T(); //or value_type ();
    _size = 0;
}

template <class T, int N>
T* Container <T, N>:: begin (){ return _size ? &container [0] : nullptr ;}

template <class T, int N>
T* Container <T, N>::end(){ return begin () + _size ;}

//Anita's code from here :)
//ADD ITEM FUNCTION
template <class T, int N>
void Container <T, N>:: add_item(T item){
    
    if (_size >= N)
    {
        std::cout << "output container is full :(" << std::endl;
    }
    for (int i = 0; i < N; i++)
    {
        if (_size < N)
        {
            container[_size] = item;
            ++_size;
            break;
        
        }
    }
}

//GET ITEM FUNCTION
template <class T, int N>
T Container <T, N>:: get_item(int index)
{
    //throw if index is out of bounds
    if (index > N)
        {
        std::cout << "item is out of bounds :(" << std::endl;
            //throw exc (2.4)
    }
    //check if index == the i
    for (int i = 0; i < _size ; i++)
    {
        if (i == index)
        {
            break;
            }
        }
    return container[index];
}

//REMOVE_ITEM FUNCTION
template <class T, int N>
void Container<T, N>:: remove_item(T item)
{
    for (int i = 0; i < _size; i++)
    {
        if (container[i] == item)
        {
            
            for (int j = i + 1; j < _size; j++)
            {
                container[j-1] = container[j];
            }
            
        }
        
    }
    --_size;
}

//EMPTY FUNCTION
template <class T, int N>
bool Container<T, N>:: empty()
{
    for (int i = 0; i < N; i++)
    {
        if (_size > 0 )
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return 0;
}




#endif

