#ifndef CACCOUNT_H_INCLUDED
#define CACCOUNT_H_INCLUDED

#include <string>
#include "CMoney.h"
#include "CCustomer.h"

class CCustomer;

using namespace std;

class CAccount{

   private:
      string iban;
      CCustomer *customer;
      CMoney balance;

   public:
      CAccount(string i, CCustomer *c, CMoney b);

      void print();
      void printiban();
};

#endif // CACCOUNT_H_INCLUDED
