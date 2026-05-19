#include<bits/stdc++.h>
#include<catdriver.h>
using namespace std;
/**
本程序为猫咪底层代码，适用于Cat_ARM32架构的猫咪大脑
默认情况下本程序的权限次于Linux内核，运行前请保证安装了catdriver，以sudo权限运行
不建议在单核单线程的脑子里运行，否则可能会导致不可恢复的错误
默认cat.reboot(lickingfur)能解决一切问题，若失败则直接return -1，然后崩溃退出到shell
Copyright（c）earth Online 2026
**/
int main()
{
    cout<<"hello this f**k world, you cat is running!!!\n;
    if(cat.hardwareinfo(color)=="#EA8428")//如果为橘猫，就连接橘域网
    {
        cout<<"try to connect cat wlan\n";
        try
        {
            int wlan=cat.wlan.connect(returncode);//尝试连接橘域网，如果成功，则无返回（默认为NULL），若失败，返回-1
            if(wlan==-1) throw wlan;//如果失败抛出异常
            else cout<<"connect to the wlan successfully!"//如果成功则继续执行
        }
        catch(int a)
        {
            cout<<"fail to connect to the wlan,code:"<<a<<"system will emergency reboot!!!\n"
            cat.reboot(lickingfur);//失败直接崩溃，并进行重启
        }
    }
    while(true)
    {
        p=cat.touch.pressure();
        l=cat.video.Illumination();
        if(cat.vedioin.watchnum()==1)
        {
            cat.eat();
            cout<<"eat things="<<cat.vedioin.things()<<endl;
        }
        else
        {
            cout<<"error,input num is>1,system will try to reboot\n";
            try
            {
                int sign=cat.reboot(returncode);//如果成功，则无返回（默认为NULL），若失败，返回-1
                if(sign==-1) throw sign;//失败则抛出异常
            }
            catch(int a)
            {
                cout<<"system reboot fail,code"<<a<<",system will emergency reboot!!!/n";//如果无法软重启，则抛出cat crash
                cat.crash(a);
            }
        }
        //如果发现大于10个的食物且连接了橘域网，则直接广播食物的坐标
        if(cat.vedioin.things()==food&&cat.vedioin.num()>10&&cat.wlan.status()=="connected")
        {
            cout<<"find food>10! Coordinates"<<cat.xcoordinates()<<","<<cat.ycoordinates()<<endl;
            cat.wlanboradcase(cat.xcoordinates(),cat.ycoordinates());//广播食物的坐标
        }
        //如果接收到橘域网广播的食物坐标，则直接tp到坐标处
        if(cat.wlangit()!=NULL)
        {
            int x=cat.wlangit(cat.xcoordinates());
            int y=cat.wlangit(cat.ycoordinates());
            cat.tp(x,y);//tp到坐标处
        }
        if(p<1) continue;//如果物理压力小于1，则继续执行
        else
        {
            //如果物理压力大于1，则哈气，赋值为压力与照度的乘积
            cat.anger(p*l/100);//以百分数为输出,并增加1点生气值
            cout<<"cat is angry,num="<<p*l/100<<endl;
        }
        if(cat.anger.num()>=100)
        {
            //如果生气值大于等于100，则击打，次数为生气值-100的2倍
            cat.hit((cat.anger.num()-100)*2);//本代码在奶牛猫上极易崩溃，请谨慎触发条件
        }
        if(cat.crashreport(errcode)!=NULL)
        {
            cout<<"cat is crash,code "<<cat.crashreport(errcode)<<",system will start emergency reboot!!!\n";
            cat.reboot(lickingfur);//如果触发无法恢复的崩溃，则触发舔毛重启（本代码适用于所有的猫咪，包括奶牛猫）
        }
    }
}
