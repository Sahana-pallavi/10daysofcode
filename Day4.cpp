#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<deque>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    deque<long long int>arr;
    int q;
    cin>>q;
    while(q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            long long int x;
            cin>>x;
            arr.push_back(x);
        }
        else if(type==2)
        {
            arr.pop_front();
        }
        else
        {
            cout<<arr[0]<<endl;
        }
    }
    return 0;
}