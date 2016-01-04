#ifndef FACTORY_H
#define FACTORY_H

#include "node.h"
#include "queue.h"

/* Queue types */
#define DROPTAIL_QUEUE 1
#define PFABRIC_QUEUE 2
#define PROB_DROP_QUEUE 4

class Factory {
    public:


        static Queue *get_queue(
                uint32_t id, 
                double rate,
                uint32_t queue_size, 
                uint32_t type,
                double drop_prob, 
                int location
                );

};

#endif
