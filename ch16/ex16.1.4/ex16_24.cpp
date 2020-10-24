#include <vector>
#include <memory>
#include <string>

using std::shared_ptr;
using std::string;
using std::vector;

template <typename T>
class Blob
{
public:
    typedef T value_type;
    typedef typename vector<T>::size_type size_type;

    Blob();
    Blob(std::initializer_list<T> il);
    template <typename It>
    Blob(It begin, It end);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const T &t) { data->push_back(t); }
    void push_back(T &&t) { data->push_back(std::move(t)); }
    void pop_back();

    T &back();
    T &operator[](size_type i);

private:
    shared_ptr<vector<T>> data;
    void check(size_type i, const string &msg) const;
};

template <typename T>
Blob<T>::Blob() : data(std::make_shared<std::vector<T>>()) {}

template <typename T>
Blob<T>::Blob(std::initializer_list<T> il) : data(std::make_shared<std::vector<T>>(il)) {}

template <typename T>
template <typename It>
Blob<T>::Blob(It begin, It end) : data(std::make_shared<std::vector<T>>(begin, end)) {}

template <typename T>
void Blob<T>::check(size_type i, const string &msg) const
{
    if (i >= data->size())
        throw std::out_of_range(msg);
}

template <typename T>
void Blob<T>::pop_back()
{
    check(0, "pop_back on empty Blob");
    data->pop_back();
}

template <typename T>
T &Blob<T>::back()
{
    check(0, "back on empty Blob");
    return data->back();
}

template <typename T>
T &Blob<T>::operator[](size_type i)
{
    check(i, "subscript out of range");
    return (*data)[i];
}

typedef Blob<string> StrBlob;

int main()
{
    vector<string> lang = {"C++", "C"};
    StrBlob str_blob(lang.begin(), lang.end());

    if (!str_blob.empty())
    {
        printf("%s\n", str_blob.back().c_str());
    }

    str_blob.pop_back();
    str_blob.pop_back();

    if (str_blob.empty())
    {
        str_blob.push_back("Java");
    }

    printf("%s\n", str_blob.back().c_str());

    printf("%s\n", str_blob[str_blob.size() - 1].c_str());
}