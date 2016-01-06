#include <iostream>
#include <string>
#include <cstdlib>

#include "node.h"
#include "queue.h"
#include "packet.h"

#include <vector> // To add more number of objects(packets)
using namespace std;

const unsigned long long SEC = 1000L*1000L*1000L;

inline unsigned long long timespecTo64( const timespec &_time ) {
	cout << _time.tv_sec << endl;
	cout << _time.tv_nsec << endl;
	cout << _time.tv_sec*SEC + _time.tv_nsec << endl;
	return ( _time.tv_sec*SEC + _time.tv_nsec );
}

int main()
{

// Ways to include time into the design 
timespec start, end;
clock_gettime(CLOCK_MONOTONIC, &start);

cout<< "StartTime"<< endl;
unsigned long long startTime = timespecTo64(start);
cout << "****************" <<endl;
cout << startTime <<endl;
cout << "****************" <<endl;
//Packet(double sending_time, uint32_t seq_no, uint32_t pf_priority, uint32_t size);

/* -----------------------------------------------------------------
// Creating a bunch of packets 

vector<Packet> Packets;
Packets.reserve(10000);

for (int i = 0; i <10000; ++i)
{
	
	Packets.push_back(Packet(20.4, i, 0, 64, startTime, 0));

	int schedule = rand()%100;
	//cout << schedule << endl;
	if(schedule < 50)
	Packets.pop_back();
}--------------------------------------------------------------------*/

//Packets.pop_back();

Host H1(0, 20.4,1, 0);

for (int i = 1; i <=20; ++i)
{
	clock_gettime(CLOCK_MONOTONIC, &start);

	cout<< "StartTime"<< endl;
	unsigned long long startTime = timespecTo64(start);
	cout << "****************" <<endl;
	cout << startTime <<endl;
	cout << "****************" <<endl;
	Packet *P1 = new Packet(20.4, i, 0, 64, startTime, 0);
	H1.queue->enque(P1);
	cout << "**********************Packet "<< i <<" pushed**************" <<endl;
	H1.queue->getsize();
}

//cout<<Packets.size()<<endl;
//cout<<"Packets popped "<< 10000-Packets.size() << endl;


//H1.queue->enque(&P1);
//H1.queue->enque(P1);
//H1.Host::queue->enque(&P1);

//H1.queue->getsize();
//clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time_end);

clock_gettime(CLOCK_MONOTONIC, &end);

cout<<" EndTime" <<endl;
unsigned long long endTime = timespecTo64(end);
cout << "****************" <<endl;
cout << endTime <<endl;
cout << "****************" <<endl;
cout << endTime - startTime <<endl;

return 0;

}

