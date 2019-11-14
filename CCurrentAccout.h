#ifndef CCURRENTACCOUT_H_INCLUDED
#define CCURRENTACCOUT_H_INCLUDED

#include "CAccount.h"
#include "CMoney.h"
#include "CBank.h"


class CCurrentAccount: public CAccount
{
   private:
      CMoney *Disposit;

   public:
      CCurrentAccount(CBank *ba ,string i, CCustomer *c, CMoney b, CMoney *d);
      ~CCurrentAccount();
      void print();
};

#endif // CCURRENTACCOUT_H_INCLUDED
