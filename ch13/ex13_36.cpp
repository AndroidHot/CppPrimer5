#include "ex13_36.h"

void Folder::add_msg(Message *msg)
{
    messages.insert(msg);
}

void Folder::remove_msg(Message *msg)
{
    messages.erase(msg);
}

void Folder::add_to_message(const Folder &f)
{
    for (auto m : f.messages)
    {
        m->add_folder(this);
    }
}

Folder::Folder(const Folder &f) : messages(f.messages)
{
    add_to_message(f);
}

void Folder::remove_from_message()
{
    for (auto m : messages)
    {
        m->remove_folder(this);
    }
}

Folder::~Folder()
{
    remove_from_message();
}

Folder &Folder::operator=(const Folder &rhs)
{
    remove_from_message();
    messages = rhs.messages;
    add_to_message(rhs);
    return *this;
}

void swap(Folder &lhs, Folder &rhs)
{
    using std::swap;
    lhs.remove_from_message();
    rhs.remove_from_message();

    swap(lhs.messages, rhs.messages);

    lhs.add_to_message(lhs);
    rhs.add_to_message(rhs);
}

int main(int argc, char const *argv[])
{

    return 0;
}
