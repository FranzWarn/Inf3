#include <stdio.h>
#include "CMoney.h"

void CMoney::print(){

   printf("%.02f %s", sum, currency.c_str());
}


CMoney::CMoney(double s, string c){

   sum=s;
   currency=c;
}
