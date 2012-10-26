#include <v8.h>
#include <node.h>

#ifndef LABYRINTH_H_
#define LABYRINTH_H_ me@boopathi.in
#endif

using namespace v8;
using namespace node;

class Labyrinth:ObjectWrap {
private:
public:
	Labyrinth();
	~Labyrinth();
	static void Init(Handle<Object>);
	static Handle<Value> install(const Arguments&);
};