#ifndef TABLES_H_
#define TABLES_H_
#include "cypher.hpp"
#include <random>

// tables for university exams
// 1) Materia
// 2) Data
// 3) Prof
// 4) CFU
// 5) Esito
class Table
{
public:
  Table();
  void set_prof(string);
  void set_course(string);
  void set_score(int);
  void set_CFU(int);
  void set_primary_key(int);

  string get_prof() const { return prof;  }
  string get_course() const { return course; }
  int get_score() const { return score; }
  int get_CFU() const { return CFU; };
  int get_primary_key() const { return primary_key; }

private:
  int primary_key; // 3 digit n-n-n
  string course;
  // MANCA DATA
  string prof;
  int CFU;
  int score;
};

#endif
