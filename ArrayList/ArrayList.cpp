#include "ArrayList.h"

template <class E>
void ArrayList<E>:: add(const E& elem)
{
    if (s >= defaultCapacity)
        resize();
        
    elements[s] = elem;
    s++;
}
template <class E>
void ArrayList<E>:: add(int i, const E& elem)
{
    for (int j = s; j> i; j--)
        elements[j] = elements[j-1];
    
    elements[i] = elem;
    s++;
}

template <class E>
void ArrayList<E>:: remove(const E& elem)
{
    if (contains(elem))
    {
        int pos = indexOf(elem);
        remove(pos);
    }
}


template <class E>
void ArrayList<E>:: clear()
{
    E* blank = new E[s];
    elements = blank;
    delete [] blank;
    s = 0;
}

template <class E>
int ArrayList<E>:: size() const{return s;}

template <class E>
int ArrayList<E>:: indexOf(const E& elem) const
{
    if (!empty())
    {
        for (int i =0; i<s; i++)
        {
            if (elements[i]==elem)
                return i;
        }
    }
    return -1;
}

template <class E>
E ArrayList<E>:: get(int index) const
{
    if (!empty())
    {
         for (int i =0; i<s; i++)
        {
            if (i==index)
                return elements[i];
        }
    }
    return NULL;
}

template <class E>
bool ArrayList<E>:: contains(const E& elem) const{return indexOf(elem)>=0;}

template <class E>
bool ArrayList<E>:: empty() const{return s==0;}

