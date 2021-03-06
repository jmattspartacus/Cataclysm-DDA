#pragma once
#ifndef CONSTRUCTION_CATEGORY_H
#define CONSTRUCTION_CATEGORY_H

#include <string>

#include "json.h"
#include "type_id.h"

class JsonObject;

struct construction_category {
    void load( JsonObject &jo, const std::string &src );

    construction_category_id id;
    bool was_loaded = false;

    std::string name;

    static size_t count();
};

namespace construction_categories
{

void load( JsonObject &jo, const std::string &src );
void reset();

const std::vector<construction_category> &get_all();

} // namespace construction_categories

#endif
