#include <stdio.h>
#include <time.h>
#include "CDate.h"

void CDate::print(){

   printf("%02d.%02d.%04d", day, month, year);

}

CDate::CDate(){

   time_t timer = time(NULL);
   struct tm *local = localtime(&timer);

   day = local->tm_mday;
   month = local->tm_mon+1;
   year = local->tm_year+1900;

}

CDate::CDate(int d, int m, int y){

   day = d;
   month = m;
   year = y;

}
