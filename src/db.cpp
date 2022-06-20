#include "db.hpp"

using Database::DB;

DB::DB()
{
}

void DB::create_table()
{
    Table temp_tab;
    int key;
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(100, 999); // define the range
    bool is_found(false);
    do
    {

        key = (int)distr(gen);
        if(keys.empty())
            is_found = true;
        for(int x: keys)
            if(x == key)
                is_found = true;
    }while(!is_found);
    keys.push_back(key);
    Relation temp_rel;
    temp_rel.key = key;
    temp_rel.tab = temp_tab;
    rel.push_back(temp_rel);

}
