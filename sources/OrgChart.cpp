#include "OrgChart.hpp"

using namespace std;

namespace ariel
{
    OrgChart::OrgChart()
    {
        this->name = "";
    }

    OrgChart OrgChart::add_root(string newRoot)
    {
        return *this;
    }

    OrgChart OrgChart::add_sub(string from, string to)
    {
        return *this;
    }
    
    ostream& operator<<(ostream& output, const OrgChart &org)
    {
        return output;
    }

    OrgChart::LevelOrderIterator OrgChart::begin_level_order()
    {
        LevelOrderIterator temp{this};
        return temp;
    }

    OrgChart::LevelOrderIterator OrgChart::end_level_order()
    {
        LevelOrderIterator temp{this};
        return temp;
    }

    OrgChart::ReverseOrderIterator OrgChart::begin_reverse_order()
    {
        ReverseOrderIterator temp{this};
        return temp;
    }

    OrgChart::ReverseOrderIterator OrgChart::reverse_order()
    {
        ReverseOrderIterator temp{this};
        return temp;
    }

    OrgChart::PreOrderIterator OrgChart::begin_preorder()
    {
        PreOrderIterator temp{this};
        return temp;
    }

    OrgChart::PreOrderIterator OrgChart::end_preorder()
    {
        PreOrderIterator temp{this};
        return temp;
    }

    OrgChart::LevelOrderIterator OrgChart::begin()
    {
        LevelOrderIterator temp{this};
        return temp;
    }
    OrgChart::LevelOrderIterator OrgChart::end()
    {
        LevelOrderIterator temp{this};
        return temp;
    }
}