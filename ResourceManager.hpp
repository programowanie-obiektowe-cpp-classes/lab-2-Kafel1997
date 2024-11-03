#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager() : rs_{new Resource{}} {}

    ResourceManager(const ResourceManager& rm): rs_{new Resource{*rm.rs_}}{}

    ResourceManager& operator=(const ResourceManager& rm) {
        if (this == &rm) return *this;
        delete rs_;
        rs_ = new Resource{*rm.rs_};
        return *this;
    }

    ~ResourceManager() {
        delete rs_;
    }

    double get() {
        return rs_->get();
    }

private:
    Resource* rs_;

};
