#include <v8.h>
#include <node.h>

#include "labyrinth.h"

using namespace v8;
using namespace node;

void Labyrinth::Init(Handle<Object> target) {
	NODE_SET_METHOD(target, "install", Labyrinth::install);
}

Handle<Value> Labyrinth::install(const Arguments& args) {
	HandleScope scope;
	return scope.Close(String::New("asdfasdf"));
}

extern "C" {
	//just used as a wrapper
	void init(Handle<Object> target) {
		Labyrinth::Init(target);
	}
	NODE_MODULE(labyrinth, init);
}
