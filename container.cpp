#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <deque>
#include <set>
#include <unordered_map>
#include <unordered_set>

int main() {
   std::vector<int> avec{1,1,1,1,233,9,3,34,3};
   for(auto a : avec)
    std::cout<<a;
    std::cout<<std::endl;

  std::list<int> alist{1,1,1,1,233,9,3,34,3};
   for(auto a : alist)
    std::cout<<a;
    std::cout<<std::endl;

  std::deque<int> adeque{1,1,1,1,233,9,3,34,3};
   for(auto a : adeque)
    std::cout<<a;
    std::cout<<std::endl;

  std::set<int> aset{1,1,1,1,233,9,3,34,3};
   for(auto a : aset)
    std::cout<<a;
    std::cout<<std::endl;

  std::unordered_set<int> aunordered_set{1,1,1,1,233,9,3,34,3};
   for(auto a : aunordered_set)
    std::cout<<a;
    std::cout<<std::endl;

  std::unordered_multiset<int> aunordered_multiset{1,1,1,1,233,9,3,34,3};
   for(auto a : aunordered_multiset)
    std::cout<<a;
    std::cout<<std::endl;


    // Initialize a Map of string & int using initializer_list
  std::map<std::string, int> mapOfMarks  { { "Riti", 2 }, { "Jack", 4 } };
    for (auto entry : mapOfMarks)
        std::cout << entry.first << " :: " << entry.second << std::endl;
    std::cout << std::endl;

  std::multimap<std::string, int> multimapOfMarks  { { "Riti", 2 }, { "Jack", 4 } };
    for (auto entry : multimapOfMarks)
        std::cout << entry.first << " :: " << entry.second << std::endl;
    std::cout << std::endl; 

  std::unordered_map<std::string, int> unordered_mapOfMarks  { { "Riti", 2 }, { "Jack", 4 } };
    for (auto entry : unordered_mapOfMarks)
        std::cout << entry.first << " :: " << entry.second << std::endl;
    std::cout << std::endl;

  std::unordered_multimap<std::string, int> unordered_multimapOfMarks  { { "Riti", 2 }, { "Jack", 4 } };
    for (auto entry : unordered_multimapOfMarks)
        std::cout << entry.first << " :: " << entry.second << std::endl;
    std::cout << std::endl;    

}
