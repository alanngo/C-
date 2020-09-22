#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>

using namespace std;
template <class E>
class ArrayList
{
    private:
        E* elements;
        int s;
        int defaultCapacity = 5;

        void resize()
        {
            int newSize = s *2;
            E* arr = new E[newSize];
            for (int i =0; i< s; i++)
                arr[i] = elements[i];

            defaultCapacity = newSize;
            elements = arr;
            delete [] arr;
        }

        void remove(int pos)
        {
            for (int i = pos; i< s; i++)
                elements[i] = elements[i+1];
            
            s --;
        }

    public:
        ArrayList():s(0){elements = new E[defaultCapacity];}
        ~ArrayList(){delete [] elements;}
        
        void add(const E& elem);
        void add(int i, const E& elem);
        void remove(const E& elem);
        void clear();

        int size() const;
        int indexOf(const E& elem) const;
        E get(int i) const;
        bool contains(const E& elem) const;
        bool empty() const;

        friend ostream& operator<<(ostream& os, const ArrayList<E>& arr)
        {
            if (arr.empty())
                os<<"EMPTY LIST"<<endl;
            else
            {
                for (int i =0; i<arr.s; i++)
                    os<<arr.elements[i]<<endl;
            }
            
            return os;
        }
};


#include "ArrayList.cpp"
#endif