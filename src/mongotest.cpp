#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <iostream>
#include <stdexcept>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define FOR(i,n) for(int (i)=0;(i)<(n);(i)++)
#define REP(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define REV(i,n) for(int (i)=(n)-1;(i)>=0;(i)--)
#define PB push_back
typedef long long int int64;
typedef unsigned long long int uint64;
using namespace std;

#include "mongo/client/dbclient.h"

int main() {
	try {
		mongo::DBClientConnection c;
		c.connect("localhost");
		cout<<"connected"<<endl;
	} catch(const mongo::DBException &e) {
		cout<<e.what()<<endl;
	}
}
