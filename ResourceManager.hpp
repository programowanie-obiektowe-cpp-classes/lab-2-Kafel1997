#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
        ResourceManager(){
            rs_ = new Resource();
        }

        ResourceManager(const ResourceManager& rm): rs_{rm.rs_}{};

        ~ResourceManager(){delete rs_;}

        ResourceManager& operator=(ResourceManager& rm){
            this->rs_=rm.rs_;
            return *this;
        }
        double get(){return rs_->get();}
    private:
        Resource* rs_;

};
