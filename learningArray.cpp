#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arrayName[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arrayName[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << arrayName[i] << " " << endl;
  }
}