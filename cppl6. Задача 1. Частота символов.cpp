#include <iostream>
#include <map>
#include <set>

template<class T>
void print(const T& p1, const std::string* str)
{
    std::cout << "[IN]: " << *str << std::endl;
    std::cout << "[OUT]:" << std::endl;
    for (const auto& a : p1)
    {
        std::cout << a.second << ": " << a.first << '\n';
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");

    size_t count = 0;
    std::string str = "Hello world!";
    std::multimap<size_t, char, std::greater<size_t>> p2;
    std::set<char> s1;
   
    for (size_t i = 0; i < str.length(); i++)
    {
        s1.insert(str[i]);
    }
  
    for (const auto& i : s1)
    {
        count = std::count(str.begin(), str.end(), i);
        p2.emplace(count, i);
    }
    print(p2, &str);
}