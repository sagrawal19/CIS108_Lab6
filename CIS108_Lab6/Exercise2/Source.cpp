#include <iostream>
#include <string.h>
#include <stack>
#include <vector>
#include <string>

using namespace std;

void Reverse(char *p);

int main()
{
	char string[] = "Invention, my dear friends, is 93% perspiration, 6% electricity, 4% evaporation, and 2% butterscotch ripple" ;
	
	cout << "The original string :: " << string << endl;

	//function call to reverse the original string
	Reverse(string);

	//Pause the system and wait for user to hit any key
	system("PAUSE");

	return 0;
}

void Reverse(char *p)
{
	stack<char> S;

	/* Pushing to stack */
	for (int i = 0; i < strlen(p); i++)
		S.push(p[i]);

	//Iterate Stack and print each char from top
	/*while (!S.empty())
	{
		std::cout << S.top();
		S.pop();
	}*/

	cout << "The reverse string :: ";
	/* Poping from stack */
	for (int i = 0; i < strlen(p); i++)
	{
		//p[i] = S.top(); // This will modify the original string.
		std::cout << S.top();
		S.pop();
	}
	cout << "\n" << endl;
}


