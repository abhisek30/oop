#include <iostream>
using namespace std;
char* reverse(char *str, int n)
{
    static int c = 0;
    char *s = new char[100];
    if (str[n] == NULL)
        return s;
 
    s = reverse(str, n + 1);
    s[c++] = str[n];
    return s;
}
int main()
{
    char *str = new char[100];
    cin>>str;
    cout << "Reverse of the given string is :"<<reverse(str, 0);
}