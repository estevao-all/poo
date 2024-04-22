#include <iostream>
#include <cstdint>
#include "id.h"

using namespace std;

int32_t Id::prox_id = 0;

int32_t Id::gerarId() {
    return Id::prox_id++;
}

Id::Id() {
    this->id = this->gerarId();
}

Id::~Id() {}

int32_t Id::getId() const {
    return this->id;
}

bool Id::operator==(const Id& other) const {
    return this->id == other.id;
}
