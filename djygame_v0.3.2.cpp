#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <unistd.h>

using namespace std;

string FILENAME = "ssbb.txt"; // 要查找的文件名
string wangshencin = "";
bool wstrip; 
bool wangshens_or_h = false;
string wsname = "";
struct wangshen
{
    wangshen() {
        cout << "一个崭新的没肛门王紳出生了！" << endl;
        cout << "给这个王紳起一个名字吧：" << endl; 
        wsnamecin();
        wstrip = true;
        cout << "创造王紳      ------1" << endl;
        cout << "杀死王紳      ------2" << endl;
        cout << "开启王紳之旅  ------o" << endl;
        cout << "（更多功能还在开发中~）" << endl; 
    }
	void wsnamecin () {
		char wsnamey_n;
		do {
			cin >> wsname;
			cout << "王紳的名字是" << wsname << "，是否重新输入（y/n）"<< endl;
			cin >> wsnamey_n;
		} while(wsnamey_n == 'y' || wsnamey_n == 'Y');
	}
	
    ~wangshen() {
    	wstrip = false;
        cout  << wsname << "似了！" << endl << "呜呜呜~~~" << endl; 
    }
};

struct wangshentrip
{
	char wsty_n;
	wangshentrip() {
		cout << "王紳开始了他的旅行......" << endl;
	}
	~ wangshentrip() {
		cout << "王紳的旅行结束了......" << endl;
	}
	void wangshentripstart() {
		do{
			char wstif;
			cout << "-------------------------------------------------" << endl;
			wsp("王紳睁开了他的双眼，他成为了new wangshen");
			wsp("这时他正0.1秒大");
			wsp("他度过了平静的8岁");
			wsp("现在是他的8岁生日");
			wsp("他正在一家格鱼餐厅过他的8岁生日"); 
			wsp("他感到一股不安贯穿了他的身体，上天似乎在警示着什么");
			wsp("但是王紳不予理会");
			wsp("他从格鱼餐厅定制的超大蛋糕被放上了桌子");
			wsp("他的爸爸妈妈点燃了上面的蜡烛");
			wsp("砰！");
			wsp("他的蛋糕爆炸了");
			wsp("他从桌子上炸飞了");
			wsp("他看见他的爸爸妈妈化成碎片.....");
			wsp("碎片化成代码......");
			wsp("代码化成字符......");
			wsp("字符，也就是他的爸爸妈妈，正在慢慢融化");
			wsp("王紳感到眼前一片黑暗");;
			wsp("王紳醒在一家格鱼医院"); 
			wsmd_gfh("呦，你醒了！");
			wsmd_gfh("你已经被初始化成new wangshen了！");
			wsti_coutwsn();
			wss("我不是被初始化成new wangshen了吗?");
			wsmd_gfh("其实就是你失忆了：）");
			
			wsty_ncin();
		} while (wsty_n == 'y' || wsty_n == 'Y');
	}
	/*王紳之旅事件开始*/ 
	void wsti_coutwsn () {
		cout << "我在那儿？为什么我的名字是" << wsname << "？" << endl;
	}
	/*王紳之旅事件结束/ 
	
	/*人物对话开始*/ 
	void wsty_ncin() {
		cout << "是否重新开启王紳之旅" << endl;
		cin >> wsty_n;
	}
	void wsp (string cin) {
		cout << "*" << cin << "*" << endl;
		sleep(1);
	}
	void wsi (string cin) {
		cout << "^" << cin << "^" << endl;
		sleep(1);
	}
	void wsmd_gfh (string cin) {
		cout << "王紳的主治医生：" << cin << endl;
		sleep(1);
	}
	void wss (string cin) {
		cout << "王紳：" << cin << endl;
		sleep(1);
	}
	/*人物对话结束*/  
};

void printWang58() {
    cout << "   王王王王王王  555555   888888" << endl;
    cout << "        王      5        8      8" << endl;
    cout << "      王王王     555555   888888" << endl;
    cout << "        王             5 8      8" << endl;
    cout << "  王王王王王王王 555555   888888" << endl;
}

void printWang18() {
    cout << "   王王王王王王     1    888888" << endl;
    cout << "        王          1   8      8" << endl;
    cout << "      王王王        1    888888" << endl;
    cout << "        王          1   8      8" << endl;
    cout << "  王王王王王王王    1    888888" << endl;
}

bool findFileInCurrentDirectory(const string& filename, string& fullPath) {
    char currentDir[MAX_PATH];
    if (GetCurrentDirectoryA(MAX_PATH, currentDir) == 0) {
        cerr << "无法获取当前目录" << endl;
        return false;
    }

    string searchPattern = string(currentDir) + "\\" + filename;
    WIN32_FIND_DATAA findData;
    HANDLE hFind = FindFirstFileA(searchPattern.c_str(), &findData);

    if (hFind == INVALID_HANDLE_VALUE) {
        return false;
    }

    do {
        if (string(findData.cFileName) == filename) {
            fullPath = string(currentDir) + "\\" + findData.cFileName;
            FindClose(hFind);
            return true;
        }
    } while (FindNextFileA(hFind, &findData) != 0);

    FindClose(hFind);
    return false;
}

void handleFileContent(int sbif) {
    string fullPath;
    if (findFileInCurrentDirectory(FILENAME, fullPath)) {
        ifstream file(fullPath);
        if (!file.is_open()) {
            cerr << "无法打开文件" << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            cout << line << '\n';
            Sleep(10000 / 24);
        }
    } else if(sbif == 1) {
        cout << "文件未找到,但你是傻逼" << endl;
    }
    else if(sbif != 1 && sbif != 3) {
        cout << "文件未找到" << endl;
    }
}

