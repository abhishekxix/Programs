#include <iostream>
#include <cstdlib>

int main()
{
    system("sudo rm /var/lib/pacman/db.lck");
    system("sudo pacman -Syyu");
    return 0;
}