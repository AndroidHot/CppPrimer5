#include "ex13_42.h"
#include <sstream>

using std::istringstream;

TextQuery::TextQuery(ifstream &ifs) : file(new StrVec())
{
    string text;
    while (std::getline(ifs, text))
    {
        file->push_back(text);
        unsigned int current_line = file->size() - 1;

        istringstream line(text);
        string word;
        while (line >> word)
        {
            auto &lines = word_map[word];
            if (!lines)
            {
                lines.reset(new set<line_no>);
            }
            lines->insert(current_line);
        }
    }
}

TextQuery::~TextQuery()
{
}

QueryResult TextQuery::query(const string &word) const
{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);

    auto loc = word_map.find(word);
    if (loc == word_map.end())
    {
        return QueryResult(word, file, nodata);
    }
    else
    {
        return QueryResult(word, file, loc->second);
    }
}

ostream &print(std::ostream &os, const QueryResult &result)
{
    os << result.word << " occurs " << result.lines->size() << " times." << std::endl;
    for (auto num : *result.lines)
    {
        os << "line " << (num + 1) << " : " << *(result.file->begin() + num) << std::endl;
    }
    return os;
}
