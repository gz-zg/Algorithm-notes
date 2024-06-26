#include <iostream>
#include <fstream>

using namespace std;

void generate_data()
{
    ofstream fout("input.txt");
    int n = 10, m = rand() % 100 + 50;
    fout << n << ' ' << m << endl;

    for (int i = 0; i < n; i ++ )
    {
        int v = rand() % 50 + 10, w = rand() % 50 + 10;
        fout << v << ' ' << w << endl;
    }
    fout.close();
}

int main()
{
    for (int i = 0; i < 100; i ++ )
    {
        printf("iteration: %d\n", i);
        generate_data();
        system("Dp.exe < input.txt > dp_output.txt");
        system("bruteforce.exe < input.txt > bf_output.txt");
        if (system("fc dp_output.txt bf_output.txt"))
        {
            puts("错啦!");
            break;
        }
    }

    return 0;
}