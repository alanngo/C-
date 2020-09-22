#include <iostream>
#include <fstream>
#include "ArrayList.h"

using namespace std;
template <class E>
void log(const E& obj){cout<<obj<<endl;}

ArrayList<string>* buildList(string fileName)
{
    ArrayList<string>* ret = new ArrayList<string>();
    string line ="";
    ifstream infile;
    infile.open(fileName);
    while (getline(infile, line))
        ret->add(line);
    infile.close();
    return ret;
}

int main()
{
    ArrayList<string>* li = new ArrayList<string>();
    // li->add("ramen tatsuya");
    // li->add("halal bros");
    // li->add("poke bowl");
    // li->add("torchy's tacos");
    // li->add("pluckers");
    // li->add("888");
    // li->remove("888");
    // li->add("hopdoddy");
    // li->add("popeyes");
    // log(*li);
    // log(li->get(6));
    // log(li->indexOf("poke bowl"));
    // log(li->size());

    ArrayList<string>* names = buildList("names.txt");
    names->add(0, "flying dutchman");
    names->add(1, "larry lobster");
    log(*names);
    return 0;
}