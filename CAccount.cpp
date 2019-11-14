#include <iostream>
#include <cstdio>
#include "CAccount.h"
#include "CCustomer.h"

using namespace std;

CAccount::CAccount(CBank *ba, string i, CCustomer *c, CMoney b)
:bank{ba}, iban{i}, customer{c}, balance{b}
{

   customer->addAccount(this);
   bank->addAccount(this);

}

CAccount::~CAccount()
{
    cout << "CAccount:             Konto ("; printiban(); cout << ") vernichtet!" << endl;
}


void CAccount::print()
{
    cout << "Kunde     : "; customer->printName(); cout << endl;
    cout << "IBAN / BIC: "; printiban(); cout << " / " ;bank->printBIC(); cout << endl;
    cout << "Kontontand: "; balance.print(); cout << endl;
}

void CAccount::printiban()
{
    string separatedIban = iban;
    int size = separatedIban.size();

    for (int i = 0; (i+1)*4 < size; i++)
        separatedIban.insert((i+1)*4+i, " ");

    cout << separatedIban;
}
