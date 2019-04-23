#ifndef MESSAGE_H
#define MESSAGE_H

#include <set>
#include <string>
#include "ex13_36.h"

using std::set;
using std::string;

class Folder;

class Message
{
  friend class Folder;
  friend void swap(Message &, Message &);

private:
  string content;
  set<Folder *> folders;
  void add_to_folders(const Message &);
  void remove_from_folders();

public:
  explicit Message(const string &str = "") : content(str){};
  Message(const Message &);
  Message &operator=(const Message &);
  void save(Folder &);
  void remove(Folder &);
  void add_folder(Folder*);
  void remove_folder(Folder*);
  ~Message();
};

void swap(Message &, Message &);

#endif
