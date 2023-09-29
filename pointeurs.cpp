#include <iostream>
using namespace std;

int main() {
  int* ptr; 
  int* ptr1;
  int a = 21;
  ptr = &a;

  *ptr1 = a;

  cout << "ptr : " << ptr << endl;
  cout << "*ptr : " << *ptr << endl;
  cout << "*ptr1 : " << *ptr1 << endl;
  cout << "&a : " << &a << endl;
  cout << "&ptr : " << &ptr << endl;

  int nums[5] = {1, 2, 3, 4, 5};

  cout << "nums[0] : " << *(nums+1) << endl;

  return 0;
}