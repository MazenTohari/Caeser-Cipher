#include <iostream>

#include<string>

using namespace std;

int main()
{
	string Input;
	int count = 0;
	int length;

	cout << "Enter your phrase: ";
	getline(cin, Input);

	length = Input.length();

	for (count = 0; count < length; count++) 
	{
		if (isalpha(Input[count]))
		{
			Input[count] = tolower(Input[count]);
			for (int i = 0; i < 13; i++)
			{
				if (Input[count] == 'z')
					Input[count] = 'a';
				else
					Input[count]++;
			}
		}
	}
	cout << "Results: " << Input << endl;
}