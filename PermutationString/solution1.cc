#include <iostream>
#include <string>
#include <algorithm>

bool isPermutation(std::string str1, std::string str2)
{
  if(str1.size() != str2.size())
  {
    return false;
  }

  std::sort(str1.begin(), str1.end());
  std::sort(str2.begin(), str2.end());
  int length = str1.size();
  for(int i = 0; i < length; i++)
  {
    if(str1[i] == str2[i])
      continue;
    else 
      return false;
  }
  return true;
}

int main()
{
  std::string str1 = "abcd";
  std::string str2 = "acbd";
  bool is = isPermutation(str1, str2);
  std::cout << is << std::endl;
  return 0;
}
