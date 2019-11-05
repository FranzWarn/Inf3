#include <stdio.h>
#include <iostream>
#include "CCoustomer.h"


CCustomer::CCustomer(long i, string n, CAddress a, CDate b)
: id{i}, name{n}, address{a}, birthday{b} {}

void CCustomer::print(){
   printf("%s (Kd-Nr. %ld)\n", name.c_str(), id);
   address.print();
   printf("Geboren am: ");
   birthday.print();

}

void CCustomer::addAccount(CAccount *newAccount){
   accountList.push_back(newAccount);
}
