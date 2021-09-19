#include <iostream>
using namespace std;
 
static int count = 0;
  int a = 5;
  double ketqua = 2;
  
void dequy() {
    count++;
    if (count <= a) {
        ketqua= ketqua*2;
        cout << ketqua << endl;
        dequy();
    }
}
int main() {
    dequy();
    return 0; 
}
