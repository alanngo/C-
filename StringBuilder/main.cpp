#include <iostream>
#include <unordered_map>
#include <map>
#include "StringBuilder.h"
using namespace std;

template<class E>
void log(const E& e){cout<<e<<endl;}


unordered_map<long, long> *cache = new unordered_map<long,long>();

long fib(long n)
{
      cache->emplace(0, 0);
      cache->emplace(1, 1);
      cache->emplace(2, 1);

      try
      {
            return cache->at(n);
      }
      catch(const exception& e)
      {
            cache -> emplace(n, fib(n-1) + fib(n-2));           
      }
      return cache->at(n);
      
}
int main(int argc, char*argv[])
{
      StringBuilder *sb = new StringBuilder("omruti loves ");
      char favLang[3] = {'S', 'Q', 'L'};
      sb->append("fortnite ")
      .append("harry potter ")
      .append("django ")
      .append("c ")
      .append(favLang)
      .append("and gave away his gaming PC for a ")
      .append({'c','h','r','o','m','e','b','o','o','k'});
      log(sb->toString());
      sb->~StringBuilder();
      return 0;
}