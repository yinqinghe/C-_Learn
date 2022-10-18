//#include<iostream>
//
//using namespace std;
//
//class TV               //封装电视机类
//{
//	friend class Remote;
//	//默认为私有
//	enum{On,Off};//电视状态
//	enum{minVol,maxVol=100};//音量从0到100；
//	enum{minChannel=1,maxChannel=255};//频道从1到255
//private:
//	int mState;
//	int mVolume;
//	int mChannel;
//public:
//	TV()
//	{
//		this->mState = Off;//默认关机
//		this->mVolume = minVol;
//		this->mChannel = minChannel;
//	}
//	void onOrOff()//开关器
//	{
//		this->mState = (this->mState == On ? Off : On);
//
//	}
//	//加大音量
//	void volumeUp(void)
//	{
//		if (this->mVolume >= maxVol)
//			return;
//		this->mVolume++;
//	}
//	//减小音量
//	void volumeDown(void)
//	{
//		if (this->mVolume <= minVol)
//			return;
//		this->mVolume--;
//	}
//
//	void channelUp(void)
//	{
//		if (this->mChannel >= maxChannel)
//			return;
//		this->mChannel++;
//	}
//	void channelDown(void)
//	{
//		if (this->mChannel <= minChannel)
//			return;
//		this->mChannel--;
//	}
//	void showTVState(void)
//	{
//		cout << "电视机的状态为：" << (this->mState == On ? "开机" : "关机") << endl;
//		cout << "电视机的音量:" << this->mVolume << endl;
//		cout << "电视机的频道:" << this->mChannel << endl;
//	}
//};
////遥控器类
//class Remote
//{
//private:
//	TV* pTv;
//public:
//	Remote(TV* pTv)
//	{
//		this->pTv = pTv;
//	}
//	//音量的加减
//	void volumeUp(void)
//	{
//		//调节电视的音量
//		this->pTv->volumeUp();
//	}
//	void volumeDown(void)
//	{
//		this->pTv->volumeDown();
//	}
//	//频道的加减
//	void channelUp(void)
//	{
//		this->pTv->channelUp();
//	}
//	void channelDown(void)
//	{
//		this->pTv->channelDown();
//	}
//	//电视的开关
//	void onOrOff(void)
//	{
//		this->pTv->onOrOff();
//	}
//
//	//遥控器设置频道设置
//	void setChannel(int num)
//	{
//		//判断 频道 是否有效
//		if (num >= TV::minChannel && num <= TV::maxChannel)
//		{
//			this->pTv->mChannel = num;
//		}
//	}
//	void showTVState(void)
//	{
//		this->pTv->showTVState();
//	}
//};
//
//void test02()
//{
//	TV tv;
//	Remote remote(&tv);
//
//	remote.onOrOff();
//	remote.volumeUp();
//	remote.volumeUp();
//	remote.volumeUp();
//	remote.volumeUp();
//
//	remote.channelUp();
//	remote.channelUp();
//	remote.channelUp();
//
//	remote.showTVState();
//	remote.setChannel(75);
//	remote.showTVState();
//}
//void test01()
//{
//	TV tv;
//	tv.onOrOff();//开机
//
//	tv.volumeDown();//调四次音量
//	tv.volumeUp();
//	tv.volumeUp();
//	tv.volumeDown();
//
//	tv.channelUp();//调三次频道
//	tv.channelUp();
//	tv.channelUp();
//
//	tv.showTVState();
//
//}
//
//int main(int argv, char* argc[])
//{
//	test02();
//	return 0;
//}