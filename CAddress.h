#ifndef CADDRESS_H_INCLUDED
#define CADDRESS_H_INCLUDED

#include <string>

using namespace std;

class CAddress
{
   private:
      string street, housenumber, postcode, city;

   public:
      CAddress(string s, string h, string p, string c);

};

#endif // CADDRESS_H_INCLUDED
