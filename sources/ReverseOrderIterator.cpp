#include "OrgChart.hpp"

using namespace std;

namespace ariel
{
    OrgChart::ReverseOrderIterator::ReverseOrderIterator(OrgChart *ptr)//: pointer_to_current_chart(ptr){}
    {
        this->pointer_to_current_chart = ptr;
    }
    OrgChart::ReverseOrderIterator::ReverseOrderIterator(const OrgChart::ReverseOrderIterator &other)
    {

    }
    string& OrgChart::ReverseOrderIterator::operator*() const
    {
        return this->pointer_to_current_chart->name;
    }
    string* OrgChart::ReverseOrderIterator::operator->() const
    {
        return &(this->pointer_to_current_chart->name);
    }
    OrgChart::ReverseOrderIterator& OrgChart::ReverseOrderIterator::operator++() //++i
    {
        return *this;
    }
    const OrgChart::ReverseOrderIterator OrgChart::ReverseOrderIterator::operator++(int)
    {
        return *this;
    }
    bool OrgChart::ReverseOrderIterator::operator==(const OrgChart::ReverseOrderIterator& iter) const
    {
        return false;
    }
    bool OrgChart::ReverseOrderIterator::operator!=(const OrgChart::ReverseOrderIterator& iter) const
    {
        return false;
    }
    int OrgChart::ReverseOrderIterator::size()
    {
        return 0;
    }
    ostream& operator<<(ostream& output, const OrgChart::ReverseOrderIterator &iterator)
    {
        return output;
    }
}