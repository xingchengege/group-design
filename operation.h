#pragma once
#include<fstream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<iostream>
#include"major.h"
#include"college.h"
#include"data.h"
using std::map;
using std::cout;
using std::vector;
using std::string;
using std::multiset;
class operation
{
private:
	data data_;
	
	
public:
	operation() {}
	void recommend(int& degree, int& grade);
	void transform_pushButton() {}
	void search_college(int& school_rank);
	void search_major(int& major_code);
	
	void open_IM();
};

