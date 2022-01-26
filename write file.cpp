#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile("gay.txt");//make gay.txt in directory

  MyFile << "type here some to save to gay.txt";
Sleep(50);
  MyFile.close();
  printf("congrats ur gay");
}
