#include <iostream>
#include <unistd.h>

using namespace std;


int loading() {
  cout << "Loading... [";
  cout << "O]";
  sleep(1000);
  cout << "\b\b";
  cout << "|]";
}
int main() {
  loading();
}
