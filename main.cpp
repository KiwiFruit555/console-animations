#include <iostream>
#include <unistd.h>

using namespace std;


int loading() {
  sleep(1000);
  cout << "Loading... ";
  sleep(1000);
  cout << "hi";
  sleep(1000);
  cout << "e";
  sleep(1000);
  return 0;
}
int main() {
  loading();
  return 0;
}
