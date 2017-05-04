/************************************************************************
	定义一个map，关键字是家庭的姓，值是一个vector，保存家中孩子们的名，
	试验添加新的家庭以及向已有家庭中添加新的孩子。
*************************************************************************/

#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

void add_family(map<string, vector<string>>) &families, const string &family)
{
	if(families.find(family) == families.end())
		families[family] = vector<string>();
}

void add_child(map<string, vector<string>> &families, const string &family, const string &child)
{
	families[family].push_back(child);
} 

int main(int argc, char *argv[])
{
	map<string, vector<string> families>;
	
	add_family(families, "sun");
	add_child(families, "sun", "junior");
	add_child(families, "sun", "jun");
	add_child(families, "shu", "junior");
	
	for(auto f : families)
	{
		cout << f.first << "'s child";
		for(auto c : f.second)
			cout << c << endl;
		cout << endl;
	}
	return 0;
}