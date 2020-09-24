#include "college.h"
college::college(string name, string official_web, string location, int degree, int plan_people
	, double* enroll_lowest_rank, int* major_code, double* score, int rank, bool is_211
	, bool is_985, bool is_double_first_class) {
	name_ = name;
	official_web_ = official_web;
	location_ = location;
	for(int i=0;i<3;i++)
		score_[i] = score[i];
	degree_ = degree;
	plan_people_ = plan_people;
	for(int i=0;i<3;i++)
	enroll_lowest_rank_[i] = enroll_lowest_rank[i];
	for (int i = 0; i < 150; i++)
		major_code_[i] = major_code[i];
	is_211_ = is_211;
	is_985_ = is_985;
	is_double_first_class_ = is_double_first_class;
}
void college::set_message(string name, string official_web, string location, int degree, int plan_people
	, double* enroll_lowest_rank, int* major_code,double* score, int rank, bool is_211
	, bool is_985, bool is_double_first_class) {
	name_ = name;
	official_web_ = official_web;
	location_ = location;
	for (int i = 0; i < 3; i++)
		score_[i] = score[i];
	degree_ = degree;
	plan_people_ = plan_people;
	for (int i = 0; i < 3; i++)
		enroll_lowest_rank_[i] = enroll_lowest_rank[i];
	for (int i = 0; i < 150; i++)
		major_code_[i] = major_code[i];
	is_211_ = is_211;
	is_985_ = is_985;
	is_double_first_class_ = is_double_first_class;
}
void college::college_message()const {
	//���ѧУȫ����Ϣ
	cout << name_ << is_double_first_class_ ? " ˫һ��" : "       ";
	cout << is_985_ ? " 985" : "    ";
	cout << is_211_ ? " 211" : "    ";
	cout << "������¼ȡ��ͷ�����" << score_[0] << ' ' << score_[1] << ' ' << score_[2] << '\n';
	cout << "������¼ȡ���������" << enroll_lowest_rank_[0] << ' ' << enroll_lowest_rank_[1] << ' ' << enroll_lowest_rank_[2] << '\n';
	cout << "����ƻ�����������" << plan_people_<<'\n';
	cout << "ѧУ�Ĺ�����ַ��" << official_web_ << '\n';
}