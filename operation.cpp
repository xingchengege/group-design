#include "operation.h"
struct rule2 {
	bool operator()(const college& a,const college& b) const {
		return a.ave_rank() < b.ave_rank();
	}
};
struct rule3 {
	bool operator()(const college& a, const college& b) const {
		return a.college_rank() < b.college_rank();
	}
};
int degree(string s1,string s2) {
	int d = 0;
	if (s1 == "p_A") d = 7;
	if (s1 == "A+") d = 6;
	if (s1 == "A") d = 5;
	if (s1 == "B+") d = 4;
	if (s1 == "B") d = 3;
	if (s1 == "C") d = 2;
	if (s1 == "D")d = 1;
	if (s2 == "A+") d = d * 10 + 6;
	if (s2 == "A") d = d * 10 + 5;
	if (s2 == "B+") d = d * 10 + 4;
	if (s2 == "B") d = d * 10 + 3;
	if (s2 == "C") d = d * 10 + 2;
	if (s2 == "D")d = d * 10 + 1;
	return d;
}
void operation::recommend(int& degree, int& grade) {
	multiset<college>::iterator p;
	int r = 0;
	if (degree < 32)r = 1;
	//���������������ѧУ
	for (p = data_.colleges_reference.begin(); p != data_.colleges_reference.end(); p++) {
		if (p->degree() <= degree)break;
	}
	//���������������ѧУ
	//���
	cout << "���Գ��ѧУ��\n";
	for (; p != data_.colleges_reference.end(); p++) {
		if (p->ave_rank() >=  data_.grade_rank_reference[r][grade+1] && p->ave_rank() <= data_.grade_rank_reference[r][grade]) {
			p->college_message();
		}
		else if (p->ave_rank() > data_.grade_rank_reference[r][grade])break;
	}
	//�ȵ�
	cout << "�����ȵ�ѧУ��\n";
	for (; p != data_.colleges_reference.end(); p++) {
		if (p->ave_rank() >= data_.grade_rank_reference[r][grade - 1]&& p->ave_rank() <= data_.grade_rank_reference[r][grade - 4]) {
			p->college_message(); 
		}
		else if (p->ave_rank() > data_.grade_rank_reference[r][grade - 4])break;
	}
	//����
	cout << "���Ա���ѧУ��\n";
	for (; p != data_.colleges_reference.end(); p++) {
		if (p->ave_rank() >= data_.grade_rank_reference[r][grade - 5] && p->ave_rank() <= data_.grade_rank_reference[r][grade - 7]) {
			p->college_message();
		}
		else if (p->ave_rank() > data_.grade_rank_reference[r][grade - 7])break;
	}
};
void operation::search_major(int& major_code) {
	   cout << "רҵ���ƣ�" << data_.majors_reference[major_code].name() << '\n'
		   << "����ѧ�ƣ�" << data_.majors_reference[major_code].category() << '\n'
		   << "רҵ���ܣ�\n" << data_.majors_reference[major_code].introduction() << "\n����ԺУ��\n";
};
void operation::search_college(int& school_rank) {
	for(multiset<college>::iterator p = data_.colleges_reference.begin();p!=data_.colleges_reference.end();p++)
		if (p->college_rank() == school_rank)
			p->college_message();
}
