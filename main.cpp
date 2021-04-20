#include <iostream>
#include <windows.h>

using namespace std;


int loading() {
  Sleep(250);
  cout << "Loading... ";
  Sleep(250);
  cout << "hi";
  Sleep(250);
  cout << "e";
  Sleep(250);
  return 0;
}
int main() {
  loading();
  return 0;
}
