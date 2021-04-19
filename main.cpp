#include <iostream>
#include <unistd.h>

using namespace std;


void clsInt(int characterLength) {
  for (int i = 0; i < characterLength; i++) {
    cout << "\b";
  }
}
void loading(int times) {
  cout << "[O]";
  sleep(1000);
  for (int i = 0; i < times; i++) {
    clsInt(3);
    cout << "[|]";
    sleep(250);
    clsInt(3);
    cout << "[/]";
    sleep(250);
    clsInt(3);
    cout << "[-]";
    sleep(250);
    clsInt(3);
    cout << "[\\]";
    sleep(250);
  }
  
}
int main() {
  cout << "Loading... ";
  loading(10);
  clsInt(3);
  cout << "[0]";
}
