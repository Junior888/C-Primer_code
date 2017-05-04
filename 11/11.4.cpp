/*	忽略大小写和标点，例如：example. example, Example，
	应该递增相同的计数器
*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

string &trans(string &s)
{
	for(int p=0; p<s.size(); p++)
	{
		if(s[p] >= 'A' && s[p] <= 'Z')
			s[p] -= ('A' - 'a');
		else if(s[p] == ',' || s[p] == '.')
			s.erase(p, 1);
	}
	return s;
}

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "failed to open the file!";
		exit(1);
	}
	map<string, size_t> word_count;
	string word;
	while(in >> word)
		++word_count[trans(word)];
	
	for(const auto &it : word_count)
		cout << it.first << " show " << it.second << " times " << endl;
	return 0;
	
}