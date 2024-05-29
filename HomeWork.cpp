#include <iostream>
#include <string>
using namespace std;

void myFunction(string Majer = "cpp") {
  cout << Majer << "\n";
}

int main() {
  myFunction("Java");
  myFunction("HTML");
  myFunction();
  myFunction("CSS");
  int cpp;
  int Java;
  int Majer;
  cout<<"Input Java:";
  cin>>Java;
  cout<<"Input cpp:";
  cin>>cpp;
  Majer=Java+cpp;
  cout<<"Total:"<<Majer;
  return 0;
}
