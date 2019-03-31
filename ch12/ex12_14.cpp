#include <iostream>
#include <string>
#include <memory>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;

struct destination
{
    string ip;
    int port;
    destination(string ip_, int port_) : ip(ip_), port(port_) {}
};
struct connection
{
    string ip;
    int port;
    connection(string ip_, int port_) : ip(ip_), port(port_) {}
};

connection connect(destination *des)
{
    shared_ptr<connection> p_conn(new connection(des->ip, des->port));
    cout << "creating connection(" << p_conn.use_count() << ")" << endl;
    return *p_conn;
};

void disconnect(connection p_conn)
{
    cout << "connection close(" << p_conn.ip << ":" << p_conn.port << ")" << endl;
};

void end_connection(connection *p)
{
    disconnect(*p);
};

void f(destination &d)
{
    connection conn = connect(&d);
    shared_ptr<connection> p(&conn, end_connection);
    cout << "connecting now(" << p.use_count() << ")" << endl;
}

int main(int argc, char const *argv[])
{
    destination des("androidhot.github.io", 1080);
    f(des);
    return 0;
}

