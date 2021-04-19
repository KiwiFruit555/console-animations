#include <iostream>
#include <unistd.h>

using namespace std;


int loading() {
  cout << "Loading... [";
  cout << "O]";
  sleep(1);
  cout << "\b\b";
  cout << "|]";
  sleep(2);
}
int main() {
  loading();
}
