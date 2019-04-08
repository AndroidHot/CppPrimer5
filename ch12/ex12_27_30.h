#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <memory>
#include <istream>
#include <ostream>
#include <fstream>
#include <map>

using std::ifstream;
using std::map;
using std::ostream;
using std::set;
using std::shared_ptr;
using std::string;
using std::vector;

using line_no = vector<string>::size_type;

class QueryResult
{
  friend std::ostream &print(std::ostream &os, const QueryResult &result);

private:
  string word;
  shared_ptr<vector<string>> file;
  shared_ptr<set<line_no>> lines;

public:
  QueryResult(string s, shared_ptr<vector<string>> f, shared_ptr<set<line_no>> l) : word(s), file(f), lines(l){};
  ~QueryResult(){};
};

ostream &print(std::ostream &os, const QueryResult &result);

class TextQuery
{
public:
  TextQuery(ifstream &ifs);
  ~TextQuery();

  QueryResult query(const string &word) const;

private:
  shared_ptr<vector<string>> file;
  map<string, shared_ptr<set<line_no>>> word_map;
};

#endif

