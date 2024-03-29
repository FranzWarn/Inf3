#ifndef CMONEY_H_INCLUDED
#define CMONEY_H_INCLUDED

#include <string>

using namespace std;

class CMoney
{
   private:
      double sum;
      string currency;

   public:
      CMoney(double s, string c = "EUR");
      void print();

      void set_s(double sum){this->sum=sum;}
      void set_c(string currency){this->currency=currency;}

      double get_s(){return sum;}
      string get_c(){return currency;}

};


#endif // CMONEY_H_INCLUDED
