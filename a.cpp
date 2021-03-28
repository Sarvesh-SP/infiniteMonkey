#include <iostream>
#include <string>
#include <random>
using namespace std;

void monkey(string sen, int tra = 1000)
{
  int trails = 0;
  int x = 0;
  string k = "";
  int len = sen.length();
  string alph = "abcdefghijklmnopqrstuvwxyz ";
  while (x < len && trails <= tra)
  {
    trails++;
    int ran = rand() % 27;
    if (sen[x] == alph[ran])
    {
      x++;
      k += alph[ran];
      cout << alph[ran] << " at trail: " << trails << endl;
    }
  }
  cout << "It took " << trails << " trails to generate " << '"' << k << '"' << endl;
}

int main()
{
  string test;
  char choice;
  do
  {
    cout << "\nCode based on Infinite Monkey Theorem..." << endl;
    cout << "Enter the String, for this monkey to generate." << endl;
    getline(cin, test);
    monkey(test);

    cout << "Wanna try again?(y/n)\n";
    cin >> choice;
    fflush(stdin);
  } while (tolower(choice) != 'n');

  return 0;
}