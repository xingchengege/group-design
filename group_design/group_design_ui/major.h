#pragma once
#include<string>
#include<vector>
#include<iostream>
#include"college.h"
using std::string;
using std::vector;
using std::cout;
class major
{
private:
	//专业所含有的数据为：名称，所属类别，简介，所开设的学校，年平均薪资
	string name_;
	string introduction_;
	int category_;
	string industry_;
	string work_;
	string city_;
	int income_;
	vector<string> open_school_;
public:
	major() {}

	void set_message(string name, string introduction, int category
		, int income, string industry, string work, string city, vector<string>& open_school) {
		name_ = name;
		introduction_ = introduction;
		category_ = category;
		income_ = income;
		industry_ = industry;
		work_ = work;
		city_ = city;
		open_school_ = open_school;
	}
    string industry()const{return industry_;}
    string work()const{return work_;}
    string city()const{return city_;}
    string introduction()const;
	int category()const { return category_; }
	string name()const { return name_; }
	int income()const { return income_; }
    vector<string> totall_school()const{return open_school_;}
	void major_message()const;
};

