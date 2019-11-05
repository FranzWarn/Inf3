#ifndef CCOUSTOMER_H_INCLUDED
#define CCOUSTOMER_H_INCLUDED

#include <vector>
#include <string>
using namespace std;

#include "CDate.h"
#include "CAddress.h"
#include "CCoustomer.h"


class CCustomer
{
   private:
      long id;
      string name;
      CDate birthday;
      CAddress address;
      vector<CAccount *>accountList;

   public:
      CCustomer(long i, string n, CAddress a, CDate b);

      void print();
      void addAccount(CAccount *newAccount);

      void set_id(long id){this->id=id;}
      void set_name(string name){this->name=name;}
 //     void set_address(CAddress(string s, string p, string t)){this->address.street=s, this->address.postcode=p, this->address.town=t;}

};

#endif // CCOUSTOMER_H_INCLUDED
