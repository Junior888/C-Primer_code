/*	头文件algorithom中定义了一个名为count的函数，它类似于find，
接受一对迭代器和一个值作为参数。count返回给定值在序列中出现的
次数，编写程序，读取int序列存入vector中，打印有多少个元素的值
等于给定值	*/

#include <iostream>
#include <fstream>
#include <vector>
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

	vector<int> vi;
	int val;
	while(in >> val)
		vi.push_back(val);

	cout << "please input the num:";
	cin >> val;

	cout << "include: " << count(vi.begin(), vi.end(), val) << " of " << val;

	return 0;
}
