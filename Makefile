all:	clean compile executable run  

compile:
	g++ -c *.cc 

executable:
	g++ packet.cc host.cc main.cc -o main

run:
	./main

clean:
	rm -f main
	rm -f *.o
