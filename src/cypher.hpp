#ifndef CYPHER_H_
#define CYPHER_H_
#include <iostream>
#include <string>

using std::string;

namespace Encrypt
{
  class Cypher
  {
  public:
    Cypher(int key, string msg)
    {
      for(char s : msg)
        {
          s += key;
          str.push_back(s);
        }
    }
    string decypher()
    {
      string dec;
      string src{str};
      for(char s : src)
        {
          s -= key;
          dec.push_back(s);
        }
      return dec;
    }
    string get_enc_str()
    {
      return str;
    }
  private:
    int key;
    string str;
  };
}
#endif
