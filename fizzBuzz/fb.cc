#include "fb.h"

int main(){
    int n = 0;
    cin >> n;
    cin.ignore();
    vector<string> r = FB(n);
    printV(r);
    return 0;
}
