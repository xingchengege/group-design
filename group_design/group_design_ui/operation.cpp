#include "operation.h"
#include<QDebug>
extern string category_reference[11];
struct rule2 {
	bool operator()(const college& a, const college& b) const {
		return a.ave_rank() < b.ave_rank();
	}
};
struct rule3 {
	bool operator()(const college& a, const college& b) const {
		return a.college_rank() < b.college_rank();
	}
};
void operation::recommend(int& degree, int& grade,vector<college>&s1,vector<college>&s2,vector<college>&s3) {
	multiset<college>::iterator p;
	int r = 0;
	if (degree < 23)r = 1;
	int s = data_.grade_rank_reference[r][grade];
	//查找满足该评级的学校
	for (p = data_.colleges_reference.begin(); p != data_.colleges_reference.end(); p++) {
		if (p->degree() <= degree)break;
	}
    multiset<college, rule2> col;
    for (; p != data_.colleges_reference.end(); p++)
            col.insert(*p);
	//查找满足该排名的学校
	//冲的
    p = col.begin();
    for (; p != col.end(); p++) {
		if (p->ave_rank() >= data_.grade_rank_reference[r][grade + 2] && p->ave_rank() <= data_.grade_rank_reference[r][grade]) {
            {
                college a(p);
                s1.push_back(a);
            }
		}
		else if (p->ave_rank() > data_.grade_rank_reference[r][grade])break;
	}
	//稳的
    for (; p != col.end(); p++) {
		if (p->ave_rank() >= data_.grade_rank_reference[r][grade - 1] && p->ave_rank() <= data_.grade_rank_reference[r][grade - 4]) {
            {
                college a(p);
                s2.push_back(a);
            }
		}
		else if (p->ave_rank() > data_.grade_rank_reference[r][grade - 4])break;
	}

	//保的
    int cnt=0;
    for (; p != col.end(); p++) {
        if (p->ave_rank() >= data_.grade_rank_reference[r][grade - 5]&&cnt<=15) {
            {
                college a(p);
                s3.push_back(a);
                cnt++;
            }
		}
        else if (cnt>15)break;
	}
};
major operation::search_major(string&name) {
    major a;
    qDebug()<<QString::fromStdString(name);
	for (multimap<int, major>::iterator p = data_.majors_reference.begin(); p != data_.majors_reference.end(); p++) {
		if ((p->second).name() == name) {
            return p->second;
		}
	}
    return a;
}
college operation::search_college(string&name) {

    for (multiset<college>::iterator p = data_.colleges_reference.begin(); p != data_.colleges_reference.end(); p++)
		if (p->name()== name) {
            return *p;
		}

}
void operation::totall_colleges() {
	multiset<college, rule3>t_college;
	for (multiset<college>::iterator p = data_.colleges_reference.begin(); p != data_.colleges_reference.end(); p++) {
		t_college.insert(*p);
	}
	for (multiset<college>::iterator p = t_college.begin(); p != t_college.end(); p++) {
		p->college_basic();
	}
}
void operation::appoint_province_colleges(int province,vector<string>&s) {
	multiset<college, rule3>t_college;
	for (multiset<college>::iterator p = data_.colleges_reference.begin(); p != data_.colleges_reference.end(); p++) {
		t_college.insert(*p);
	}
	for (multiset<college>::iterator p = t_college.begin(); p != t_college.end(); p++) {
        if (p->province() == province){s.push_back(p->name());}
	}

}
void operation::appoint_city_colleges(string city) {
	multiset<college, rule3>t_college;
	for (multiset<college>::iterator p = data_.colleges_reference.begin(); p != data_.colleges_reference.end(); p++) {
		t_college.insert(*p);
	}
	for (multiset<college>::iterator p = t_college.begin(); p != t_college.end(); p++) {
		if (p->city() == city)p->college_basic();
	}
}
void operation::totall_211_colleges() {
	multiset<college, rule3>t_college;
	for (multiset<college>::iterator p = data_.colleges_reference.begin(); p != data_.colleges_reference.end(); p++) {
		t_college.insert(*p);
	}
	for (multiset<college>::iterator p = t_college.begin(); p != t_college.end(); p++) {
		if (p->is_211())p->college_basic();
	}
}
void operation::totall_985_colleges() {
	multiset<college, rule3>t_college;
	for (multiset<college>::iterator p = data_.colleges_reference.begin(); p != data_.colleges_reference.end(); p++) {
		t_college.insert(*p);
	}
	for (multiset<college>::iterator p = t_college.begin(); p != t_college.end(); p++) {
		if (p->is_985())p->college_basic();
	}
}
void operation::totall_double_first_class_colleges() {
	multiset<college, rule3>t_college;
	for (multiset<college>::iterator p = data_.colleges_reference.begin(); p != data_.colleges_reference.end(); p++) {
		t_college.insert(*p);
	}
	for (multiset<college>::iterator p = t_college.begin(); p != t_college.end(); p++) {
		if (p->is_double_first_class())p->college_basic();
	}
}
void operation::totall_majors(int category,vector<string>&m) {
	//打印所有专业
	multimap<int, major>::iterator p = data_.majors_reference.begin();
    for(;p!=data_.majors_reference.end();p++){
       if((p->second).category()>category)break;
        if((p->second).category()==category)m.push_back((p->second).name());
    }

}
void operation::print_appoint_majors(multimap<int, major>::iterator p ,int category) {
	for (; p != data_.majors_reference.end(); p++)
	{
		if ((p->second).category() == category)
			cout << (p->second).name() << '\n';
		else break;
	}
}
