#include <iostream>
using namespace std;

int binToDec(int n)
{
  int ans = 0;
  int x = 1;
  int y = 0;

  while (n > 0)
  {
    y = n % 10;
    ans = ans + x * y;
    x = x * 2;
    n /= 10;
  }

  return ans;
}

int octalToDec(int n)
{

  int ans = 0;
  int x = 1;
  int y = 0;

  while (n>0)
  {
    y = n % 10;
    ans = ans + x * y;
    x = x * 8;
    n /= 10;
  }

  return ans;
}

int main()
{
  int n;
  cin >> n;

  cout << Binary to Decimal << binToDec(n) << endl;
  cout << Octal to Decimal octalToDec(n) << endl;
}