#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() 
{
	//declaring a list
	list<string> lstr;
	//declaring iterator to the list
	list<string>::iterator l_iter;
	
	//declaring string object
	string str;

	//input strings
	while(true)
	{
		cout<<"Enter Strings (\"result\" to quit and see results): ";
		getline(cin, str);
		if(str=="result")
			break;

		//adding string to the list 
		lstr.push_back(str);
	}

	//printing list elements
	cout<<"List elements are"<<endl;
	for (l_iter = lstr.begin(); l_iter != lstr.end(); l_iter++)
		cout<< *l_iter<<endl;

	return 0;
}