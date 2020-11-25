#include <iostream>

using namespace std;

int main()
{
	std::string command = "del /Q ";
	std::string path = "[path]\\*.txt";
	system(command.append(path).c_str());

	return 0;
}
