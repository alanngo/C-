#include <iostream>
#include "Lover.h"
#include "ResearchLover.h"
using namespace std;

template <class E>
void log(const E&e){cout<<e<<endl;}

int main()
{
    log("parent reference parent object");
    Lover *l0 = new Lover("264352");
    l0->foo(); //replacement overriding

    log("");

    log("parent reference child object");
    Lover *l1 = new ResearchLover("6627");
    l1->foo(); //replacement overriding
    return 0;
}