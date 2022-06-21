#include "db.hpp"

using Database::DB;
using std::cout;
using std::endl;
using std::ostream;


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
    bool is_found(true);
    do
    {
        key = (int)distr(gen);
        if(keys.empty())
            is_found = false;
        for(int x: keys)
          {
            if(x != key)
                is_found = false;
          }
    }
    while(is_found);

    string temp_prof("IO");
    string temp_course("ARCH");
    int temp_score(10);
    int temp_cfu(3);

    temp_tab.set_prof(temp_prof);
    temp_tab.set_course(temp_course);
    temp_tab.set_score(temp_score);
    temp_tab.set_CFU(temp_cfu);
    temp_tab.set_primary_key(key);

    tables.push_back(temp_tab);
    keys.push_back(key);

    Relation temp_rel;
    temp_rel.key = key;
    temp_rel.tab = temp_tab;
    rel.push_back(temp_rel);
}

ostream& operator << (ostream& out, const Table& tab)
{
  out << "-------------------------" << endl;
  out << "- ID:\t\t" << tab.get_primary_key() << endl;
  out << "- Course:\t" << tab.get_course() << endl;
  out << "- Prof:\t\t" << tab.get_prof() << endl;
  out << "- CFU:\t\t" << tab.get_CFU() << endl;
  out << "- Score:\t" << tab.get_score() << endl;
  out << "-------------------------" << endl;
  return out;
}

void DB::print_tables()
{
  for(const auto& tab : tables)
    cout << tab;
}
