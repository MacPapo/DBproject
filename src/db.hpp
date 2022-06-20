#ifndef DB_H_
#define DB_H_
#include "cypher.hpp"
#include "tables.hpp"
#include <iostream>
#include <vector>

using std::vector;

namespace Database
{
  struct Relation;

  class DB
  {
  public:
    DB();
    void create_table();
    void print_tables();
    friend std::ostream& operator << (std::ostream& out, const Table& tab);

  public:
    vector<Table> tables;
    vector<int> keys;
    vector<Relation> rel;
  };

  struct Relation
  {
    Table tab;
    int   key;
  };
}

#endif
