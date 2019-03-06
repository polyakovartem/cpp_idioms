#include <list>
#include <set>
#include <iostream>

template <class T>
class vector
{
    T * mem;
  public:
    template <class InputIterator>
    vector (InputIterator begin, InputIterator end) // Iterator-pair constructor
    {
      // allocate enough memory and store in mem.
      mem=new T[std::distance(begin, end)];
      for (int i = 0; begin != end; ++i)
      {
        mem[i] = *begin;
        ++begin;
      }
    }
};

int main (void)
{
    std::list<int> l(4);
    std::fill(l.begin(),l.end(), 10);    // fill up list using iterator pair technique.
    //std::set<int> s(4);
    //std::fill(s.begin(),s.end(), 20);    // fill up set using iterator pair technique.

    std::cout << "hello gyp" << std::endl;
    //std::vector<int> v1(l.begin(), l.end());  // create vector using iterator pair technique.
    //std::vector<int> v2(s.begin(), s.end());  // create another vector.
}
