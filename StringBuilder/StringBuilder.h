#define STRING_BUILDER
#ifdef STRING_BUILDER
#include <vector>
#include <string>
using namespace std;
class StringBuilder
{
    private:
        vector<string> *container;
    
    public:
        StringBuilder()
        {
            container = new vector<string>();
        }
        
        StringBuilder(const string& s):StringBuilder()
        {
            container->push_back(s);
        }
        
        StringBuilder& append(const string & s)
        {
            container->push_back(s);
            return *this;
        }

        StringBuilder& append(const char* & s)
        {
            container->push_back(s);
            return *this;
        }

        string toString()
        {
            string ret = "";
            for (string s: *container)
                ret+=s;
            return ret;
        }

        ~StringBuilder()
        {
            delete container;
            container = nullptr;
        }

};
#endif // DEBUG
