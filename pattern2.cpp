#include <iostream>
using namespace std;
int main()
{

    /*  pattern 2
      o o o o o
      o o o o o
      o o x o o
      o o o o o
      o o o o o 
    end pattern 2*/
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 2 && j == 2)
                cout << "x ";
            else
                cout << "o ";
        }
        cout << endl;
    }

    return 0;
}
