#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "failed to open the file!" << endl;
		exit(1);
	}

	list<string> ls;
	string word;
	while(in >> word)
		ls.push_back(word);

	cout << "please input the string: ";
	cin >> word;

	cout << "the string inlclude: " << count(ls.begin(), ls.end(), word)
		<< " of " << word;

	return 0;
}