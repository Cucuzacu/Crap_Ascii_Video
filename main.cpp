//ascii animation code in crap
//made by cucuzacu

#include<fstream>
#include<iostream>

int main()
{
    int n, k, i, j;
    static int c[101][101];
    std::ifstream fi("frames.txt");
    std::ofstream fo("output.txt");
    std::cin >> n;
    for(k = 0; k < n; k++)
    {
        for(i = 0; i < 100; i++) std::cin >> c[i];
        for(i = 0; i < 100; i++)
            for(j = 0; j < 100; j++)
                fo << "printstring " << char(c[i][j]) << '\n';
        fo << "clear" << '\n';
        fo << "wait" << '\n';
    }
}
