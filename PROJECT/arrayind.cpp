#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v = {10,11,2,200,3,1005};
int m;
cin>>m;

vector<int> inv(1006, -1);
for(int i = 0 ; i < v.size() ; i++)
    {
    inv[v[i]] = i ;
    }


      cout << inv[m] << endl;


 return 0;
}
