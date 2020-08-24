#include <iostream>
using namespace std;
int main() {
     int n;
    cin >> n;
    string ar[n];
    for(int i = 0; i < n/2; i++){
        int x;
        cin >> x;
        string s;
        cin >> s;
        ar[x] = ar[x] + "-" + " ";
        }
    for(int i = n/2; i < n; i++){
        int x;
        cin >> x;
        string s;
        cin >> s;
        ar[x] = ar[x] + s + " ";
        }
     for(int i = 0; i < n; i++)
        cout << ar[i];
return 0;
}