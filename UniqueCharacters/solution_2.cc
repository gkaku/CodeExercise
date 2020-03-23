#include <iostream>
#include <string>
#include <vector>

using string = std::string;
#define MAX_LENGTH 128

bool isUnique(string str)
{
    if(str.size() > MAX_LENGTH)
    {
        return false;
    }

    std::vector<bool> chars(MAX_LENGTH, false);
    for(int i = 0; i < str.size(); i++)
    {
        if (chars[str[i]])
        {
            return false;
        }
        chars[str[i]] = true;
    }
    return true;
}

int main()
{
    string str = "abcdefgh";
    bool is = isUnique(str);
    std::cout << is << std::endl;
    return 0;
}