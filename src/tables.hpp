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
  Table()
  {
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(100, 999); // define the range
    for(int n=0; n<40; ++n)
      std::cout << distr(gen) << ' '; // generate numbers
  }
private:
  int primary_key; // 3 digit n-n-n
  string course;
  // MANCA DATA
  string prof;
  int CFU;
  int score;
};

#endif
