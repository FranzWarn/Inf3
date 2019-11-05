#include <stdio.h>
#include "CAddress.h"

void CAddress::print(){
   printf("%s \n%s %s", street.c_str(), postcode.c_str(), town.c_str());
}
