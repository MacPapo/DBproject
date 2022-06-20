#include "tables.hpp"

Table::Table()
{

}

void Table::set_prof(string str)
{
  prof = str;
}
void Table::set_course(string str)
{
  course = str;
}
void Table::set_score(int scr)
{
  score = scr;
}
void Table::set_CFU(int cf)
{
  CFU = cf;
}
void Table::set_primary_key(int pk)
{
  primary_key = pk;
}
