all: pre
	gcc xutil.c test.c -o ./dist/test.out
	./dist/test.out

pre: 
	mkdir -p ./dist
