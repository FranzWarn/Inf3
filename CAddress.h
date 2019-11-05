#ifndef CADDRESS_H_INCLUDED
#define CADDRESS_H_INCLUDED

#include <string>

using namespace std;

class CAddress
{
   private:
      string street, postcode, town;

   public:
      CAddress(string s, string p, string t)
      :street(s), postcode(p), town(t){};

      void print();

};

#endif // CADDRESS_H_INCLUDED
