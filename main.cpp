//ascii animation code in crap
//made by cucuzacu
//reads number of frames and time to wait from keyboard

#include<fstream>
#include<iostream>

#define max_lenght_of_line 100
#define lines_of_frame 36

int main()
{
    int n, w, k, i, j;
    char c[max_lenght_of_line + 100];
    std::ifstream fi("frames.txt");
    std::ofstream fo("code.crap");
    std::cin >> n >> w;
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < lines_of_frame; i++)
        {
            fi >> c;
            fo << "printstring " << c << '\n';
            fo << "nextline" << '\n';
        }
        fo << "clear" << '\n';
        fo << "wait " << w << '\n';
        system("cls");
        std::cout << k + 1 << " frame(s) processed!";
    }
}
