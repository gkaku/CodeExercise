#include <iostream>
#include <string>

std::string replaceSpace(std::string s, int length)
{
    char space = ' ';
    int num_space = 0;
    int c = 0;
    for(int i = length - 1; i >= 0; i--)
    {
        if (s[i] == space)
        {
            num_space++;
        }
        
    }
    int newLength = length + num_space * 2;
    char newString[newLength+1];
    newString[newLength] = '\0';
    for (int i = length - 1; i >= 0 ; i--)
    {
        if (s[i] != space)
        {
            newString[i+2*num_space] = s[i];
        }
        else
        {
            newString[i+2*num_space] = '0';
            newString[i+2*num_space-1] = '2';
            newString[i+2*num_space-2] = '%';
            num_space--;
        }
    }
    return newString;
}


int main()
{
    std::string s = "Mr Joh n Smith      ";

    std::cout << replaceSpace(s, 14) << std::endl;
    return 0;
}