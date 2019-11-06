//A program to count the days of the week. 
//Kellie Henderson, Dr.T, 8-21-19

#include <iostream>
using namespace std;

int main() 
{
//declare and initialize variable for day of the week
  int day = 0 ;
while (day != -1)
{
  cout << "\nPlease enter a day of the week 1-7, (-1 to Exit): " ;
  cin >> day ;
      // process make the decision
      if (day == 1)
      {
      cout << "\nIt's Sunday!" << endl;
      }
      else if (day == 2)
      {
          cout << "\nIt's Monday!" << endl;
      }
      else if (day == 3)
      {
        cout << "\nIt's Tuesday!" << endl;
      }
      else if (day == 4)
      {
        cout << "\nIt's Wednesday!" << endl;
      }
      else if (day == 5)
      {
        cout << "\nIt's Thursday!" << endl;
      } 
      else if (day == 6)
      {
        cout << "\nIt's Friday!" << endl;
      }
      else if (day == 7)
      {
        cout << "\nIt's Saturday!" << endl;
      }
      else if (day == -1)
      {
      cout << "\nHasta la vista baby! " << endl;
      }
      else if (day > 7)
      {
        for (int i = 0;i<100;i++){
      cout << "\nAH AH Ah! You didn't say the magic word!" << endl;}
      }

}
  return 0;
}