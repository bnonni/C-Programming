#include <iostream>
#include <vector>
#include <string>
#include <math.h>

// Complete the findNumber function below.
int findNumber(vector<int> arr, int k)
{
 int min = 0;

 while (min <= std::max)
 {
  int mid = (max + min) / 2;
  if (mid == k)
  {
   return mid;
  }
  else if (k > arr[mid])
  { // -1 > a[0] = -1 > -1 x
   min = mid + 1;
   std::cout << mid;
  }
  else
  {
   max = mid - 1; // 0 - 1 = -1
  }
 }
 return 0;
}