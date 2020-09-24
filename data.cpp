#include "data.h"
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
int degree(string s1, string s2) {
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
void data::grade_rank() {
	grade_rank_reference[1][426] = 1;
	grade_rank_reference[1][425] = 48;
	grade_rank_reference[1][424] = 70;
	grade_rank_reference[1][423] = 92;
	grade_rank_reference[1][422] = 118;
	grade_rank_reference[1][421] = 143;
	grade_rank_reference[1][420] = 175;
	grade_rank_reference[1][419] = 217;
	grade_rank_reference[1][418] = 253;
	grade_rank_reference[1][417] = 318;
	grade_rank_reference[1][416] = 380;
	grade_rank_reference[1][415] = 458;
	grade_rank_reference[1][414] = 530;
	grade_rank_reference[1][413] = 623;
	grade_rank_reference[1][412] = 729;
	grade_rank_reference[1][411] = 866;
	grade_rank_reference[1][410] = 1014;
	grade_rank_reference[1][409] = 1176;
	grade_rank_reference[1][408] = 1334;
	grade_rank_reference[1][407] = 1529;
	grade_rank_reference[1][406] = 1740;
	grade_rank_reference[1][405] = 2023;
	grade_rank_reference[1][404] = 2278;
	grade_rank_reference[1][403] = 2606;
	grade_rank_reference[1][402] = 2897;
	grade_rank_reference[1][401] = 3241;
	grade_rank_reference[1][400] = 3591;
	grade_rank_reference[1][399] = 4003;
	grade_rank_reference[1][398] = 4432;
	grade_rank_reference[1][397] = 4902;
	grade_rank_reference[1][396] = 5387;
	grade_rank_reference[1][395] = 5930;
	grade_rank_reference[1][394] = 6529;
	grade_rank_reference[1][393] = 7128;
	grade_rank_reference[1][392] = 7767;
	grade_rank_reference[1][391] = 8422;
	grade_rank_reference[1][390] = 9133;
	grade_rank_reference[1][389] = 9893;
	grade_rank_reference[1][388] = 10744;
	grade_rank_reference[1][387] = 11551;
	grade_rank_reference[1][386] = 12389;
	grade_rank_reference[1][385] = 13376;
	grade_rank_reference[1][384] = 14328;
	grade_rank_reference[1][383] = 15354;
	grade_rank_reference[1][382] = 16420;
	grade_rank_reference[1][381] = 17578;
	grade_rank_reference[1][380] = 18746;
	grade_rank_reference[1][379] = 20001;
	grade_rank_reference[1][378] = 21275;
	grade_rank_reference[1][377] = 22573;
	grade_rank_reference[1][376] = 23956;
	grade_rank_reference[1][375] = 25389;
	grade_rank_reference[1][374] = 26887;
	grade_rank_reference[1][373] = 28334;
	grade_rank_reference[1][372] = 29926;
	grade_rank_reference[1][371] = 31491;
	grade_rank_reference[1][370] = 33125;
	grade_rank_reference[1][369] = 34732;
	grade_rank_reference[1][368] = 36499;
	grade_rank_reference[1][367] = 38346;
	grade_rank_reference[1][366] = 40136;
	grade_rank_reference[1][365] = 42004;
	grade_rank_reference[1][364] = 43905;
	grade_rank_reference[1][363] = 45860;
	grade_rank_reference[1][362] = 47816;
	grade_rank_reference[1][361] = 49762;
	grade_rank_reference[1][360] = 51755;
	grade_rank_reference[1][359] = 53861;
	grade_rank_reference[1][358] = 56010;
	grade_rank_reference[1][357] = 58122;
	grade_rank_reference[1][356] = 60384;
	grade_rank_reference[1][355] = 62605;
	grade_rank_reference[1][354] = 64829;
	grade_rank_reference[1][353] = 67096;
	grade_rank_reference[1][352] = 69326;
	grade_rank_reference[1][351] = 71646;
	grade_rank_reference[1][350] = 73952;
	grade_rank_reference[1][349] = 76258;
	grade_rank_reference[1][348] = 78544;
	grade_rank_reference[1][347] = 80833;
	grade_rank_reference[0][426] = 1;
	grade_rank_reference[0][425] = 48;
	grade_rank_reference[0][424] = 70;
	grade_rank_reference[0][423] = 92;
	grade_rank_reference[0][422] = 118;
	grade_rank_reference[0][421] = 143;
	grade_rank_reference[0][420] = 175;
	grade_rank_reference[0][419] = 217;
	grade_rank_reference[0][418] = 253;
	grade_rank_reference[0][417] = 318;
	grade_rank_reference[0][416] = 380;
	grade_rank_reference[0][415] = 458;
	grade_rank_reference[0][414] = 530;
	grade_rank_reference[0][413] = 623;
	grade_rank_reference[0][412] = 729;
	grade_rank_reference[0][411] = 866;
	grade_rank_reference[0][410] = 1014;
	grade_rank_reference[0][409] = 1176;
	grade_rank_reference[0][408] = 1334;
	grade_rank_reference[0][407] = 1529;
	grade_rank_reference[0][406] = 1740;
	grade_rank_reference[0][405] = 2023;
	grade_rank_reference[0][404] = 2278;
	grade_rank_reference[0][403] = 2606;
	grade_rank_reference[0][402] = 2897;
	grade_rank_reference[0][401] = 3241;
	grade_rank_reference[0][400] = 3591;
	grade_rank_reference[0][399] = 4003;
	grade_rank_reference[0][398] = 4432;
	grade_rank_reference[0][397] = 4902;
	grade_rank_reference[0][396] = 5387;
	grade_rank_reference[0][395] = 5930;
	grade_rank_reference[0][394] = 6529;
	grade_rank_reference[0][393] = 7128;
	grade_rank_reference[0][392] = 7767;
	grade_rank_reference[0][391] = 8422;
	grade_rank_reference[0][390] = 9133;
	grade_rank_reference[0][389] = 9893;
	grade_rank_reference[0][388] = 10744;
	grade_rank_reference[0][387] = 11550;
	grade_rank_reference[0][386] = 12387;
	grade_rank_reference[0][385] = 13374;
	grade_rank_reference[0][384] = 14326;
	grade_rank_reference[0][383] = 15351;
	grade_rank_reference[0][382] = 16417;
	grade_rank_reference[0][381] = 17575;
	grade_rank_reference[0][380] = 18740;
	grade_rank_reference[0][379] = 19991;
	grade_rank_reference[0][378] = 21260;
	grade_rank_reference[0][377] = 22552;
	grade_rank_reference[0][376] = 23930;
	grade_rank_reference[0][375] = 25355;
	grade_rank_reference[0][374] = 26845;
	grade_rank_reference[0][373] = 28283;
	grade_rank_reference[0][372] = 29861;
	grade_rank_reference[0][371] = 31418;
	grade_rank_reference[0][370] = 33028;
	grade_rank_reference[0][369] = 34611;
	grade_rank_reference[0][368] = 36361;
	grade_rank_reference[0][367] = 38178;
	grade_rank_reference[0][366] = 39940;
	grade_rank_reference[0][365] = 41779;
	grade_rank_reference[0][364] = 43642;
	grade_rank_reference[0][363] = 45554;
	grade_rank_reference[0][362] = 47462;
	grade_rank_reference[0][361] = 49365;
	grade_rank_reference[0][360] = 51296;
	grade_rank_reference[0][359] = 53338;
	grade_rank_reference[0][358] = 55417;
	grade_rank_reference[0][357] = 57444;
	grade_rank_reference[0][356] = 59612;
	grade_rank_reference[0][355] = 61735;
	grade_rank_reference[0][354] = 63843;
	grade_rank_reference[0][353] = 65979;
	grade_rank_reference[0][352] = 68072;
	grade_rank_reference[0][351] = 70249;
	grade_rank_reference[0][350] = 72409;
	grade_rank_reference[0][349] = 74534;
	grade_rank_reference[0][348] = 76652;
	grade_rank_reference[0][347] = 78736;
}
void data::read_college() {
	int major_code[150] = { 0 };
	double grade[3];
	double rank[3];
	//添加学校，苦逼操作
	//名称，官网地址，所在城市，要求评级，计划人数，三年最低录取排名，所含专业，
	//三年最低最低分，学校QS排名，是不是211，是不是985，是不是双一流
	grade[0] = 387; grade[1] = 378; grade[2] = 374;
	rank[0] = 7545; rank[1] = 6969; rank[2] = 6303;
	college a("南京理工大学", "http://www.njust.edu.cn/", "南京"
		, degree("p_A", "B"), 480, rank, major_code, grade, 40, true, false, true);
	colleges_reference.insert(a);
	grade[0] = 399; grade[1] = 391; grade[2] = 387;
	rank[0] = 2275; rank[1] = 1905; rank[2] = 2054;
	a.set_message("南京大学", "https://www.nju.edu.cn/", "南京"
		, degree("A", "A"), 617, rank, major_code, grade, 7, true, true, true);
	colleges_reference.insert(a);
	grade[0] = 398; grade[1] = 388; grade[2] = 384;
	rank[0] = 2535; rank[1] = 2673; rank[2] = 2716;
	a.set_message("东南大学", "https://www.seu.edu.cn/", "南京"
		, degree("p_A", "B"), 452, rank, major_code, grade, 26, true, true, true);
	colleges_reference.insert(a);
	grade[0] = 383; grade[1] = 359; grade[2] = 368;
	rank[0] = 10428; rank[1] = 25683; rank[2] = 9700;
	a.set_message("河海大学", "http://www.hhu.edu.cn/", "南京"
		, degree("A", "B"), 906, rank, major_code, grade, 93, true, false, true);
	colleges_reference.insert(a);
	grade[0] = 371; grade[1] = 361; grade[2] = 354;
	rank[0] = 23755; rank[1] = 22956; rank[2] = 22815;
	a.set_message("南京农业大学", "http://www.njau.edu.cn/", "南京"
		, degree("A", "B"), 582, rank, major_code, grade, 71, true, false, true);
	colleges_reference.insert(a);
	grade[0] = 376; grade[1] = 367; grade[2] = 360;
	rank[0] = 17387; rank[1] = 15908; rank[2] = 16287;
	a.set_message("南京师范大学", "http://www.njnu.edu.cn/", "南京"
		, degree("A", "B"), 1396, rank, major_code, grade, 66, true, false, true);
	colleges_reference.insert(a);
	grade[0] = 368; grade[1] = 356; grade[2] = 354;
	rank[0] = 28148; rank[1] = 30126; rank[2] = 22815;
	a.set_message("中国药科大学", "http://www.cpu.edu.cn/", "南京"
		, degree("A", "B"), 550, rank, major_code, grade, 86, true, false, true);
	colleges_reference.insert(a);
	grade[0] = 388; grade[1] = 379; grade[2] = 375;
	rank[0] = 6927; rank[1] = 6385; rank[2] = 5830;
	a.set_message("南京航空航天大学", "http://www.nuaa.edu.cn/", "南京"
		, degree("p_A", "B"), 600, rank, major_code, grade, 42, true, false, true);
	colleges_reference.insert(a);
	grade[0] = 359; grade[1] = 340; grade[2] = 345;
	rank[0] = 44011; rank[1] = 58853; rank[2] = 35017;
	a.set_message("南京工业大学", "http://www.njtech.edu.cn/", "南京"
		, degree("B", "B"), 2482, rank, major_code, grade, 94, false, false, false);
	colleges_reference.insert(a);
	grade[0] = 358; grade[1] = 348; grade[2] = 338;
	rank[0] = 46035; rank[1] = 43537; rank[2] = 46350;
	a.set_message("南京林业大学", "https://www.njfu.edu.cn/", "南京"
		, degree("B", "B"), 897, rank, major_code, grade, 125, false, false, true);
	colleges_reference.insert(a);
	grade[0] = 369; grade[1] = 359; grade[2] = 353;
	rank[0] = 26626; rank[1] = 25683; rank[2] = 24009;
	a.set_message("南京邮电大学", "http://www.njupt.edu.cn/", "南京"
		, degree("B", "B"), 1898, rank, major_code, grade, 132, false, false, true);
	colleges_reference.insert(a);
	grade[0] = 359; grade[1] = 350; grade[2] = 342;
	rank[0] = 44011; rank[1] = 39968; rank[2] = 39641;
	a.set_message("南京信息工程大学", "https://www.nuist.edu.cn/", "南京"
		, degree("B", "B"), 2568, rank, major_code, grade, 165, false, false, true);
	colleges_reference.insert(a);












};
void data::read_major() {};