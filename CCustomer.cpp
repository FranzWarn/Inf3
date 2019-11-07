#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
#include "CCustomer.h"


CCustomer::CCustomer(long i, string n, CDate b, CAddress a)
: id{i}, name{n}, birthday{b}, address{a} {}

void CCustomer::print()
{
    printName(); cout << endl;
    address.print(); cout << endl;
    cout << "geboren am: "; birthday.print();
    cout << "\nKonten:";
    for (auto elem: accountList)
    {
        cout << "\n- Kontonr.: "; elem->printiban();
    }

}

void CCustomer::addAccount(CAccount *newAccount){
   accountList.push_back(newAccount);
}

void CCustomer::printName()
{
    cout << name << " (Kd-Nr. " << id << ")";
}
