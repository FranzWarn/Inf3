#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED



class CDate
{
   private:
      int day, month, year;

   public:
      CDate();
      CDate(int d, int m, int y);

      void print();
};


#endif // DATE_H_INCLUDED
