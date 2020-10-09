#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int gcd(int a, int b){
    if(b==0)
    return a;
    else {
    return(gcd(b, a % b));
    }
}

int findlcm(int n){
    int ans = 1;
    for(int i = 1; i<=n ;i++)
    {
        ans = ((ans * i)/gcd(ans, i));
    }
return ans;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,lcm;
        cin>>n;
        lcm = findlcm(n);
        cout<<lcm<<"\n";
     }
return 0;    
}