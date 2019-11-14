#ifndef CACCOUNT_H_INCLUDED
#define CACCOUNT_H_INCLUDED

#include <string>
#include "CMoney.h"
#include "CCustomer.h"
#include "CBank.h"

class CCustomer;
class CBank;

using namespace std;

class CAccount{

   private:
      CBank *bank;
      string iban;
      CCustomer *customer;
      CMoney balance;

   public:
      CAccount(CBank *ba, string i, CCustomer *c, CMoney b);
      ~CAccount();

      CCustomer *getCustomer()     {return customer;}
      CMoney getBalance()          {return balance;}
      void print();
      void printiban();

};

#endif // CACCOUNT_H_INCLUDED
