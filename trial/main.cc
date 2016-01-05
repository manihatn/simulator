#include <iostream>
#include <string>
#include <cstdlib>

#include "node.h"
#include "queue.h"
#include "packet.h"

#include <vector> // To add more number of objects(packets)
using namespace std;


int main()
{

//Packet(double sending_time, uint32_t seq_no, uint32_t pf_priority, uint32_t size);

// Creating a bunch of packets 
vector<Packet> Packets;

Packets.reserve(10000);

for (int i = 0; i <10000; ++i)
{
	
	Packets.push_back(Packet(20.4, 1, 0, 64));

	int schedule = rand()%100;
	cout << schedule << endl;
	if(schedule < 50)
	Packets.pop_back();
}

//Packets.pop_back();


cout<<Packets.size()<<endl;
cout<<"Packets popped "<< 10000-Packets.size() << endl;
//Packet *P1 = new Packet(20.4, 1, 0, 64);
Host H1(0, 20.4,1, 0);


//H1.queue->enque(&P1);
//H1.queue->enque(P1);
//H1.Host::queue->enque(&P1);

H1.queue->getsize();


return 0;

}

