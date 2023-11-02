#include<bits/stdc++.h>
using namespace std;

bool isAlphanumeric(char c)
{
    return std::isalnum(static_cast<unsigned char>(c));
}

bool isPalindrome(const std::string& word, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    while (start < end && !isAlphanumeric(word[start]))
    {
        start++;
    }
    while (start < end && !isAlphanumeric(word[end]))
    {
        end--;
    }

    char leftChar = tolower(word[start]);
    char rightChar = tolower(word[end]);

    if (leftChar == rightChar)
    {
        return isPalindrome(word, start + 1, end - 1);
    }

    return false;
}

bool isPalindrome(const string& word)
{
    return isPalindrome(word, 0, word.length() - 1);
}

int main()
{
    string s;

    cin >>s;

    if (isPalindrome(s))
    {
        cout << "YES " <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }

    return 0;
}

