#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

string randomize(const string &input)
{
    vector<size_t> indexes;

    for (size_t i = 0; i < input.size(); i++)
	indexes.push_back(i);
        random_shuffle(indexes.begin(), indexes.end());
	string final;

    for (size_t i = 0; i < indexes.size(); i++)
        final += input[indexes[i]];
	return final;
}

int main()
{
    string input;
    srand(size_t(time(NULL)));

    cout << "Input: ";
    cin >> input;
    cout << "Randomized: " << randomize(input) << "\n";

    return 0;
}
