// Samyar Dastmalchi & Bridger Bell
// Description: Hello World in C++
//============================================================
#include <iostream>
using namespace std;

int hello1Function(string name1);
int hello2Function(string name2);

int main()
{
string name1="Samyar";
hello1Function(name1);
string name2="Bridger";
hello2Function(name2);
return 0;
}