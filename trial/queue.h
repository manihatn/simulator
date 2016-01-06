#ifndef QUEUE_H
#define QUEUE_H

#include <deque>
#include <stdint.h>
#include <vector>

#define DROPTAIL_QUEUE 1

class Packet;

class Queue {
    public:
        Queue(uint32_t id, double rate, uint32_t limit_bytes, int location);
        virtual void enque(Packet *packet);
        virtual Packet *deque();
        virtual void drop(Packet *packet);
        double get_transmission_delay(uint32_t size);
	double getsize();
        // Members
        uint32_t id;
        uint32_t unique_id;
        static uint32_t instance_count;
        double rate;
        uint32_t limit_bytes;
        std::deque<Packet *> packets;
        uint32_t bytes_in_queue;
        bool busy;

        Packet* packet_transmitting;

        uint64_t b_arrivals, b_departures;
        uint64_t p_arrivals, p_departures;

        double propagation_delay;
        bool interested;

        uint64_t pkt_drop;
        uint64_t spray_counter;

        int location;

	unsigned long long start_time;
	unsigned long long end_time;
};


#endif
