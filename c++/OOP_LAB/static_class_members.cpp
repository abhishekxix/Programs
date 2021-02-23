
#include <iostream>
#include <vector>

class Static_Members {
public:
    static int abhishek;
    void display()
    {
        abhishek = 5;
        std::cout << abhishek << ' ' << std::flush;
    }
};
int Static_Members::abhishek {25};

int main()
{
    std::vector<Static_Members> members;
    for(int i {}; i < 5; i++) {
        members.push_back(Static_Members {});
    }
    for(auto &member : members)
            member.display();
    return 0;
}
