#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <unistd.h>

using namespace std;

string FILENAME = "ssbb.txt"; // Ҫ���ҵ��ļ���
string wangshencin = "";
bool wstrip; 
bool wangshens_or_h = false;
string wsname = "";
struct wangshen
{
    wangshen() {
        cout << "һ��ո�µ�û�������������ˣ�" << endl;
        cout << "�����������һ�����ְɣ�" << endl; 
        wsnamecin();
        wstrip = true;
        cout << "��������      ------1" << endl;
        cout << "ɱ������      ------2" << endl;
        cout << "��������֮��  ------o" << endl;
        cout << "�����๦�ܻ��ڿ�����~��" << endl; 
    }
	void wsnamecin () {
		char wsnamey_n;
		do {
			cin >> wsname;
			cout << "������������" << wsname << "���Ƿ��������루y/n��"<< endl;
			cin >> wsnamey_n;
		} while(wsnamey_n == 'y' || wsnamey_n == 'Y');
	}
	
    ~wangshen() {
    	wstrip = false;
        cout  << wsname << "���ˣ�" << endl << "������~~~" << endl; 
    }
};

struct wangshentrip
{
	char wsty_n;
	wangshentrip() {
		cout << "������ʼ����������......" << endl;
	}
	~ wangshentrip() {
		cout << "���������н�����......" << endl;
	}
	void wangshentripstart() {
		do{
			char wstif;
			cout << "-------------------------------------------------" << endl;
			wsp("��������������˫�ۣ�����Ϊ��new wangshen");
			wsp("��ʱ����0.1���");
			wsp("���ȹ���ƽ����8��");
			wsp("����������8������");
			wsp("������һ�Ҹ������������8������"); 
			wsp("���е�һ�ɲ����ᴩ���������壬�����ƺ��ھ�ʾ��ʲô");
			wsp("���������������");
			wsp("���Ӹ���������Ƶĳ��󵰸ⱻ����������");
			wsp("���İְ������ȼ�����������");
			wsp("�飡");
			wsp("���ĵ��ⱬը��");
			wsp("����������ը����");
			wsp("���������İְ����軯����Ƭ.....");
			wsp("��Ƭ���ɴ���......");
			wsp("���뻯���ַ�......");
			wsp("�ַ���Ҳ�������İְ����裬���������ڻ�");
			wsp("�����е���ǰһƬ�ڰ�");;
			wsp("��������һ�Ҹ���ҽԺ"); 
			wsmd_gfh("�ϣ������ˣ�");
			wsmd_gfh("���Ѿ�����ʼ����new wangshen�ˣ�");
			wsti_coutwsn();
			wss("�Ҳ��Ǳ���ʼ����new wangshen����?");
			wsmd_gfh("��ʵ������ʧ���ˣ���");
			
			wsty_ncin();
		} while (wsty_n == 'y' || wsty_n == 'Y');
	}
	/*����֮���¼���ʼ*/ 
	void wsti_coutwsn () {
		cout << "�����Ƕ���Ϊʲô�ҵ�������" << wsname << "��" << endl;
	}
	/*����֮���¼�����/ 
	
	/*����Ի���ʼ*/ 
	void wsty_ncin() {
		cout << "�Ƿ����¿�������֮��" << endl;
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
		cout << "����������ҽ����" << cin << endl;
		sleep(1);
	}
	void wss (string cin) {
		cout << "������" << cin << endl;
		sleep(1);
	}
	/*����Ի�����*/  
};

void printWang58() {
    cout << "   ������������  555555   888888" << endl;
    cout << "        ��      5        8      8" << endl;
    cout << "      ������     555555   888888" << endl;
    cout << "        ��             5 8      8" << endl;
    cout << "  �������������� 555555   888888" << endl;
}

void printWang18() {
    cout << "   ������������     1    888888" << endl;
    cout << "        ��          1   8      8" << endl;
    cout << "      ������        1    888888" << endl;
    cout << "        ��          1   8      8" << endl;
    cout << "  ��������������    1    888888" << endl;
}

bool findFileInCurrentDirectory(const string& filename, string& fullPath) {
    char currentDir[MAX_PATH];
    if (GetCurrentDirectoryA(MAX_PATH, currentDir) == 0) {
        cerr << "�޷���ȡ��ǰĿ¼" << endl;
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
            cerr << "�޷����ļ�" << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            cout << line << '\n';
            Sleep(10000 / 24);
        }
    } else if(sbif == 1) {
        cout << "�ļ�δ�ҵ�,������ɵ��" << endl;
    }
    else if(sbif != 1 && sbif != 3) {
        cout << "�ļ�δ�ҵ�" << endl;
    }
}

