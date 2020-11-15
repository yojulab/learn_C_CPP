#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    auto il = {1, 2, 3, 4, 5};
    /* create vector from initializer list */
    vector<int> v(il);

    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << endl;

    vector<char> char_v;
    // char_v = {"Zara", "Hina Ali", "Ali", "Sara Ali"};

    return 0;
}