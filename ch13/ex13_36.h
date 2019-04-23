#ifndef FOLDER_H
#define FOLDER_H

#include <set>
#include "ex13_34.h"

using std::set;

class Message;

class Folder
{
  friend void swap(Folder &, Folder &);
  friend class Message;

public:
  Folder() = default;
  Folder(const Folder &);
  Folder &operator=(const Folder &);
  ~Folder();

  void add_msg(Message *);
  void remove_msg(Message *);

private:
  set<Message *> messages;

  void add_to_message(const Folder &);
  void remove_from_message();
};

void swap(Folder &, Folder &);

#endif
