#include <stdio.h>
#include "CMoney.h"

void CMoney::print(){

   printf("%d %s", sum, currency);
}

CMoney::CMoney(){


}

CMoney::CMoney(double s, string c){

   sum=s;
   currency=c;
}
