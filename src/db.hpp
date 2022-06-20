#ifndef DB_H_
#define DB_H_
#include "cypher.hpp"
#include "tables.hpp"
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

  public:
    vector<Table> db;
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
