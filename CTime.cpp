#include <stdio.h>
#include <time.h>
#include "CTime.h"

void CTime::print(){

      printf("%02d:%02d:%02d", hour, minute, second);
}

CTime::CTime(){

   time_t timer = time(NULL);
   struct tm *local = localtime(&timer);

   hour = local->tm_hour;
   minute = local->tm_min;
   second = local->tm_sec;
}

CTime::CTime(int h, int m, int s){

   hour=h;
   minute=m;
   second=s;
}
