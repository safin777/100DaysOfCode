#include <iostream>
using namespace std;

int binarySearch(int inputArr[], int sizeofArray, int searched_value)
{
  int starting_point = 0;
  int ending_point = sizeofArray;

  // calculate the mid index of the array....

  while (starting_point <= ending_point)
  {

    int middle = (starting_point + ending_point) / 2;

    if (inputArr[middle] == searched_value)
    {
      return middle;
    }

    else if (inputArr[middle] > searched_value)
    {
      ending_point = middle - 1;
    }

    else
    {
      starting_point = middle + 1;
    }
  }

  return -1;
}

int main()
{
  int sizeofArray;
  int searched_value;

  // taking array size input
  cin >> sizeofArray;

  int inputArray[sizeofArray];
  // taking the array element
  for (int i = 0; i < sizeofArray; i++)
  {
    cin >> inputArray[i];
  }

  cout << endl;
  cout << "Enter Searching value :" << endl;
  // taking the array search element....
  cin >> searched_value;

  cout << endl;

  cout << "The searched value is at array index : " << binarySearch(inputArray, sizeofArray, searched_value);
  return 0;
}