void handleWangInput(const string& wangxx) {
    int shu;
    cout << "������������" << endl;
    cin >> shu;

    if (shu <= 0) {
        cout << "�������������" << endl;
        return;
    }

    if (wangxx == "wang58" || wangxx == "��58") {
        for (int i = 0; i < shu; ++i) {
            printWang58();
            cout << endl;
        }
    } else if (wangxx == "wang18" || wangxx == "��18") {
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
            cout << "�����Ѿ����ڣ��㲻���ٴ���һ��������" << endl;
            return;
        }
        O1 = new wangshen();
        wangshens_or_h = true;
    } else if (action == 1) {
        if (O1 == nullptr) {
            cout << "�����Ѿ����ˣ�����û�д���������㲻����ɱ������" << endl;
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
	cout << "��������      ---------1" << endl;
  	cout << "��18/��58������ ---------2" << endl; 
   	cout << "����            ---------3" << endl; 
   	cout << "������־        ---------4" << endl;
   	cout << "�˳�            ---------0" << endl;
   	cin >> wangshen_or_wangxx;
    while (wangshen_or_wangxx != "1" && wangshen_or_wangxx != "2" && wangshen_or_wangxx != "3" && wangshen_or_wangxx != "4" && wangshen_or_wangxx != "0") {
        cout << "��Ҫ��ʲô��������������������������������������������������������������������" << endl;
        cin >> wangshen_or_wangxx;
    }
    
    if (wangshen_or_wangxx == "3"){
    	do{
    		cout << "�ڲ����а�v0.3.1" << endl;
    		cout << "���°棺https://github.com/kvskas/djygame" << endl;
    		cout << "�����汾��https://github.com/kvskas/djygame/tags" << endl;
   			cout << "���°棨���ã���https://wwo.lanzout.com/b00rn8hagd ����:apfe" << endl;
			cout << "������Ա ��880·��쳼ñ������������˴��" << endl; 
   			cout << "��������      ---------1" << endl;
  			cout << "��18/��58������ ---------2" << endl; 
   			cout << "����            ---------3" << endl; 
   			cout << "������־        ---------4" << endl;
   			cout << "�˳�            ---------0" << endl;
    		cin >> wangshen_or_wangxx;
		} while(wangshen_or_wangxx == "3");	
	}
	if (wangshen_or_wangxx == "4") {
		do{
			FILENAME = "rizhi.txt";
			handleFileContent(0);
			FILENAME = "ssbb.txt";
   			cout << "��������      ---------1" << endl;
  			cout << "��18/��58������ ---------2" << endl; 
   			cout << "����            ---------3" << endl; 
   			cout << "������־        ---------4" << endl;
   			cout << "�˳�            ---------0" << endl;
    		cin >> wangshen_or_wangxx;
		} while(wangshen_or_wangxx == "4");
	}
    while (wangshen_or_wangxx == "2") {
        string wangxx;
        cout << "�����������0�˳�,��rt�������˵�����" << endl;
        cin >> wangxx;
        if (wangxx == "ɵ��" || wangxx == "sb") {
        	string FILENAME = "ssbb.txt"; 
            handleFileContent(1);
        } else if (wangxx == "wang58" || wangxx == "��58" || wangxx == "wang18" || wangxx == "��18") {
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
            cout << "��Ч�����룬������ wang18��wang58" << endl;
        }
    }

    if (wangshen_or_wangxx == "1") {
        cout << "��������      ------1" << endl;
        cout << "ɱ������      ------2" << endl;
        cout << "��������֮��  ------o" << endl;
        cout << "�������˵�    ------rt" << endl;
        cout << "�˳�          ------0" << endl;
        cout << "�����๦�ܻ��ڿ�����~��" << endl;
        while (true) {
            cin >> wangshencin;
            while (wangshencin != "1" && wangshencin != "2" && wangshencin != "0" && wangshencin != "rt"&& wangshencin != "o") {
            	cin.clear();
                cout << "��Ҫ��ʲô��������������������������������������������������������������������" << endl;
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
					cout << "��û�д���������" << endl;
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
