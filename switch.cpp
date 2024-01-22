#include <iostream>
using namespace std;

int main()
{
int day = 4 ;
switch (day)
{
case 1:
 cout << "Sunday";
  break;

case 2:
 cout << "Monday";
 break;

case 3:
 cout << "Wednesday";
break;

case 4:
 cout << "Tuseday";
break;

case 5:
 cout << "Friday";
break;

case 6:
 cout << "Saturday";
break;

default:
  cout << "Not a week day!\n";
}
return 0;
}