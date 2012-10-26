#ifndef LABYRINTH_H_
#define LABYRINTH_H_ me@boopathi.in
#endif

#include <v8.h>
#include <node.h>

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