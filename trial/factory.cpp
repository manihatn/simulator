#include "factory.h"
#include <assert.h>

/* Factory method to return appropriate queue */
Queue* Factory::get_queue(
        uint32_t id, 
        double rate,
        uint32_t queue_size, 
        uint32_t type,
        double drop_prob, 
        int location
        ) { // Default drop_prob is 0.0

    switch(type) {
        case DROPTAIL_QUEUE:
            return new Queue(id, rate, queue_size, location);
    }
    assert(false);
    return NULL;
}


