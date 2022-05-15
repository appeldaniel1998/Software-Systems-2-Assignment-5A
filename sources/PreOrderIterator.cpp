#include "OrgChart.hpp"

using namespace std;

namespace ariel
{
    OrgChart::PreOrderIterator::PreOrderIterator(OrgChart *ptr)//: pointer_to_current_chart(ptr){}
    {
        this->pointer_to_current_chart = ptr;
    }
    OrgChart::PreOrderIterator::PreOrderIterator(const OrgChart::PreOrderIterator &other)
    {

    }
    string& OrgChart::PreOrderIterator::operator*() const
    {
        return this->pointer_to_current_chart->name;
    }
    string* OrgChart::PreOrderIterator::operator->() const
    {
        // LevelOrderIterator newIter{*this};
        // return &newIter;
        return &(this->pointer_to_current_chart->name);
    }
    OrgChart::PreOrderIterator& OrgChart::PreOrderIterator::operator++() //++i
    {
        return *this;
    }
    const OrgChart::PreOrderIterator OrgChart::PreOrderIterator::operator++(int)
    {
        return *this;
    }
    bool OrgChart::PreOrderIterator::operator==(const OrgChart::PreOrderIterator& iter) const
    {
        return false;
    }
    bool OrgChart::PreOrderIterator::operator!=(const OrgChart::PreOrderIterator& iter) const
    {
        return false;
    }
    int OrgChart::PreOrderIterator::size()
    {
        return 0;
    }
    ostream& operator<<(ostream& output, const OrgChart::PreOrderIterator &iterator)
    {
        return output;
    }
}