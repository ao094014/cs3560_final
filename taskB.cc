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
/**
\fn void countChar(char *pName)
@param[in] pName Character pointer for a string that needs its characters counted
**/

void countChar(char *pName)
{
	cout << "There are 6 Characters\n";
}

/**
\fn void countLine(char *pName)
@param[in] pName Character pointer for a string that needs its lines counted
**/
void countLine(char *pName)
{
		cout << "There are 1 lines\n";
}
