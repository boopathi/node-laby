CONFIGURE=configure
BUILD=build
PROGRAM=node-waf
BUILDDIR=build

all:
	$(PROGRAM) $(CONFIGURE)

install: all
	$(PROGRAM) $(BUILD)
	mv ./$(BUILDDIR)/Release/labyrinth.node ./labyrinth

clean:
	rm -rf ./$(BUILDDIR)
	rm -f ./labyrinth