void handleWangInput(const string& wangxx) {
    int shu;
    cout << "请输入数量：" << endl;
    cin >> shu;

    if (shu <= 0) {
        cout << "数量必须大于零" << endl;
        return;
    }

    if (wangxx == "wang58" || wangxx == "王58") {
        for (int i = 0; i < shu; ++i) {
            printWang58();
            cout << endl;
        }
    } else if (wangxx == "wang18" || wangxx == "王18") {
        for (int i = 0; i < shu; ++i) {
            printWang18();
            cout << endl;
        }
    }
    cout << "----------------------------------------" << endl;
}
static wangshen* O1 = nullptr;
void wso(int action) {
    if (action == 0) {
        if (O1 != nullptr) {
            cout << "王紳已经存在，你不能再创造一个王紳！" << endl;
            return;
        }
        O1 = new wangshen();
        wangshens_or_h = true;
    } else if (action == 1) {
        if (O1 == nullptr) {
            cout << "王紳已经死了（或者没有创造过），你不能再杀死他了" << endl;
            return;
        }
        delete O1;
        O1 = nullptr;
        wangshens_or_h = false;
    }
    else if (action == 2) {
    	string FILENAME = "ssbb.txt"; 
        handleFileContent(1);
	}
	else if (action == 3) {
    	FILENAME = "djygame_ws_new_ws_trip.txt"; 
        handleFileContent(0);
        static wangshentrip * wst = new wangshentrip();
        wst->wangshentripstart();
        delete wst;
        
        wst = nullptr;
	}
}

int main() {
	string wangshen_or_wangxx = "";
	do{
	cout << "王绅创造器      ---------1" << endl;
  	cout << "王18/王58生成器 ---------2" << endl; 
   	cout << "关于            ---------3" << endl; 
   	cout << "更新日志        ---------4" << endl;
   	cout << "退出            ---------0" << endl;
   	cin >> wangshen_or_wangxx;
    while (wangshen_or_wangxx != "1" && wangshen_or_wangxx != "2" && wangshen_or_wangxx != "3" && wangshen_or_wangxx != "4" && wangshen_or_wangxx != "0") {
        cout << "你要干什么？！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
        cin >> wangshen_or_wangxx;
    }
    
    if (wangshen_or_wangxx == "3"){
    	do{
    		cout << "内部发行版v0.3.1" << endl;
    		cout << "最新版：https://github.com/kvskas/djygame" << endl;
    		cout << "过往版本：https://github.com/kvskas/djygame/tags" << endl;
   			cout << "最新版（备用）：https://wwo.lanzout.com/b00rn8hagd 密码:apfe" << endl;
			cout << "开发人员 ：880路，斐济北（部）数字人大队" << endl; 
   			cout << "王绅创造器      ---------1" << endl;
  			cout << "王18/王58生成器 ---------2" << endl; 
   			cout << "关于            ---------3" << endl; 
   			cout << "更新日志        ---------4" << endl;
   			cout << "退出            ---------0" << endl;
    		cin >> wangshen_or_wangxx;
		} while(wangshen_or_wangxx == "3");	
	}
	if (wangshen_or_wangxx == "4") {
		do{
			FILENAME = "rizhi.txt";
			handleFileContent(0);
			FILENAME = "ssbb.txt";
   			cout << "王绅创造器      ---------1" << endl;
  			cout << "王18/王58生成器 ---------2" << endl; 
   			cout << "关于            ---------3" << endl; 
   			cout << "更新日志        ---------4" << endl;
   			cout << "退出            ---------0" << endl;
    		cin >> wangshen_or_wangxx;
		} while(wangshen_or_wangxx == "4");
	}
    while (wangshen_or_wangxx == "2") {
        string wangxx;
        cout << "请输入命令（按0退出,按rt返回主菜单）：" << endl;
        cin >> wangxx;
        if (wangxx == "傻逼" || wangxx == "sb") {
        	string FILENAME = "ssbb.txt"; 
            handleFileContent(1);
        } else if (wangxx == "wang58" || wangxx == "王58" || wangxx == "wang18" || wangxx == "王18") {
            handleWangInput(wangxx);
        }
		else if (wangxx == "0") {
			return 0;
		}
		else if (wangxx == "rt") {
			wangshen_or_wangxx = "rt";
        	break;
		}
		else {
            cout << "无效的输入，请输入 wang18或wang58" << endl;
        }
    }

    if (wangshen_or_wangxx == "1") {
        cout << "创造王紳      ------1" << endl;
        cout << "杀死王紳      ------2" << endl;
        cout << "开启王紳之旅  ------o" << endl;
        cout << "返回主菜单    ------rt" << endl;
        cout << "退出          ------0" << endl;
        cout << "（更多功能还在开发中~）" << endl;
        while (true) {
            cin >> wangshencin;
            while (wangshencin != "1" && wangshencin != "2" && wangshencin != "0" && wangshencin != "rt"&& wangshencin != "o") {
            	cin.clear();
                cout << "你要干什么？！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
                cin >> wangshencin;
            }
            if (wangshencin == "1") {
                wso(0);
            } else if (wangshencin == "2") {
                wso(1);
            }
            else if (wangshencin == "0") {
            	return 0;
			}
			else if (wangshencin == "o" || wangshencin == "O") {
				if (wstrip) {wso(3);}
				else if (!wstrip) {
					cout << "还没有创造王紳呢" << endl;
				}
			}
			else if (wangshencin == "rt") {
				wangshen_or_wangxx = "rt";
            	break;
			}
        }
    }
    else if (wangshen_or_wangxx == "0") return 0;
	} while(wangshen_or_wangxx == "3" || wangshen_or_wangxx == "4" || wangshen_or_wangxx == "rt"|| wangshen_or_wangxx == "1"|| wangshen_or_wangxx == "2");
    return 0;
}
