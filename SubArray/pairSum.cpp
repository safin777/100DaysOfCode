#include <iostream>
using namespace std;

bool pairSum(int arr[], int k, int n)
{

  int low = 0;
  int high = n - 1;

  while (low < high)
  {
    if (arr[low] + arr[high] == k)
    {
      cout << arr[low] << " " << arr[high] << endl;
      return true;
    }

    else if (arr[low] + arr[high] > k)
    {
      high--;
    }
    else
    {
      low++;
    }
  }
  return false;
}

int main()
{
  int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
  int k = 31;
  cout << pairSum(arr, 8, k) << endl;

  return 0;
}