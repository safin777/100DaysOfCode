#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  // for loop for the n size of array
  int maxNo = INT_MIN;
  int minNo = INT_MAX;

  for (int i = 0; i < n; i++)
  { 
    //taking array input
    cin >>arr[i];
    // storing the minimum and max  number
    minNo = min(minNo, arr[i]);
    maxNo = max(maxNo, arr[i]);
  }

  cout << " Minimum: " << minNo << endl;
  cout << " Maximum: " << maxNo << endl;

  return 0;
}