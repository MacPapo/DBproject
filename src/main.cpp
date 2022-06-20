#include "db.hpp"

using Database::DB;

int main()
{
  Table t;
  DB db;
  db.create_table();
  db.create_table();
  db.print_tables();
  return 0;
}
