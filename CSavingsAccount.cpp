#include <iostream>
#include <cstdio>
#include "CSavingsAccount.h"
#include "CAccount.h"

using namespace std;

CSavingsAccount::CSavingsAccount(CBank *ba ,string i, CCustomer *c, CMoney b, double I)
:CAccount{ba, i, c, b}, InterestRate{I} {}

CSavingsAccount::~CSavingsAccount()
{
   cout << "CSavingsAccount:      Konto ("; printiban(); cout << ") vernichtet!" << endl;
}


void CSavingsAccount::print()
{
   CAccount::print();
   cout << "Sparzinsen: " << InterestRate << "%";
}
