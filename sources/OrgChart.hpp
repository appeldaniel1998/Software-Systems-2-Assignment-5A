#include <iostream>
#include <string>

namespace ariel
{
    class OrgChart
    {
        private:
            std::string name;
        public:
            OrgChart();
            OrgChart add_root(std::string newRoot);
            OrgChart add_sub(std::string from, std::string to);
            
            friend std::ostream& operator<<(std::ostream& output, const OrgChart &org);

            class LevelOrderIterator
            {
                
                private:
                    OrgChart* pointer_to_current_chart;
                public:
                    LevelOrderIterator(OrgChart* ptr = nullptr);//: pointer_to_current_chart(ptr){}
                    LevelOrderIterator(const LevelOrderIterator &other);
                    std::string& operator*() const;
                    std::string* operator->() const;
                    LevelOrderIterator& operator++(); //++i
                    const LevelOrderIterator operator++(int);
                    bool operator==(const LevelOrderIterator& iter) const;
                    bool operator!=(const LevelOrderIterator& iter) const;
                    int size();
                    friend std::ostream& operator<<(std::ostream& output, const LevelOrderIterator &iterator);
            };
            class ReverseOrderIterator
            {
                private:
                    OrgChart* pointer_to_current_chart;
                public:
                    ReverseOrderIterator(OrgChart* ptr = nullptr);//: pointer_to_current_chart(ptr){}
                    ReverseOrderIterator(const ReverseOrderIterator &other);
                    std::string& operator*() const;
                    std::string* operator->() const;
                    ReverseOrderIterator& operator++(); //++i
                    const ReverseOrderIterator operator++(int);
                    bool operator==(const ReverseOrderIterator& iter) const;
                    bool operator!=(const ReverseOrderIterator& iter) const;
                    friend std::ostream& operator<<(std::ostream& output, const ReverseOrderIterator &iterator);
                    int size();
            };
            class PreOrderIterator
            {
                private:
                    OrgChart* pointer_to_current_chart;
                public:
                    PreOrderIterator(OrgChart* ptr = nullptr);//: pointer_to_current_chart(ptr){}
                    PreOrderIterator(const PreOrderIterator &other);
                    std::string& operator*() const;
                    std::string* operator->() const;
                    PreOrderIterator& operator++(); //++i
                    const PreOrderIterator operator++(int);
                    bool operator==(const PreOrderIterator& iter) const;
                    bool operator!=(const PreOrderIterator& iter) const;
                    friend std::ostream& operator<<(std::ostream& output, const PreOrderIterator &iterator);
                    int size();
            };

            LevelOrderIterator begin_level_order();
            LevelOrderIterator end_level_order();

            ReverseOrderIterator begin_reverse_order();
            ReverseOrderIterator reverse_order();

            PreOrderIterator begin_preorder();
            PreOrderIterator end_preorder();

            LevelOrderIterator begin();
            LevelOrderIterator end();
    };
};