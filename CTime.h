#ifndef CTIME_H_INCLUDED
#define CTIME_H_INCLUDED

class CTime
{
   private:
      int hour, minute, second;

   public:
      CTime();
      CTime(int h, int m, int s);

      void print();

};


#endif // CTIME_H_INCLUDED
