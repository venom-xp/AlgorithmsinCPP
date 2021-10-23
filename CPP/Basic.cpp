#include <iostream>
#include <algorithm>
using namespace std;
main() {
   int arr[] = {2, 4, 6, 8, 10};
   int n = sizeof(arr)/sizeof(arr[0]);
   if(all_of(arr, arr + n, [](int x){return x%2 == 0;})) {
      cout << "All are even";
   } else {
      cout << "All are not even";
   }
}
