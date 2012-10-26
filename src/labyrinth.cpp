#include <v8.h>
#include <node.h>
#include <string>
#include "labyrinth.h"
#include "orm.h"
using namespace v8;
using namespace node;

//All the extern functions that are being used here
extern std::string database();
extern char* testing(char []);

void Labyrinth::Init(Handle<Object> target) {
	NODE_SET_METHOD(target, "install", Labyrinth::install);
}

Handle<Value> Labyrinth::install(const Arguments& args) {
	HandleScope scope;
	orm::ConnectionData d;
	strcpy(d.host,"localhost");
	strcpy(d.port,"3306");
	strcpy(d.user,"root");
	strcpy(d.pass,"root");
	strcpy(d.db,"test");
	orm::orm a(d);
	return scope.Close(String::New(database().c_str()));
}

extern "C" {
	//just used as a wrapper
	void init(Handle<Object> target) {
		Labyrinth::Init(target);
	}
	NODE_MODULE(labyrinth, init);
}
