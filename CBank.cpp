#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include "CBank.h"
#include "CAccount.h"
#include "CCustomer.h"

using namespace std;

CBank::CBank(string n, string B)
:name{n}, BIC{B} {}

void CBank::printBIC()
{
   cout << BIC;
}
void CBank::addAccount(CAccount *newAccount)
{
   accountList.push_back(newAccount);
}

void CBank::print()
{
   cout << name << endl;
   cout << "BLZ " << BIC << endl;
   cout << "Anzahl Konten: " << accountList.size() << endl;
   cout << "Kontenliste:" << endl;

   cout << "IBAN                        | Kundenname            | Anz.Buchungen | Kontostand" << endl;
   cout << "----------------------------|-----------------------|---------------|-----------" << endl;

   for (auto elem: accountList)
   {
      elem->printiban(); cout << " |";
      cout.width(23); cout << left << (elem->getCustomer())->getName() << "|";
      cout.width(14); cout << right << 0 << " | ";
      cout.width(11); (elem->getBalance()).print();
      cout << endl;
   }
}


