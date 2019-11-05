#ifndef CACCOUNT_H_INCLUDED
#define CACCOUNT_H_INCLUDED

#include <string>
#include "CMoney.h"

class CCustomer;

using namespace std;

class CAccount{

   private:
      string iban;
      CMoney balance;
      CCustomer *customer;

   public:
      CAccount(string i, CMoney b, CCustomer *c);

      void print();
      void printiban();
};

#endif // CACCOUNT_H_INCLUDED
