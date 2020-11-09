#include <iostream>
#include <string>
#include <bitset>

template <std::size_t N>
class Quiz
{
public:
    Quiz(std::string s) : quiz_bit(s) {}

    template <std::size_t M>
    friend std::ostream &operator<<(std::ostream &, Quiz<M> const &);

    template <std::size_t M>
    friend std::size_t Grade(Quiz<M> const &, Quiz<M> const &);

    void Update(size_t index, bool value);

private:
    std::bitset<N> quiz_bit;
};

template <std::size_t M>
std::ostream &operator<<(std::ostream &os, Quiz<M> const &quiz)
{
    return os << quiz.quiz_bit;
}

template <std::size_t M>
std::size_t Grade(Quiz<M> const &standard_answer, Quiz<M> const &student_answer)
{
    std::bitset<M> result = standard_answer.quiz_bit ^ student_answer.quiz_bit;
    result = result.flip();
    return result.count();
}

template <std::size_t N>
void Quiz<N>::Update(size_t index, bool value)
{
    quiz_bit.set(index, value);
}

int main(int argc, char const *argv[])
{
    // exercise 17.11
    Quiz<10> quiz1("1010101010");
    std::cout << quiz1 << std::endl;

    Quiz<100> quiz2("1010101010");
    std::cout << quiz2 << std::endl;

    // exercise 17.12
    quiz1.Update(0, true);
    std::cout << quiz1 << std::endl;

    // exercise 17.13
    Quiz<10> standard_answer("1010101011");
    Quiz<10> student_answer("1010101010");
    std::cout << "Grade is: " << Grade(standard_answer, student_answer) << std::endl;

    return 0;
}
