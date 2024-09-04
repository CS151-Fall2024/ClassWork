#include <iostream>
using namespace std;
void sortString(string &s);
int main()
{
    string s1, s2, old1, old2;
    cout<<"Enter the first string: ";
    getline(cin, s1);
    old1 = s1;

    cout<<"Enter the first string: ";
    getline(cin, s2);
    old2 = s2;

    sortString(s1);
    sortString(s2);

    if (s1 == s2){
        cout <<old1 << " and "<<old2<<" are anagrams\n";
    }else{
        cout <<old1 << " and "<<old2<<" are not anagrams\n";
    }

    return 0;
}
void sortString(string &s)
{
    for (size_t i = 0; i < s.size(); ++i){
        s[i] = tolower(s[i]);
    }

    for (size_t startScan = 1; startScan < s.size(); ++startScan)
    {
        char key = s[startScan];
        int index = startScan - 1;

        while (index >= 0 && s[index] > key)
        {
            s[index+1] = s[index];
            --index;
        }
        s[index+1] = key;
    }
}
