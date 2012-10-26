#include<v8.h>
#include<node.h>
#include "labyrinth.h"
using namespace v8;
using namespace node;

Handle<Value> answer(const Arguments& args) {
	HandleScope scope;
	return scope.Close(Integer::New(42));
}

void Init(Handle<Object> target) {
	NODE_SET_METHOD(target, "install", answer);
}
NODE_MODULE(labyrinth, Init);
