#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
  cout<<"welcome to speed checker. this is a list of speeds (mph) and the time it takes to go one mile (in minutes)."
    <<endl<<endl
    <<"speed(mph)		time(minutes)";
  
  for (int x = 150; x > 0; x--)
  {
    cout<<endl
      << x << "		" << x/60;
  }
  
  system("PAUSE");
  return 0;
}
