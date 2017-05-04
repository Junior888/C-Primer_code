/**********************************************
函数主要是将输入main()函数的变量连接起来并输出
例如在程序名后加(6.25 sun junior)，输出sunjunior
argc = 3；
argv[0] = 6.25;
argv[1] = sun;
argv[2] = junior;
argv[3] = '\0';

**********************************************/
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    string str;
    for(int i=1; i != argc; i++)
        str += argv[i];
    cout << str << endl;
	return 0;
}
