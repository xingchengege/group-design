#pragma once
#include<string>
#include<iostream>
#include<vector>
#include<QString>
#include<set>
using std::multiset;
using std::vector;
using std::cout;
using std::string;
class college
{
private:
    string name_;
	string official_web_;
	string location_;
	double score_[3];
	int province_;
	int degree_;
	int plan_people_;
	double enroll_lowest_rank_[3];
	vector<string> open_major_;
	int rank_;
	bool is_211_;
	bool is_985_;
	bool is_double_first_class_;
public:
	int code_;
	college() {};
    college(multiset<college>::iterator a){
       name_=a->name();
       score_[0]=a->score_y1();
       enroll_lowest_rank_[0]=a->low_rank_y1();
       is_211_=a->is_211();
       is_985_=a->is_985();
       is_double_first_class_=a->is_double_first_class();
    }

    void set_message(string name, string official_web, string location, int degree, int plan_people
		, double* enroll_lowest_rank,vector<string>&open_major, double* score, int rank, bool is_211
		, bool is_985, bool is_double_first_class,int province);
	double ave_rank()const { return (enroll_lowest_rank_[0] * 0.5 + enroll_lowest_rank_[1] * 0.25 + enroll_lowest_rank_[2] * 0.25); }
	int degree()const { return degree_; }
	double ave_score()const { return (score_[0] * 0.5 + score_[1] * 0.25 + score_[2] * 0.25); }
	double low_rank_y1()const { return enroll_lowest_rank_[0]; }
	double low_rank_y2()const { return enroll_lowest_rank_[1]; }
	double low_rank_y3()const { return enroll_lowest_rank_[2]; }
    double score_y1()const{return score_[0];}
	bool is_211()const { return is_211_; }
	bool is_985()const { return is_985_; }
	bool is_double_first_class() const { return is_double_first_class_; }
	int college_rank()const { return rank_; }
	int plan_people()const { return plan_people_; }
    string name()const { return name_; }
	int province()const { return province_; }
	string city()const { return location_; }
    string web()const{return official_web_;}
	void open_major()const {
        //输出开设专业
		for (int i = 0; i < open_major_.size(); i++)
			cout << open_major_[i]<<'\n';
	}
    int major_num()const{return open_major_.size();}
    vector<string> totall_major()const{return open_major_;}
	void college_message() const;
    void college_basic()const;

};

