
hello: hello.o add.o
	g++ hello.o add.o -o hello

add.o: add.cpp
	g++ -c add.cpp

hello.o: hello.cpp
	g++ -c hello.cpp

clean:
	rm hello add.o hello.o

dist: clean
	tar zcf hello-v1.0.tar.gz *

dist-clean: clean
	rm hello*.tar.gz

