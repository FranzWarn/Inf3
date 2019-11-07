#include <iostream>
#include <stdio.h>
#include "CAccount.h"
#include "CCustomer.h"

using namespace std;

CAccount::CAccount(string i, CCustomer *c, CMoney b)
:iban{i}, customer{c}, balance{b}
{

   customer->addAccount(this);

}

void CAccount::print()
{
    cout << "Kunde     : "; customer->printName(); cout << endl;
    cout << "IBAN      : "; printiban(); cout << endl;
    cout << "Kontontand: "; balance.print();
}

void CAccount::printiban()
{
    string separatedIban = iban;
    int size = separatedIban.size();

    for (int i = 0; (i+1)*4 < size; i++)
        separatedIban.insert((i+1)*4+i, " ");

    cout << separatedIban;
}
