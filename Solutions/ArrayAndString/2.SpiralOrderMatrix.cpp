/*
Time Complexity: O(n*n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int remove_duplicates(int (&a)[5])
{
    int n = sizeof(a)/sizeof(a[0]);
    int sz = 1;
    for(int i = 1; i< n ; i++){
        if(a[i-1]!= a[i]){
            a[sz] = a[i];
            sz++;
        }
    }
    return sz;
}

int main()
{
    int a[] = {1,1,2,3,3};
    // int n = sizeof(a)/sizeof(a[0]);
    int n = remove_duplicates(a);

    for(int i = 0 ; i < n ; i++){
        cout << a[i] << ' ';
    }

}