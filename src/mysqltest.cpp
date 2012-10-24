#include<stdlib.h>
#include<iostream>
#include<sstream>
#include<stdexcept>

#include "mysql_connection.h"
#include "mysql_driver.h"
#include<cppconn/driver.h>
#include<cppconn/exception.h>
#include<cppconn/resultset.h>
#include<cppconn/statement.h>
#include<cppconn/prepared_statement.h>

using namespace std;
using namespace sql;

int main(int argc, char *argv[]){
	string url("localhost");
	const string user("root"), pass("root"), database("mytest");
	try {
		Driver *driver;
		Connection *con;

		driver = get_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "root");
		
		Statement *s;
		s = con->createStatement();
		
		s->execute("use test");
		s->execute("create table test(id INT, label CHAR(1))");
		
		delete s;
		delete con;
		
	} catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line "<< __LINE__ << endl;
  		cout << "# ERR: " << e.what();
  		cout << " (MySQL error code: " << e.getErrorCode();
  		cout << ", SQLState: " << e.getSQLState() << " )" << endl;
	}
	return 0;
}

