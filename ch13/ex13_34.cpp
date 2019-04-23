#include "ex13_34.h"

void Message::add_to_folders(const Message &msg)
{
    for (auto f : msg.folders)
    {
        f->add_msg(this);
    }
}

void Message::remove_from_folders()
{
    for (auto f : folders)
    {
        f->remove_msg(this);
    }
}

Message::Message(const Message &msg) : content(msg.content), folders(msg.folders)
{
    add_to_folders(msg);
}

Message &Message::operator=(const Message &rhs)
{
    remove_from_folders();
    content = rhs.content;
    folders = rhs.folders;
    add_to_folders(rhs);
    return *this;
}

void Message::save(Folder &folder)
{
    folders.insert(&folder);
    folder.add_msg(this);
}

void Message::remove(Folder &folder)
{
    folders.erase(&folder);
    folder.remove_msg(this);
}

void Message::add_folder(Folder *f)
{
    folders.insert(f);
}
void Message::remove_folder(Folder *f)
{
    folders.erase(f);
}

Message::~Message()
{
    remove_from_folders();
}

void swap(Message &lhs, Message &rhs)
{
    using std::swap;
    for (auto f : lhs.folders)
    {
        f->remove_msg(&lhs);
    }
    for (auto f : rhs.folders)
    {
        f->remove_msg(&rhs);
    }
    swap(lhs.content, rhs.content);
    swap(lhs.folders, rhs.folders);
    for (auto f : lhs.folders)
    {
        f->add_msg(&lhs);
    }
    for (auto f : rhs.folders)
    {
        f->add_msg(&rhs);
    }
}
