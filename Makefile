all: pre
	gcc libxutil.c tests/test.c -o ./dist/test.out
	./dist/test.out

pre: 
	mkdir -p ./dist
