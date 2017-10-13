#include <iostream>

#include <cstring>



using namespace std;

int main() {
int n=80;
    char a[n];



    cin.getline(a,81);



    for(int i = 0; i < (strlen(a)); i++)

    {

        if (a[i] == ' ')

        {a[i] == '%20'}
        else cout << a[i];

    }

    return 0;

}
