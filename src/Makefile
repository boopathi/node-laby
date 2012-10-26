CONFIGURE=configure
BUILD=build
PROGRAM=node-waf
BUILDDIR=build

all:
	$(PROGRAM) $(CONFIGURE)

install: all
	$(PROGRAM) $(BUILD)

clean:
	rm -rf ./$(BUILDDIR)
	rm -f ./labyrinth
