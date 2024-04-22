#ifndef ID_H
#define ID_H

#include <iostream>
#include <cstdint>

using namespace std;

class Id {
    private:
        static int32_t prox_id;
        int32_t id;

        int32_t gerarId();

    public:
        Id();
        ~Id();

        int32_t getId() const;

        bool operator==(const Id& other) const;
};

#endif
