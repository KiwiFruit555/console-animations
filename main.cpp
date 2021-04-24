#include <iostream>
#include <unistd.h>

using namespace std;


int loading() {
  sleep(1);
  cout << "Loading... ";
  sleep(1);
  cout << "hi";
  sleep(1);
  cout << "e";
  sleep(1);
  return 0;
}
int main() {
  loading();
  return 0;
}
