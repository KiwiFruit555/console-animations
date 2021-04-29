#include <iostream>
#include <unistd.h>

using namespace std;


int loading() {
  sleep(250);
  cout << "Loading... ";
  sleep(250);
  cout << "hi";
  sleep(250);
  cout << "e";
  sleep(250);
  return 0;
}
int main() {
  loading();
  return 0;
}
