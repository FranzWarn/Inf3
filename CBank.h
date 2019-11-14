#ifndef CBANK_H_INCLUDED
#define CBANK_H_INCLUDED

#include <string>
#include <vector>
#include "CAccount.h"
#include "CCustomer.h"

using namespace std;

class CAccount;
class CCustomer;

class CBank
{
   private:
      string name;
      string BIC;
      vector<CAccount *> accountList;

   public:
      CBank(string n, string B);

      void print();
      void printname();
      void printBIC();
      void addAccount(CAccount *newAccount);

};


#endif // CBANK_H_INCLUDED
