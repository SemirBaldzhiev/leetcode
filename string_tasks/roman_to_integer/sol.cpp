#include <iostream>
#include <string>

int valueOfRomanSymbol(char r)
{
    int value = 0;
    switch (r)
    {
        case 'I': value = 1; break;
        case 'V': value = 5; break;
        case 'X': value = 10; break;
        case 'L': value = 50; break;
        case 'C': value = 100; break;
        case 'D': value = 500; break;
        case 'M': value = 1000; break;
    }
    return value;
}

int romanToInt(std::string s) {
    int result = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int val1 = valueOfRomanSymbol(s[i]);
        if (s[i + 1] != '\0')
        {
            int val2 = valueOfRomanSymbol(s[i + 1]);
            if (val1 >= val2)
            {
                result += val1;
            }
            else
            {
                result += (val2 - val1);
                i++;
            }
        }
        else 
        {
            result += val1;
        }
    }
    return result;  
}

int main() {
    return 0;
}