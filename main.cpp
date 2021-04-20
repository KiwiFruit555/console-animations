#include <iostream>
#include <unistd.h>

using namespace std;


int loading() {
  sleep(0.25);
  cout << "Loading... ";
  sleep(0.25);
  cout << "hi";
  sleep(0.25);
  cout << "e";
  sleep(0.25);
  return 0;
}
int main() {
  loading();
  return 0;
}
