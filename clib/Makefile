vpath %.h include:test
vpath %.c src:test
INC = -I/home/ssfdust/utils/clib/include -I/home/ssfdust/utils/clib/test
objects = clib_utils.o test.o

testen:$(objects)
	clang -o testen $(objects) 

clib_utils.o:clib_utils.c clib_utils.h
	clang -c $< $(INC) -g

test.o:test.c test.h
	clang -c $< $(INC) -g

.PHONY:clean cleanobj
clean:
	-rm -rf $(objects) testen
	
cleanobj:
	-rm -rf $(objects)
