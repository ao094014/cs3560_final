#include <iostream>
#include <string>
using namespace std;
void countChar(char *pName);
void countLine(char *pName);
int main(int argc, char* argv[])
{
	if(argc < 1)
	{
		char* L = "Ohio University";
		char* C = "Athens";
		countLine(L);
		countChar(C);
		
	}
}

void countChar(char *pName)
{
	cout << "There are 6 Characters\n";
}


void countLine(char *pName)
{
		cout << "There are 1 lines\n";
}
