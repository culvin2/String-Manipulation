#include <bits/stdc++.h>
using namespace std;

class kata{
	private :
		string huruf;
	public:
		void setkata(string word){
			this->huruf = word;
		}
		string getkata() {
			return huruf;
		}
		void append(string word){
			this->huruf += word;
			cout << "Your String after Append is "<<huruf<<endl;
		}
		
		void del(int a, int b){
			huruf.erase(a,b);
			cout << "Your String after Erase is "<<huruf<<endl;
			cin.get();
		}
		
		void ganti(string word, int a, int b){
			huruf.replace(a,b,word);
			cout << "Your String after Replace is "<<huruf<<endl;
			cin.get();
		}
		void subs(int a, int b){
			cout << "Your String after substring is "<<huruf.substr(a,b);
			cin.get();
		}
		
		int words(){
			int x;
			int i;
			for (i=0;i<=huruf.size();i++){
				if (isspace(huruf[i])) x++;
			}

			return x+1;
		}
		void status(){
			cout << "Your String		 : " << huruf<<endl;
			cout << "=============================="<<endl;
			cout << "String size		 : "<<huruf.size()<<endl;
			cout << "String Capacity 	 : "<<huruf.size()<<endl;
			cout << "String Word 		 : " << this->words() <<endl;
			cin.get();
		}
};

void menu(){
	cout << "======================================================"<<endl;
	cout <<"1.	Manipulate your string" <<endl;
	cout <<"2.	View your string status" <<endl;
	cout <<"3.	Exit" <<endl;
	cout << "Your Choice ? " <<endl;
	
}

void manipulate(){
	cout <<"1.	Append your String" <<endl;
	cout <<"2.	Erase your String" <<endl;
	cout <<"3.	Replace your String" <<endl;
	cout <<"4.	Substring your String" <<endl;
	cout <<"5.	Back to Main Menu" <<endl;
	cout << "Choose :  " <<endl;	
}


int main(){
	int pilihan, p,a,b;
	string g,n;
	kata z;
	cout << "Your String (^_^)	: ";
	getline(cin, g);
	z.setkata(g);
	while (pilihan != 3 and !cin.fail()){
		system("cls");
		menu();
		cin >> pilihan;
		switch (pilihan){
			case 1:
				while (p != 5 and !cin.fail()){
					system("cls");
					manipulate();
					cin >> p;
					switch (p){
						case 1:
							system("cls");
							cin.get();
							cout << "Input String want you append : ";
							getline(cin, n);
							z.append(n);
							cout << "Press Enter .........";
							cin.get();
							break;
						case 3:
							system("cls");
							cin.get();
							cout << "Input string to replace : ";
							getline(cin, n);
							cout << "Input start index [0.."<<z.getkata().size()<<"] : ";
							cin >> a;
							cout << "Input count to replace [1.."<<z.getkata().size()+1<<"] : ";
							cin >>b;
							z.ganti(n,a,b);
							cout << "Press Enter .........";
							cin.get();
							break;
						case 2:
							system("cls");
							cout << "Input start index [0.."<<z.getkata().size()<<"] : ";
							cin >> a;
							cout << "Input count to Delete [1.."<<z.getkata().size()+1<<"] : ";
							cin >>b;
							z.del(a,b);
							cout << "Press Enter .........";
							cin.get();
							break;
						case 4:
							system("cls");
							cout << "Input start index [0.."<<z.getkata().size()<<"] : ";
							cin >> a;
							cout << "Input count to substring [1.."<<z.getkata().size()+1-a<<"] : ";
							cin >>b;
							z.subs(a,b);
							cout << "Press Enter .........";
							cin.get();
							break;
							
					}
				}
				p = 0;	
				break;
			case 2:
				z.status();
				cout << "Press Enter .........";
				cin.get();
				break;
		}
	}
	cout << "^_^";
	return 0;
}

