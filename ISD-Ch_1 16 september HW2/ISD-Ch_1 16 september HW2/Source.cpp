//ISD-TEMPLATE CPP FILE. PROF. WEI FANG V1
#include "std_lib_facilities.h"
int main()
{
	vector<string> words;
	string temp;

	while (cin >> temp)
	{

		string a = temp;
		if (a == "stop")
			break;
		words.push_back(temp);
	}
	cout << "Number of Words: " << words.size() << endl;
	sort(words.begin(), words.end());
	for (int i = 0; i < words.size(); i++)
	{
		if (i == 0 || words[i - 1] != words[i])
			cout << words[i] << "\n";
	}

}