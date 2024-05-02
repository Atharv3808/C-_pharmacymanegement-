#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
struct pharmacy{
	char id;
	string name;
	int quantity;
	int price;
};
    pharmacy phar;
    vector<pharmacy> medics;
   
    addval(){
    	int choice;
    	do{
    		cout<<"Id: ";cin>>phar.id;
    		cout<<"Name: ";cin>>phar.name;
    		cout<<"quantity: ";cin>>phar.quantity;
    		cout<<"price: ";cin>>phar.price;
    		medics.push_back(phar);
    		cout<<"save successfuly"<<endl;
    		cout<<"enter '0' for exit or '1' for continue: ";cin>>choice;
		}
		while(choice!=0 && choice ==1);
	}
	
	search(){
		string n;
		cout<<"Enter name for search: ";cin>>n;
		for(int i=0;i<medics.size();i++){
			if(n==medics[i].name){
				cout<<i+1<<". Id:"<<medics[i].id<<endl;
				cout<<i+1<<". name:"<<medics[i].name<<endl;
				cout<<i+1<<". quantity:"<<medics[i].quantity<<endl;
				cout<<i+1<<". price:"<<medics[i].price<<endl<<endl;
			}
		}
	}
	
	del (){
		string n;
		cout<<"Enter name for search: ";cin>>n;
		for(int i=0;i<medics.size();i++){
			if(n==medics[i].name){
				medics.erase(medics.begin()+i);
				cout<<"deleted "<<medics[i].name<<endl<<endl;
			}
	}
}
	show(){
		for(int i=0;i<medics.size(); i++){
		cout<<i+1<<". Id:"<<medics[i].id<<endl;
				cout<<" name:"<<medics[i].name<<endl;
				cout<<" quantity:"<<medics[i].quantity<<endl;
				cout<<" price:"<<medics[i].price<<endl<<endl;	
		}
	}
	
		save(const vector<pharmacy>&medics, const string& medical){
		ofstream out("D:/medical.txt");
		if(!out){
			cerr<<"file not found: "<<medical<<endl;
		}
		for(int i=0;i<medics.size(); i++){
			out<<i+1<<"Id: "<<medics[i].id<<endl<<" name:"<<medics[i].name<<endl
			<<"quantity: "<<medics[i].quantity<<endl<<"price: "<<medics[i].price<<endl;
		}
		out.close();
		cout<<"medicines saved to file "<<medical<<endl<<endl;
		}
	
	
    int main(){
    	while(true){
    		int value;
    		cout<<"\t\t===================\n\n";
		    cout<<"\t\t-------------------\n";
		        cout<<"1.for add medicines: "<<endl;
    	     	cout<<"2.for search medicines: "<<endl;
    		    cout<<"3.for delete medicines: "<<endl;
    		    cout<<"4.for show all medicines: "<<endl;
    		    cout<<"5.for save medicines to file: "<<endl;
    	    	cout<<"6.for exit from program: "<<endl;
    	    	cout<<"\t\t---------------------\n";
    		cout<<"type here:";cin>>value;
    		switch(value){ system("cls");
    			case 1:{
					addval();
					break;
				}
				case 2:{        system("cls");
					search();
					break;
				}
				case 3:{        system("cls");
					del();
					break;
				}
				case 4:{        system("cls");
					show();
					break;
				}
				case 5:{
					save(medics, "D:/medical.txt" );
					break;
				}
				case 6:{
					exit(0);
					
				
			}
			default:
				{system("cls"); cout<<"invalid input "<<endl<<endl;}
		}
	}
	
}
