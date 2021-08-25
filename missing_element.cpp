/*
In fisierul text missing.txt exista dispuse pe fiecare linie cate un numar
din sirul primelor n < 30000 numere naturale nenule. Exceptie face un singur numar
care a fost omis. Realizat un program care determina numarul lipsa.

Input:
5
1
2
3
Output:
Missing Element: 4
*/
#include <iostream>
#define FIN "missing_element.in"
#define FOUT "missing_element.out"

using namespace std;

int main(int argc, char const *argv[]) {

    freopen(FIN, "r", stdin);

    int n, s = 0,
           cnt = 0;

    while(cin>>n) {

        s += n;
        cnt += 1;
    }

    int missing = (cnt + 1) * (cnt + 2) / 2 - s;

    cout<<"Missing Element: "<<missing;


  return 0;
}
