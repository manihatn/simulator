all:	clean compile executable run  

compile:
	g++ -c *.cc 

executable:
	g++ packet.cpp queue.cpp node.cpp factory.cpp main.cc -o main

run:
	./main

clean:
	rm -f main
	rm -f *.o
