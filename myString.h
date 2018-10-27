#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
using namespace std;

class myString
{
private:
  char *p_data;
  int m_size;

public:
  myString(const char *str = 0);
  myString(const myString &str);
  virtual ~myString();
  myString(myString const &oStr_);
  char &operator[](int Pi);
  myString operator+(const myString &str, const myString &str2);
  myString operator=(const myString &str);
  int size();
  friend ostream &operator<<(ostream &os, const myString &str);
};

#include "myString.inl"
#endif //MYSTRING_HP
