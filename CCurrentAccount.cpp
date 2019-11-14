#include <iostream>
#include <cstdio>
#include "CCurrentAccout.h"
#include "CAccount.h"

using namespace std;


CCurrentAccount::CCurrentAccount(CBank *ba ,string i, CCustomer *c, CMoney b, CMoney *d)
:CAccount{ba, i, c, b}, Disposit{d} {}

CCurrentAccount::~CCurrentAccount()
{
    cout << "CCurrentAccount:      Konto ("; printiban(); cout << ") vernichtet!" << endl;
}

void CCurrentAccount::print()
{
   CAccount::print();
   cout << "Dispo     : "; Disposit->print();
}

