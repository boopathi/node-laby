#ifndef ORM_H_
#define ORM_H_ me@boopathi.in
#endif
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
#include "mysql_connection.h"
#include "mysql_driver.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <string>
#include <vector>
//testing

extern std::string database();
extern char* testing(char []);

//production
//Handle MySQL Connections
namespace orm {
	using namespace sql;
	using namespace std;
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
		vector<Statement> history;
		Statement *stmt;
	public:
		orm(ConnectionData gotData);
		~orm();
		static string 
	};
}


