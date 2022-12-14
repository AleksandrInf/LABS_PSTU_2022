#include<iostream>
#include<string>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;
    a = b = 0;

    std::string s;
    std::cout << "Ââåäèòå ñòðîêó:" << std::endl;
    std::cin >> s;

    const char* sptr = s.c_str();
    for (int i = 0; i < s.length(); i++)
    {
        switch (*sptr)
        {
        case 'À':
        case 'Å':
        case 'È':
        case 'Î':
        case 'Ó':
        case 'Ý':
        case 'Þ':
        case 'Û':
        case 'ß':
        case 'à':
        case 'å':
        case 'è':
        case 'î':
        case 'ó':
        case 'ý':
        case 'þ':
        case 'û':
        case 'ÿ':
            a++;
            break;
        default:
            b++;
            break;
        }

        *sptr++;

    }

    std::cout << "Êîëè÷åñòâî ãëàñíûõ = " << a << std::endl;
    std::cout << "Êîëè÷åñòâî ñîãëàñíûõ = " << b << std::endl;

    return 0;
}