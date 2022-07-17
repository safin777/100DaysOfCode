#include <iostream>
using namespace std;

int main()
{
  int n;
  // taking array size input
  cin >> n;
  int arr[n];
  // taking the array element

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int current_sum = 0;
  for (int i = 0; i < n; i++)
  {
    current_sum = 0;
    for (int j = i; j < n; j++)
    {

      current_sum += arr[j];
      cout << arr[j] << endl;
    }
  }

  return 0;
}