#ifndef LOVER_H
#define LOVER_H
#include <string>
#include <iostream>
using namespace std;
class Lover
{
    protected:
        string name;

    public:
        Lover(string n):name(n)
        {
            cout<<"lover constructor "<<endl;
        }
        virtual void foo()
        {
            cout<<name<<" is a lover"<<endl;
        }
        

};
#endif