vpath %.h include:test
vpath %.c src:test
objects = utils.o test.o

test:$(objects)
	clang -o test $(objects)

test.o:test.h 

clib_utils.o:clib_utils.h

.PHONY:clean
clean:
	-rm -rf $(objects) test
