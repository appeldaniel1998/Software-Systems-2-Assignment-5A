#include "OrgChart.hpp"

using namespace std;

namespace ariel
{
    OrgChart::LevelOrderIterator::LevelOrderIterator(OrgChart *ptr)//: pointer_to_current_chart(ptr){}
    {
        this->pointer_to_current_chart = ptr;
    }
    OrgChart::LevelOrderIterator::LevelOrderIterator(const OrgChart::LevelOrderIterator &other)
    {

    }
    string& OrgChart::LevelOrderIterator::operator*() const
    {
        return this->pointer_to_current_chart->name;
    }
    string* OrgChart::LevelOrderIterator::operator->() const
    {
        // LevelOrderIterator newIter{*this};
        // return &newIter;
        return &(this->pointer_to_current_chart->name);
    }
    OrgChart::LevelOrderIterator& OrgChart::LevelOrderIterator::operator++() //++i
    {
        return *this;
    }
    const OrgChart::LevelOrderIterator OrgChart::LevelOrderIterator::operator++(int)
    {
        return *this;
    }
    bool OrgChart::LevelOrderIterator::operator==(const OrgChart::LevelOrderIterator& iter) const
    {
        return false;
    }
    bool OrgChart::LevelOrderIterator::operator!=(const OrgChart::LevelOrderIterator& iter) const
    {
        return false;
    }
    int OrgChart::LevelOrderIterator::size()
    {
        return 0;
    }
    ostream& operator<<(ostream& output, const OrgChart::LevelOrderIterator &iterator)
    {
        return output;
    }
}