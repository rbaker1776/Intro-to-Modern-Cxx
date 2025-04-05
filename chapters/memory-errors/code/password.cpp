#include <cstdio>
#include <cstring>
#include <iostream>

const char *PASSWORD_FILE = "rictro";

int main()
{
    char input[8];
    char passwd[8] { "rbaker" };

    std::cout << "enter password: ";
    std::scanf("%s", input);

    if (std::strncmp(passwd, input, 8) == 0)
    {
        std::cout << "Access granted\n";
    }
    else
    {
        std::cout << "Access denied\n";
    }

    return 0;
}
