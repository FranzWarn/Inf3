#ifndef CCOUSTOMER_H_INCLUDED
#define CCOUSTOMER_H_INCLUDED

#include <vector>
#include <string>
using namespace std;

#include "CDate.h"
#include "CAddress.h"
#include "CAccount.h"

class CAccount;

class CCustomer
{
   private:
      long id;
      string name;
      CDate birthday;
      CAddress address;
      vector<CAccount *>accountList;

   public:
      CCustomer(long i, string n, CDate b, CAddress a);

      void print();
      void printName();
      void addAccount(CAccount *newAccount);

};

#endif // CCOUSTOMER_H_INCLUDED
