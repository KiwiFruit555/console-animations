#include <iostream>
#include <windows.h>

using namespace std;


int loading() {
  Sleep(1000);
  cout << "Loading... ";
  Sleep(0.25);
  cout << "hi";
  Sleep(0.25);
  cout << "e";
  Sleep(0.25);
  return 0;
}
int main() {
  loading();
  return 0;
}
