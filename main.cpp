#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = str.size();
    
    if (str.find("c=")!=string::npos)
    {
        auto index = str.find("c=");
        count--;
        index = str.find("c=", index + 1);
        while (index != string::npos)
        {
            count--;
            index = str.find("c=", index + 1);
        }
    }

    if (str.find("c-") != string::npos)
    {
        auto index = str.find("c-");
        count--;
        index = str.find("c-", index + 1);
        while (index != string::npos)
        {
            count--;
            index = str.find("c-", index + 1);
        }
    }

    if (str.find("z=") != string::npos)
    {
        auto index = str.find("z=");
        count--;
        index = str.find("z=", index + 1);
        while (index != string::npos)
        {
            count--;
            index = str.find("z=", index + 1);
        }
    }
    if (str.find("dz=") != string::npos)
    {
        auto index = str.find("dz=");
        count--;
        index = str.find("dz=", index + 1);
        while (index != string::npos)
        {
            count--;
            index = str.find("dz=", index + 1);
        }
    }

    if (str.find("d-") != string::npos)
    {
        auto index = str.find("d-");
        count--;
        index = str.find("d-", index + 1);
        while (index != string::npos)
        {
            count--;
            index = str.find("d-", index + 1);
        }
    }
    if (str.find("lj") != string::npos)
    {
        auto index = str.find("lj");
        count--;
        index = str.find("lj", index + 1);
        while (index != string::npos)
        {
            count--;
            index = str.find("lj", index + 1);
        }
    }
    if (str.find("nj") != string::npos)
    {
        auto index = str.find("nj");
        count--;
        index = str.find("nj", index + 1);
        while (index != string::npos)
        {
            count--;
            index = str.find("nj", index + 1);
        }
    }
    if (str.find("s=") != string::npos)
    {
        auto index = str.find("s=");
        count--;
        index = str.find("s=", index + 1);
        while (index != string::npos)
        {
            count--;
            index = str.find("s=", index + 1);
        }
    }
    cout << count;
}