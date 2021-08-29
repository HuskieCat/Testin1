#include <iostream>
#include <cstdlib>

using namespace std;

void print(string &message);
string input();

int main() 
{
  cout << "Hello World!\n";
  cout<< 5;
  cout<<endl;
  string bacon = input();
  print(bacon);
}

void print(string &message)
{
  cout << message;
}

string input()
{
  string userInput;
  getline(cin,userInput);
  return userInput;
}