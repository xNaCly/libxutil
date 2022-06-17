all: pre
	gcc ./xstring.c ./xfs.c tests/test.c -o ./dist/test.out
	./dist/test.out

pre: 
	mkdir -p ./dist
