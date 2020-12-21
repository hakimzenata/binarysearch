#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> FB(int n){
    vector<string> r;
    for (int i = 1; i <= n; i++){
        if (i % 15 == 0){
            r.push_back("FizzBuzz");
        }
        else if (i % 5 == 0){
            r.push_back("Buzz");
        }
        else if (i % 3 == 0){
            r.push_back("Fizz");
        }
        else{
            r.push_back(to_string(i));
        }
    }
    return r;
}
void printV(vector<string> &v)
{
    for (int i = 0; i < (int)v.size(); i++)
    {
        cout << v.at(i) << " " << endl;
    }
    
}
