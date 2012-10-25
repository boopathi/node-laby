#include<cstring>
#include<iostream>
using namespace std;
int main() {
  char test[]={"tcp://H:P"};
  char *pch;
  pch = strstr(test,"H");
  strncpy(pch, "localhost", 9);
  pch = strstr(test,"P");
  strncpy(pch, "3306", 4);
  cout<<test;
  return 0;
}
