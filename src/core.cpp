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

#include <v8.h>
#include <node.h>
#include <stdexcept>
//Following requires -l mysqlcppconn flag
#include "mysql_connection.h"
#include "mysql_driver.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>


#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define FOR(i,n) for(int (i)=0;(i)<(n);(i)++)
#define REP(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define REV(i,n) for(int (i)=(n)-1;(i)>=0;(i)--)

typedef long long int int64;
typedef unsigned long long int uint64;

// Set functions available to the module Object
// Those are just a set of v8_Strings

//Handle MySQL Connections
namespace orm {
	using namespace sql;
	struct ConnectionData {
		char host[105];	//hostname
		char port[105];	//port number
		char user[105]; //username
		char pass[105]; //password
		char db[105];	//database
	};
	class orm {
	private:
		ConnectionData data;
		Driver *driver;	//MySQL Driver Instance
		Connection *con;//MySQL Connection Instance
		
	public:
		orm(ConnectionData gotData) {
			data = gotData;
			//default db init functions
			try {
				driver = get_driver_instance();
				//con = driver->connect();
			} catch( SQLException &e) {
				
			}
		}
	};
}


using namespace node;
using namespace v8;

static Handle<Value> foo(const Arguments& args) {
	return String::New("Hello World");
}

extern "C" void init(Handle<Object> target) {
	NODE_SET_METHOD(target, "foo", foo);
}
