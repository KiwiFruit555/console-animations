#include <iostream>

using namespace std;


int loading() {
  cout << "Loading... [";
  cout << "O]";
  cout << "\b\b";
  cout << "|]";
}
int main() {
  loading();
}
