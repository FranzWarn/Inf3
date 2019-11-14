#ifndef CSAVINGSACCOUNT_H_INCLUDED
#define CSAVINGSACCOUNT_H_INCLUDED

#include <iostream>
#include <cstdio>
#include <string>
#include "CAccount.h"
#include "CMoney.h"
#include "CBank.h"

using namespace std;

class CSavingsAccount: public CAccount
{
   private:
      double InterestRate;

   public:
      CSavingsAccount(CBank *ba ,string i, CCustomer *c, CMoney b, double I);
      ~CSavingsAccount();
      void print();
};

#endif // CSAVINGSACCOUNT_H_INCLUDED
