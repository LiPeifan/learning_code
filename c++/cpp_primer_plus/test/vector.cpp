#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vi;
    for (int i = 0; i < 10; i++)
    {
        vi.push_back(i);
    }
    for (int i = 0; i < vi.size(); i++)
    {
        cout << vi[i] << " ";
    }
    cout << endl;
    return 0;
}