#ifndef LSC_HPP
#define LSC_HPP
#include<string>
#include<vector>
#include<iostream>

class LCS{
    private:
        int m;
        int n;
        std::string a;
        std::string b;
        std::vector<std::vector<int>> vect;
    public:
        void readFile();
        int computeLCS();
        std::string commonStr();
        void directAccess();

};
#endif
