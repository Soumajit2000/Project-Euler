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


int main(){
    int t;
    cin >> t;
    while(t--){
       long long sum3,sum5,sum15,n3,n5,n15,N,total;
       sum3 = sum5 = sum15 = total = 0;
       cin>>N;
       n3 = floor((N-1)/3);
       n5 = floor((N-1)/5);
       n15 = floor((N-1)/15);
       sum3 = (n3*(6 + 3*(n3-1)))/2;
       sum5 = (n5*(10 + 5*(n5-1)))/2;
       sum15 = (n15*(30 + 15*(n15-1)))/2;
       total = sum3 + sum5 - sum15;
       cout<<total<<"\n";
    }

    return 0;
}
