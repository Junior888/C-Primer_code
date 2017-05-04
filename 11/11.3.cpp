/*	单词计数程序 
	使用G++编译时需要使用 “g++ -std=c++11 -o ……”
*/
#include <iostream>
#include <fstream>
#include <map>
#include <string>
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
	
	map<string, size_t> word_count;
	string word;
	while(in >> word)
		++word_count[word];
	
	//map<string, size_t>::const_iterator it;
	for(const auto &it : word_count)
		cout << it.first << " show " << it.second << " times "<< endl;
	
	return 0;
}