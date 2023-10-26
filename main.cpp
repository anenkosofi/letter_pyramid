#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string keys{};
  string reversed_keys{};

  cout << "Enter a string to display Letter Pyramid:\n"
       << endl;

  getline(cin, keys);
  reversed_keys = keys;
  reverse(reversed_keys.begin(), reversed_keys.end());

  cout
      << "\nBuilding Letter Pyramid...\n"
      << endl;

  for (size_t j{1}; j <= keys.length(); j++)
  {
    string left_part{keys, 0, j};
    string right_part = reversed_keys.substr(keys.length() - j + 1);

    string space(keys.length() - j, ' ');

    cout << space;
    cout << left_part + right_part << endl;
    cout << space << endl;
  }

  return 0;
}
