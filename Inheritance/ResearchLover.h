#include "Lover.h"
#include <string>
#include <iostream>
using namespace std;
class ResearchLover:public Lover
{
    public:
        ResearchLover(string n):Lover(n)
        {
            cout<<"research lover constructor"<<endl;
        }

        void foo() override
        {
            cout<<Lover::name<<" is a research lover"<<endl;
        }
};
