#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = n;
    int j = n - 1;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n < 4)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if(n == 4){
        cout << 2 << " " << 4 << " " << 1 << " " << 3; 
    }
    else
    {
        while (i > 0)
        {
            cout << i << " ";
            i = i - 2;
        }
        while(j > 0){
            cout << j << " ";
            j = j - 2;
        }
    }
    
    return 0;
}