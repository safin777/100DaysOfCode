#include <iostream>
using namespace std;

int main()
{
  int n, m;
  int k = 0;

  cin >> n >> m;

  int arr[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  cout << "Search element:" << endl;
  cin >> k;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == k)
      {
        cout << "Found at " << i << " " << j << endl;
        return 0;
      }
    }
  }
}