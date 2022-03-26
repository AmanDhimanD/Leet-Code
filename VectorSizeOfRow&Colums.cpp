#include <bits/stdc++.h>

using namespace std;

int main()
{
     vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10,11,12}
    };
        
    cout<<vect.size()<<endl; // row of vector
    cout<<vect[0].size()<<endl; //columns of vector
    return 0;
}
