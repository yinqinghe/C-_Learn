#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include <deque>
#include <functional>
#include<numeric>
using namespace std;

class Speaker  
{
public:
	string name;
	int score[3];
public:
	Speaker()
	{
		;
	}
	Speaker(string name)
	{
		this->name = name;
		memset(score, 0, sizeof(score));
	}
};
void speech_contest(int index, vector<int>& v, map<int, Speaker>& m, vector<int>& v1);
void printSpeechResault(int index, vector<int>& v, map<int, Speaker>& m, vector<int>& v1);
void createSpeaker(vector<int> &v, map<int, Speaker> &m)
{
	string tmp = "ABCDEFGHIJKKLMNOPQRSTUVWX";
	for (int i = 0; i < 24; i++)
	{
		//存放选手编号
		v.push_back(100 + i);

		//存放<编号，选手>
		string name = (string)"选手" + tmp[i];
		m.insert(make_pair(i + 100, Speaker(name)));
	}
}
int main(int argc, char* argv[])
{
	//创建24名选手  将选手<编号，选手>放入map容器中  选手编号放vector<>容器中
	vector<int> v;//选手编号
	map<int, Speaker> m;//<编号，选手>
	//创建选手24名
	createSpeaker(v, m);
	for (map<int, Speaker>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << (*it).first << "  " << (*it).second.name << endl;
	}
	//设置种子
	srand(time(NULL));
	//第一轮：参加的选手抽签
	random_shuffle(v.begin(), v.end());
	//进行第一轮比赛
	//1表示当前轮数  v选手编号   m选手信息    v1晋级容器
	vector<int> v1;
	speech_contest(1, v, m, v1);
	//打印第一轮比赛结果；所有参与比赛的成绩  晋级的名单
	printSpeechResault(1, v, m, v1);

	//第二轮：参加的选手抽签
	random_shuffle(v1.begin(), v1.end());
	//进行第二轮比赛
	//1表示当前轮数  v选手编号   m选手信息    v1晋级容器
	vector<int> v2;
	speech_contest(2, v1, m, v2);
	//打印第二轮比赛结果；所有参与比赛的成绩  晋级的名单
	printSpeechResault(2, v1, m, v2);

	//第三轮：参加的选手抽签
	random_shuffle(v2.begin(), v2.end());
	//进行第三轮比赛
	//1表示当前轮数  v选手编号   m选手信息    v1晋级容器
	vector<int> v3;
	speech_contest(3, v2, m, v3);
	//打印第三轮比赛结果；所有参与比赛的成绩  晋级的名单
	printSpeechResault(3, v2, m, v3);
	return 0;
}
void printSpeechResault(int index, vector<int>& v, map<int, Speaker>& m, vector<int>& v1)
{
	cout << "第" << index << "论比赛成绩如下" << endl;
	int count = 0;
	int n = 0;
	vector<int>::iterator mit = v1.begin();
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		if (count % 6 == 0)
		{
			cout << "第" << count / 6 + 1 << "组的成绩如下：" << endl;
		}
		count++;

		cout << "姓名：" << m[*it].name << ", 得分：" << m[*it].score[index - 1] << endl;

		//每个组的成绩打印完  立马打印晋级名单
		if (count % 6 == 0)
		{
			n++;
			cout << "第" << n << "组的晋级名单如下:" << endl;
			for (int i = 0; i < 3; i++, mit++)
			{
				cout << "姓名：" << m[*mit].name << ", 得分：" << m[*mit].score[index - 1] << endl;
			}
		}
	}
}
void speech_contest(int index, vector<int>& v, map<int, Speaker>& m, vector<int>& v1)
{
	int count = 0;
	//设计一个<分数，编号>的map容器
	multimap<int, int, greater<int>> m2;

	//选手逐一登台比赛
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		count++;
		//*it  代表一名选手
		//10个评委打分
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//
			d.push_back(score);
		}
		//对d容器排序
		sort(d.begin(), d.end());
		//去掉最高分  以及最低分
		d.pop_back();
		d.pop_front();
		//求取总分数
		int sum = accumulate(d.begin(), d.end(), 0);
		//求平均分  并赋值给选手的score[index-1]
		//map<int,Speaker>
		int avg = sum / d.size();

		m[*it].score[index - 1] = avg;

		m2.insert(make_pair(avg, *it));

		if (count % 6 == 0)//刚好已经有6人  把上面的6人的成绩取前3
		{
			//90  80  70  60  50  40
			//遍历m2容器    取出前3名的   编号
			int i = 0;
			for (multimap<int, int, greater<int>>::iterator mit = m2.begin(); mit != m2.end() && i < 3; mit++,i++)
			{
				//将晋级的编号   放入晋级的容器中
				v1.push_back((*mit).second);

			}

			//将上一组的m2清空
			m2.clear();//清空
		}
	}
}
