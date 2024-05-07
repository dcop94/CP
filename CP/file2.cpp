#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> str_hello;
	str_hello.push_back("Hello World!\n I love programming\n I love c++\n");

	ofstream hello_file("hello.txt");
	if (hello_file.is_open())
	{
		for (const auto& line : str_hello)
		{
			hello_file << line;
		}
		hello_file.close();
	}
	else
	{
		cout << "error" << endl;
		return 1;
	}

	ifstream input_file("hello.txt");
	ofstream output_file("output.txt");
	if (input_file.is_open() && output_file.is_open())
	{
		vector<string> str_output;
		string line;

		while (getline(input_file, line))
		{
			str_output.push_back(line);
		}

		for (const string &line : vector<string>(str_output.rbegin(), str_output.rend()))
		{
			output_file << line << endl;
		}

		input_file.close();
		output_file.close();
		
	}
	else
	{
		cout << "error" << endl;
		return 1;
	}
	return 0;
}