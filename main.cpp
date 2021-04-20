#include <iostream>
#include <unistd.h>

using namespace std;


int loading() {
  cout << "Loading... ";
  sleep(1000);
  cout << "hi";
  cout << "e";
  return 0;
}
int main() {
  loading();
  return 0;
}
