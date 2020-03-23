#include <iostream>
#include <string>
#include <vector>

using string = std::string;
#define MAX_LENGTH 128

int hashCode(int k)
{
    return k % 10;
}

bool isUnique(string str)
{
    if(str.size() > MAX_LENGTH)
        return false;
    
    std::vector<char> c;
    std::vector<std::vector<char>> v(10, c);
    for(int i = 0; i < str.size(); i++)
    {
        int key = hashCode(str[i]);
        if(v[key].empty())
        {
            v[key].push_back(str[i]);
        }
        else
        {
            for (size_t j = 0; j < v[key].size(); j++)
            {
                if (str[i] == v[key][j])
                {
                    return false;
                }
            }
            v[key].push_back(str[i]);
        }
    }
    return true;
}

int main()
{
    string str = "abcdefg";
    bool is = isUnique(str);
    std::cout << is << std::endl;
    return 0;
}