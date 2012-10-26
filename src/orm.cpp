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
#include <v8.h>
#include <node.h>
#include <stdexcept>
#include "mysql_connection.h"
#include "mysql_driver.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include "orm.h"

//testing
std::string database() {
	std::string a("Asdfasdf");
	sql::Driver *driver;
	driver = get_driver_instance();
	return a;
}

char* testing(char a[1000]) {
	return a;
}

namespace orm {
	using namespace sql;
	using namespace std;
	orm::orm(ConnectionData gotData) {
		data = gotData;
		//default db init functions
		try {
			driver = get_driver_instance();
			char tcpname[] = {"tcp://"};
			strcat(tcpname, data.host);
			strcat(tcpname, ":");
			strcat(tcpname, data.port);
			con = driver->connect(tcpname,data.user,data.pass);
		} catch( SQLException &e) {
			cout<<e.what();
		}
	}
}