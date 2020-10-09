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

int solution(int n) {
    int sqa_b,a_b;
  for (int c = floor(n / 3 + 1); c < n / 2; c++) {

    sqa_b = c * c - n * n + 2 * n * c;
    a_b = floor(sqrt(sqa_b));

    if (a_b * a_b == sqa_b) {
      int b = (n - c + a_b) / 2;
      int a = n - b - c;
      return a * b * c;
    }
  }
  return -1;
}


int main(){
    int t, ans;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        ans = solution(n);
        cout<<ans<<endl;
    }
    return 0;
}
