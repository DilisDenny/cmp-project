//***************** HOTEL MANAGEMENT SYSTEM****************
//*****************HEADER FILES USED***********************
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
//********************CLASS FOR RESTAURANT*****************
class restaurant
  {
     private:
			char fname[20];
			char ftype[20];
            char fid[10];
			float fprice;
			float ftotprice;
     public:
			void write_fmenu();
			void appened_foodmenu();
			void food_del();
			void food_bill();
			void food_show();
  };
// FUCTIONS OF RESTAURANT CLASS
void restaurant::write_fmenu()
  {
   	cout<<"\n\t\t\t ENTER FOOD NAME:"<<endl<<"\t\t\t";
	cin.ignore();
	cin.getline(fname,20);
    cout<<"\n\t\t\t ENTER FOOD TYPE:"<<endl<<"\t\t\t";
	cin.getline(ftype,20);
	cout<<"\n\t\t\t ENTER FOOD ID:"<<endl<<"\t\t\t";
	cin>>fid;
	cout<<"\n\t\t\t ENTER FOOD PRICE:"<<endl<<"\t\t\t";
	cin>>fprice;
	cout<<"\n\t\t\t ......RECORD CREATED......\n";		
  } 
 void restaurant::appened_foodmenu()
  {
  	system("CLS");
	restaurant f;
	fstream f1;
	f1.open("Food Menu.txt",ios::app|ios::binary);
	cout<<"\t\t\t Enter FOOD ITEM NAME YOU WANT TO  ADD:"<<endl<<"\t\t\t";
	cin.ignore();
	cin.getline(fname,20);
	cout<<"\t\t\t ENTER FOOD TYPE:"<<endl<<"\t\t\t";
	cin.getline(ftype,20);
	cout<<"\t\t\t ENTER FOOD ID:"<<endl<<"\t\t\t";
	cin>>fid;
	cout<<"\t\t\t ENTER FOOD PRICE:"<<endl<<"\t\t\t";
	cin>>fprice;
	cout<<"\n\t\t\t ......RECORDE CREATED.......";
	f1.write((char*)&f,sizeof(f));
	f1.close();
  }
 void restaurant ::food_bill()
  {
     int qty;
	 system("CLS");
	 cout<<"\t\t\t ENTER FOOD NAME:"<<endl<<"\t\t\t";
	 cin.ignore();
	 cin.getline(fname,20);
	 cout<<"\t\t\t ENTER FOOD TYPE:"<<endl<<"\t\t\t";
	 cin.getline(ftype,20);
	 cout<<"\t\t\t ENTER FOOD ID:"<<endl<<"\t\t\t";
	 cin>>fid;
	 cout<<"\t\t\t ENTER QUANTITY:"<<endl<<"\t\t\t";
	 cin>>qty;
	 cout<<"\t\t\t ENTER FOOD PRICE:"<<endl<<"\t\t\t";
	 cin>>fprice;
     ftotprice=qty*fprice;
	 cout<<"\n\t\t\tTOTAL AMOUNT IN RESTAURANT:"<<ftotprice<<endl;
   }		
 void restaurant::food_del()
	{
		system("CLS");
		fstream f1;
		remove("Food Menu.txt");
		f1.open("Food Menu.txt",ios::binary|ios::in);
		f1.close();
		cout<<"\n\t\t\t ......RECORD DELETED......\n"<<endl;
	}
 void restaurant::food_show()
	{
		cout<<"\n\t\t\t FOOD ID:"<<'\t'<<fid;
		cout<<endl;
		cout<<"\n\t\t\t FOOD NAME:"<<'\t';
		puts(fname);
		cout<<endl;
		cout<<"\n\t\t\t FOOD TYPE:"<<'\t';
		puts(ftype);
		cout<<endl;
		cout<<"\n\t\t\t FOOD PRICE:"<<'\t'<<fprice<<'\n';
		cout<<endl;
		cout<<"\t\t\t**********************************\n";
    }
//*********************CLASS FOR BAR **********************
 class bar
   {
	   private:
				char  ba_iteam[20];
				char  ba_type[20];
				float ba_price;
				float ba_totprice;
				int   baid;
	   public:
				void write_bar();
				void appened1_bar();
				void bill_bar();
				void show_bar();
				void bar_del();
	};
//FUNCTIONS OF BAR CLASS
 void bar::write_bar()
  {
        cout<<"\t\t\t ENTER ITEAM NAME(BAR):"<<endl<<"\t\t\t";
		cin.ignore();
	    cin.getline(ba_iteam,20);
		cout<<"\t\t\t ENTER ITEAM TYPE(BAR):"<<endl<<"\t\t\t";
		cin.getline(ba_type,20);
		cout<<"\t\t\t ENTER ITEAM ID(BAR):"<<endl<<"\t\t\t";
		cin>>baid;
		cout<<"\t\t\t ENTER ITEAM PRICE(BAR):"<<endl<<"\t\t\t";
		cin>>ba_price;
		cout<<"\n\t\t\t ......RECORD CREATED......\n";		
   } 
 void bar:: appened1_bar()
   {
	 system("CLS");
	 bar b;
	 fstream f2;
	 f2.open("Bar Menu.txt",ios::app|ios::binary);
	 cout<<"\t\t\t ENTER BAR ITEAM NAME YOU WANT TO ADD:"<<endl<<"\t\t\t";
	 cin.ignore();
	 cin.getline(ba_iteam,20);
	 cout<<"\t\t\t ENTER BAR ITEAM TYPE: "<<endl<<"\t\t\t";
	 cin.getline(ba_type,20);
	 cout<<"\t\t\t ENTER BAR ITEAM ID: "<<endl<<"\t\t\t";
	 cin>>baid;
	 cout<<"\t\t\t ENTER BAR ITEAM PRICE:"<<endl<<"\t\t\t";
	 cin>>ba_price;
	 cout<<"......RECORD CREATED......"<<"\t\t\t";
	 f2.write((char*)&b,sizeof(b));
	 f2.close();
   }
 void bar::bill_bar()
   {
   	system("CLS");
	 float baqty;
	 cout<<"\t\t\t ENTER BAR ITEAM NAME:"<<"\t\t\t";
	 cin.ignore();
	 cin.getline(ba_iteam,20);
	 cout<<endl;
	 cout<<"\t\t\t ENTER BAR ITEAM TYPE:"<<"\t\t\t";
	 cin.getline(ba_type,20);
	 cout<<endl;
	 cout<<"\t\t\t ENTER BAR ITEAM QUANTITY:"<<"\t\t\t";
	 cin>>baqty;
	 cout<<endl;
	 cout<<"\t\t\t ENTER BAR ITEAM PRICE:"<<"\t\t\t";
	 cin>>ba_price;
	 ba_totprice=baqty*ba_price;
	 cout<<endl;				
	 cout<<"\t\t\t TOTAL AMOUNT IN BAR:"<<ba_totprice<<"\t\t\t"<<endl;
	}
 void bar::show_bar()
   {
	  cout<<"\n\t\t\t BAR ITEAM ID:"<<baid;
	  cout<<endl;
	  cout<<"\n\t\t\t BAR ITEAM NAME:";
	  puts(ba_iteam);
	  cout<<endl;
	  cout<<"\n\t\t\t BAR ITEAM TYPE:";
	  puts(ba_type);
	  cout<<endl;
	  cout<<"\n\t\t\t BAR ITEAM PRICE:"<<ba_price<<endl;	
	  cout<<endl;	
   	  cout<<"\t\t\t**********************************\n";
   }
 void bar::bar_del()
	{
		system("CLS");
		fstream f2;
		remove("Bar Menu.txt");
		f2.open("Bar Menu.txt",ios::binary|ios::in);
		f2.close();
		cout<<"\n\t\t\t ......RECORD DELETED......\n"<<endl;
	}
//*****************CLASS FOR CUSTOMERS******************
 class customer
	{
	    	private:
					char cust_name[20];
					char cust_address[20];
					char cust_phno[11];
					long cust_roomno;
					char cust_checkindate[10];
					char cust_checkoutdate[10];
		   	public:
					void write_customer();
					void appened3_customer();
					void modify_cutomer();
					void showdetail_cust();
					void cust_del();
					char*recustnam()
					{
						return cust_name;
					}
	};
// FUNCTIONS OF CUSTOMER CLASS
void customer::write_customer()
 {
	cout<<"\n\t\t\t ENTER CUSTOMER NAME:"<<endl<<"\t\t\t";
	cin.ignore();
	cin.getline(cust_name,20);
	cout<<"\n\t\t\t ENTER CUSTOMER ADDRESS: "<<endl<<"\t\t\t";
	cin.getline(cust_address,20);
	cout<<"\n\t\t\t ENTER CUSTOMER PHONE N0:"<<endl<<"\t\t\t";
	cin.getline(cust_phno,11);
	cout<<"\n\t\t\t ENTER CUSTOMER  CHECK_IN DATE:"<<endl<<"\t\t\t";
	cin.getline(cust_checkindate,10);
	cout<<"\n\t\t\t ENTER CUSTOMER CHECK_OUT DATE:"<<endl<<"\t\t\t";
	cin.getline(cust_checkoutdate,10);
	cout<<"\n\t\t\t......RECORDE CREATED......";
 }
 void customer::appened3_customer()
		{
   		    customer c;
			fstream f3;
			f3.open("Customer.txt",ios::app|ios::binary);
			cout<<"\n\t\t\t ENTER CUSTOMER NAME:"<<endl<<"\t\t\t";
			cin.ignore();
			cin.getline(cust_name,20);
			cout<<"\n\t\t\t ENTER CUSTOMER ADDRESS: "<<endl<<"\t\t\t";
			cin.getline(cust_address,20);
			cout<<"\n\t\t\t ENTER CUSTOMER PHONE N0: "<<endl<<"\t\t\t";
			cin.getline(cust_phno,11);
			cout<<"\n\t\t\t ENTER CUSTOMER  CHECK_IN DATE:"<<endl<<"\t\t\t";
			cin.getline(cust_checkindate,10);
			cout<<"\n\t\t\t ENTER CUSTOMER CHECK_OUT DATE:"<<endl<<"\t\t\t";
			cin.getline(cust_checkoutdate,10);
			f3.write((char*)&c,sizeof(c));
			f3.close();
			cout<<"\n\t\t\t......RECORDE CREATED......";
		}	
  void customer::modify_cutomer()
	{
        cout<<"\n\t\t\t CUSTOMER NAME(to modify):";
        cin.ignore();
        cin.getline(cust_name,20);
        cout<<"\n\t\t\t ENTER THE CUSTOMER ADDRESS(to modify): "<<endl<<"\t\t\t";
		cin.getline(cust_address,20);
		cout<<"\n\t\t\t ENTER THE CUSTOMER PHONE N0(to modify): "<<endl<<"\t\t\t";
		cin.getline(cust_phno,11);
		cout<<"\n\t\t\t ENTER THE CUSTOMER CHECK_IN_DATE(to modify):"<<endl<<"\t\t\t";
		cin.getline(cust_checkindate,10);
		cout<<"\n\t\t\t ENTER THE CUSTOMER CHECK_OUT_DATE(to modify):"<<endl<<"\t\t\t";
		cin.getline(cust_checkoutdate,10);
	}
  void customer::showdetail_cust()
		{
			cout<<"\n\t\t\t CUSTOMER NAME:"<<"\t\t";
			puts(cust_name);
			cout<<endl;
			cout<<"\t\t\t CUSTOMER ADDRESS:"<<"\t";
			puts(cust_address);
			cout<<endl;
			cout<<"\t\t\t CUSTOMER PHONE NO:"<<"\t";
			puts(cust_phno);
			cout<<endl;
			cout<<"\t\t\t CUSTOMER CHECK_IN DATE:";
			puts(cust_checkindate);
			cout<<endl;
			cout<<"\t\t\t CUSTOMER CHECK_OUT DATE:";
			puts(cust_checkoutdate);
			cout<<endl;
			cout<<"\t\t\t**********************************\n";
	}
void customer::cust_del()
	{
		system("CLS");
		fstream f3;
		remove("Customer.txt");
		f3.open("Customer.txt",ios::binary|ios::in);
		f3.close();
		cout<<"\n\t\t\t ......RECORD DELETED......\n"<<endl;
	}	
//****************************CLASS FOR ROOM TYPE*************************
 class roomtype
	{
		private:
				char  room_type[20];
				int   room_id;
				float roomtotprice;
				float room_price;
		public:
				void view_roomtype();
				void get_roomtype();
				void show_roomtype();
	};
// FUNCTIONS OF ROOM TYPE CLASS
void roomtype::view_roomtype()
	{
				cout<<"\n\t\t\t\tROOM TYPES  "
	    	        <<"\nTYPES"<<"\t"<<"\t"<<"CHARGE PER DAY\n"
	    	        <<"ROYAL SUITE "<<"\t"<<"Rs 20,000\n"
	                <<"SUPER DELUXE"<<"\t"<<"Rs 15,000\n"
					<<"DELUXE      "<<"\t"<<"Rs 10,000\n"
	    	        <<"DOUBLE BED  "<<"\t"<<"Rs  5,000\n"
	    	        <<"SINGLE BED  "<<"\t"<<"Rs  2,000\n";
	}
void roomtype::get_roomtype()
	{
		cout<<"\n\t\t\t ENTER THE ROOM TYPE:"<<'\t';
		cin.ignore();
		cin.getline(room_type,20);
		cout<<"\n\t\t\t ENTER THE ROOM ID"<<'\t';
		cin>>room_id;
		cout<<"\n\t\t\t ENTER THE PRICE:"<<'\t';
		cin>>room_price;
	}
 void roomtype::show_roomtype()
	{ 
		system("CLS");
		int num;
		cout<<"\n\t\t\t ENTER THE NO OF DAYS STAY"<<'\t';
		cin>>num;
		cout<<"\n\t\t\t ROOM TYPE:"<<'\t';
		puts(room_type);
		cout<<"\n\t\t\t ROOM ID:"<<'\t'<<room_id<<endl;
		cout<<"\n\t\t\t ROOM PRICE:"<<'\t'<<room_price<<endl;
		roomtotprice=num*room_price;
		cout<<"\n\t\t\t TOTAL ROOM PRICE:"<<'\t'<<roomtotprice;
	}
//********************** CLASS FOR ROOM******************************
  class room
	  {
		  private:
					float roomprice;
					char romtype[20];
					char roomid[5];
					char roomcustname[20];
					char roomcustaddress[20];
					char roomcustphone[11];
					char od[11];
					char ot[11];
		  public:
					void write_room();
					void checkin();
					void checkout();
					void room_bill();
					void room_del();
					void room_show();
					void show_checkoutdetails();
					void checkoutroom_del();
					char*retroomid()
					{
						return roomid;
					}
	  };
// FUNCTIONS OF ROOM CLASS
 void room::write_room()
  {
		roomtype rm;
		rm.view_roomtype();
		cout<<"\n\t\t\t ENTER THE ROOM TYPE:"<<'\t';
		cin.ignore();
		cin.getline(romtype,20);
		cout<<"\n\t\t\t ENTER THE ROOM ID:"<<'\t';
		cin.getline(roomid,5);
		cout<<"\n\t\t\t ENTER CUSTOMER NAME:";
		cin.getline(roomcustname,20);
		cout<<"\n\t\t\t ENTER CUSTOMER ADDRESS:";
		cin.getline(roomcustaddress,20);
		cout<<"\n\t\t\t ENTER CUSTOMER PHONE NO:";
		cin.getline(roomcustphone,11);
		cout<<"\n\t\t\t ENTER THE PRICE:"<<'\t';
		cin>>roomprice;
   }	
 void room::checkin()
	{
		char romnum[5];
		char ans;
		room r;
		cout<<"\n\t\t\t HAVE YOU BOOKED IN ADVANCE ?(Y/N)::";
		cin>>ans;
		if(ans=='n'||ans=='N')
			{
				cout<<"\n\t\t\t THEN YOU FIRST HAVE TO BOOK"
					<<"\n\t\t\t NOW YOU ARE ENTERING TO BOOKING REGION";
				r.write_room();
			}
		else
			cout<<"\n\t\t\t ......BOOKING INFROMATION........";
			cout<<"\n\t\t\t ENTER THE ROOM NUMBER   :: ";
			cin.ignore();
			cin.getline(romnum,5);
			if(strcmp(r.retroomid(),romnum))
				{
					system("CLS");
					cout<<"\n\t\t\t YOU ARE CHECKINED";
					cout<<"\n\t\t\t ...........THANK YOU........... ";
				}
	}
  void room::checkout()
	{
		cout<<"\n\t\t\t ROOM NUMBER :: ";
		cin.ignore();
		cin.getline(roomid,5);
		cout<<"\n\t\t\t ENTER CUSTOMER NAME:";
		cin.getline(roomcustname,20);
		cout<<"\n\t\t\t CHECK-OUT DATE (dd/mm/yyyy) :: ";
		cin.getline(od,11);
		cout<<"\n\t\t\t CHECK-OUT TIME  :: ";
		cin.getline(ot,11);
		cout<<"\n\t\t\t THANK YOU SIR/MADAM  FOR YOUR VIST";
	}
  void room::room_del()
   {  
		system("CLS");
		fstream f4;
		remove("Room status.txt");
		f4.open("Room status.txt",ios::binary|ios::in);
		f4.close();
		cout<<"\n\t\t\t ......RECORD DELETED......\n"<<endl;
   }
  void room::room_bill()
   {
		system("CLS");
		roomtype typ;
		typ.view_roomtype();
		typ.get_roomtype();
		typ.show_roomtype();
   }
  void room::room_show()
	{
		cout<<"\n\t\t\t ROOM TYPE:";
		puts(romtype);
		cout<<"\n\t\t\t ROOM ID: ";
		puts(roomid);
		cout<<"\n\t\t\t CUSTOMER NAME:";
		puts(roomcustname);
		cout<<"\n\t\t\t CUSTOMER ADDRESS:";
		puts(roomcustaddress);
		cout<<"\n\t\t\t*********************************************\n";
	}
  void room::show_checkoutdetails()
	{
		cout<<"\n\t\t\t ROOM ID:";
		puts(roomid);
		cout<<"\n\t\t\t CUSTOMER NAME:";
		puts(roomcustname);
		cout<<"\n\t\t\t CHECK-OUT DATE::";
		puts(od);
		cout<<"\n\t\t\t CHECK-OUT TIME::";
		puts(ot);
		cout<<"\n\t\t\t*********************************************\n";
	}
 void room::checkoutroom_del()
	{
		system("CLS");
		fstream f5;
		remove("Room checkout details.txt");
		f5.open("Room checkout details.txt",ios::binary|ios::in);
		f5.close();
		cout<<"\n\t\t\t ......RECORD DELETED......\n"<<endl;
	}
//***************PROJECT DETAILS******************
	void projctdetail()
		{
			system ("CLS");
			cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  TOPIC: HOTEL MANAGEMENT SYSTEM"
				<<"\n"
			    <<"\n\n\t\t\t\t\t\t\t\t          SCHOOL: DE PAUL PUBLIC SCHOOL"
			    <<"\n\n\n\t\t\t\t\t\t\t\t          CREATED BY:"
			    <<"\n\t\t\t\t\t\t\t\t\t             DILIS DENNY"
			    <<"\n\t\t\t\t\t\t\t\t\t             FEBIN FRANCIS"
			    <<"\n\t\t\t\t\t\t\t\t\t             SHANTAL DENNY"
			    <<"\n\t\t\t\t\t\t\t\t\t             SANDRA VINOD"
			    <<"\n\n\n\t\t\t\t\t\t\t\t           SUBMITTED TO:"
			    <<"\n\t\t\t\t\t\t\t\t\t             CINIL SIR"
			    <<"\n\t\t #############################################################################################################################################";		
		}
//**************CLOSING FUNCTION********************
	void projctclose()
		{
			cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t THANK YOU"
				<<"\n\t\t\t\t\t\t\t\t\t\t\t VISIT AGAIN"
				<<"\n\t\t #############################################################################################################################################";
		}
//$$$$$$$$$$$FUNCTION TO WRITE INTO THE FILE$$$$$$$$$$$$$$$$$$$$$$$
//&&&&&&&&&RESTUARANT CLASS&&&&&&&&&&&&&&&&&&
 void food_menu ()
   {
     system("CLS");
	 restaurant f;
	 char option;
	 fstream f1;
	 f1.open("Food Menu.txt",ios::out|ios::binary|ios::app);
	 do 
		{
			system("CLS");
			f.write_fmenu();
			f1.write((char*)&f,sizeof(f));
	        cout<<"\n\t\t\t DO YOU WANT TO ADD AN ITEAM-(Y/N)"<<endl<<"\t\t\t";
	        cin>>option;
	    }while(option=='Y'||option=='y');
	 f1.close();
  }
//%%%%%%%%%%%%%BAR CLASS%%%%%%%%%%%%%%%%%%%%%%%
void get_bar()
   {
  		system("CLS");
		bar b;
		fstream f2;
		char option2;
		f2.open("Bar Menu.txt",ios::out|ios::binary|ios::app);
		do
		 {
			system("CLS");
			b.write_bar();
			f2.write((char*)&b,sizeof(b));
			cout<<"\n\t\t\tDO YOU WANT TO ADD ITEM(Y/N):"<<endl<<"\t\t\t";
			cin>>option2;
		  }while(option2=='Y'||option2=='y');
		 f2.close();
	}
//&&&&&&&&&&&&CUSTOMER CLASS&&&&&&&&&&&&&&&&&&
void getcust_detail()
	{
			system("CLS");
			customer c;
		    fstream f3;
			char option3;
			f3.open("Customer.txt",ios::out|ios::binary|ios::app);
			do
			  {
				system("CLS");
				c.write_customer();
				f3.write((char*)&c,sizeof(c));
				cout<<"\n\t\t\t DO YOU WANT TO ADD MORE CUSTOMER(Y/N):"<<endl<<"\t\t\t";
				cin>>option3;
			   }while(option3=='Y'||option3=='y');
			f3.close();
	}
//^^^^^^^^^^CUSTOMER MODIFY^^^^^^^^^^^^^^^^
void modifycutomer()
	{
		    customer c;
			char custname[20];
			int vari=0;
			system("CLS");
            cout<<'\n'<<"\t\t\t\t\t.......MODIFY CUSTOMER RECORD......."<<endl;
			cout<<"\t\t\t ENTER THE CUSTOMER NAME  TO BE MODIFIED "<<endl<<"\t\t\t";
			cin.ignore();
			cin.getline(custname,20);
			fstream f3;
			f3.open("Customer.txt",ios::in|ios::out|ios::binary);
			while(f3.read((char*)&c,sizeof(c))&&vari==0)
				{
					if(	strcmp(c.recustnam(),custname)==0)
						{
							c.showdetail_cust();
							cout<<endl<<"\t\t\t ENTER THE DETAILS OF THE CUSTOMER"<<endl;
							c.modify_cutomer();
							unsigned long long pos=-1*sizeof(c);
							f3.seekp(pos,ios::cur);
							f3.write((char*)&c,sizeof(c));
							cout<<endl<<"\t\t\t.......RECORD UPDATED......."<<endl;
							vari=1;
						}
				}
			f3.close();
            if(vari==0)
				cout<<endl<<"\t\t\t................ RECORD NOT FOUND.............."<<endl;
	}
//%%%%%%%%%%%%%CLASS ROOM(BOOKING)%%%%%%%%%%%%%
 void booking()
  {
	system("CLS");
	room r;
	char option4;
	fstream f4;
	f4.open("Room status.txt",ios::out|ios::binary|ios::app);
	do
		{
			system("CLS");
			r.write_room();
			f4.write((char*)&r,sizeof(r));
			cout<<"\n\t\t\t DO YOU WANT TO ADD MORE ROOMS-(Y/N)"<<endl<<"\t\t\t";
			cin>>option4;
		}while(option4=='Y'||option4=='y');
	f4.close();    
   } 
 //&&&&&&&&&&&&&&CLASS ROOM(CHECKOUT)&&&&&&&&&&&&&&
  void checkoutroom()
	{
		system("CLS");
		room r;
		char option5;
		fstream f5;
		f5.open("Room checkout details.txt",ios::out|ios::binary|ios::app);
		do
			{
				system("CLS");
				r.checkout();
				f5.write((char*)&r,sizeof(r));
				cout<<"\n\t\t\t ANY MORE CUSTOMER IS TO CHECK OUT(Y/N)"<<"\n"<<"\t\t\t";
				cin>>option5;
			}while(option5=='Y'||option5=='y');
		f5.close();
	} 
//$$$$$$$$$$$$ROOM CANCELLATOIN$$$$$$$$$$$$4
void cancellation()
	{
		    room r;
			char roomno[5];
			int var=0;
			system("CLS");
            cout<<'\n'<<"\t\t\t\t\t.......ROOM CANCELLATOIN......."<<endl;
			cout<<"\t\t\t ENTER ROOM NO TO BE CANCELLED "<<endl<<"\t\t\t";
			cin.ignore();
			cin.getline(roomno,5);
			fstream f4;
			f4.open("Room status.txt",ios::in|ios::out|ios::binary);
			while(f4.read((char*)&r,sizeof(r))&&var==0)
				{
					if(	strcmp(r.retroomid(),roomno)==0)
						{
							unsigned long long pos=-1*sizeof(r);
							f4.seekp(pos,ios::cur);
							cout<<endl<<"\t\t\t.......ROOM CANCELLED......."<<endl;
							var=1;
						}
				}
			f4.close();
            if(var==0)
				cout<<endl<<"\t\t\t................ROOM NOT BOOKED..............."<<endl;
	}
//**********ADDITONAL FUNCTIONS******************
//&&&&&&&&RESTAURANT VIEW&&&&&&&&&&&&&&&&&
void displayres()
    {
		system("CLS");
        cout<<endl<<"\t\t\t.................RESTAURANT  DETAILS..............."<<endl;
        fstream f1;
        restaurant r;
        f1.open("Food Menu.txt",ios::binary|ios::in);
        while(f1.read((char*)&r,sizeof(r)))
            {
						r.food_show();		
            }
        f1.close();
    }  
 //$$$$$$$$BAR VIEW$$$$$$$$$$$$$$$$$$
 void displaybar()
 {
	    system("CLS");
	    cout<<endl<<"\t\t\t.................BAR  DETAILS..............."<<endl;
        fstream f2;
        bar b;
        f2.open("Bar Menu.txt",ios::binary|ios::in);
        while(f2.read((char*)&b,sizeof(b)))
            {
						b.show_bar();		
            }
        f2.close();
 }
//@@@@@@@@@@@CUSTOMER VIEW@@@@@@@@@@@@@@
void displaycust()
  {
		system("CLS");
	    cout<<endl<<"\t\t\t.................CUSTOMER  DETAILS..............."<<endl;
        customer c;
        fstream f3;
		f3.open("Customer.txt",ios::binary|ios::in);
        while(f3.read((char*)&c,sizeof(c)))
            {
						c.showdetail_cust();		
            }
        f3.close();
   } 
//%%%%%%%%%%%ROOM VIEW%%%%%%%%%%%%%%%%%%%%%
void displayroom()
	{
		system("CLS");
		cout<<endl<<"\t\t\t....................ROOM DETAILS.................."<<endl;
		room r;
		fstream f4;
		f4.open("Room status.txt",ios::binary|ios::in);
		while(f4.read((char*)&r,sizeof(r)))
		  {
				r.room_show();
		  }
	    f4.close();
	}
//@@@@@@@@@@@@@ROOM CHECK OUT VIEW@@@@@@@@@@@@@@
void displayromcheckout()
	{
		system("CLS");
		cout<<endl<<"\t\t\t....................ROOM CHECK-OUT DETAILS.................."<<endl;
		room r;
		fstream f5;
		f5.open("Room checkout details.txt",ios::binary|ios::in);
		while(f5.read((char*)&r,sizeof(r)))
			{
				r.show_checkoutdetails();
			}
		f5.close();
	}
//&&&&&&&&(ADMIN)BILL CONTROL&&&&&&&&&&&&&&
  void bill_control()
		{
			system("CLS");
			int tem =0;
			int cho; //choice
			do
				{
					cout<<"\n\t\t\t\t\t\t\t\t HOTEL BILL"
						<<"\n\t\t\t\t\t\t SELECT YOUR  BILL TYPE:"
						<<"\n\t\t\t\t\t\t 1.RESTAURANT BILL"
						<<"\n\t\t\t\t\t\t 2.BAR BILL"
						<<"\n\t\t\t\t\t\t 3.ROOM BILL"
						<<"\n\t\t\t\t\t\t 4.EXIT"
						<<"\n\t\t\t\t\t\t ENTER YOUR CHOICE ";
					cin>>cho;
					switch(cho)
						{
							case 1:
									system("CLS");
									restaurant r;
									r.food_bill();
									break;
							case 2:
									system("CLS");
									bar b;
									b.bill_bar();
									break;
							case 3:
									system("CLS");
									room n;
									n.room_bill();
									break;
							case 4:
									tem=1;
									break;
						}
				}while(!tem);
	}
//$$$$$$$$$$(ADMIN)RESTAURANT CONTROL$$$$$$$$$$$$$$$$$
	void restaurant_control()
		{
			system("CLS");
			int tmp =0;
			int che; //choice
			do
				{
					cout<<"\n\t\t\t\t\t\t\t\t\tRESTAURANT CORNER"
						<<"\n\t\t\t\t\t\t 1.FOOD MENU"
						<<"\n\t\t\t\t\t\t 2.APPENED FOOD MENU"
						<<"\n\t\t\t\t\t\t 3.VIEW FOOD MENU"
						<<"\n\t\t\t\t\t\t 4.DELETE FOOD MENU"
						<<"\n\t\t\t\t\t\t 5.EXIT"
						<<"\n\t\t\t\t\t\t ENTER YOUR  CHOICE: ";
					cin>>che;
					restaurant r;
					switch(che)
						{
							case 1:
								    system("CLS");
							        food_menu();
							        break;
							case 2:
									system("CLS");
									r.appened_foodmenu();
							        break;
							case 3:
									system("CLS");
									displayres();
									break;
							 case 4:
									system("CLS");	
									r.food_del();
									break;
							case 5:
									tmp=1;
									break;
						}
				}while(!tmp);
		}
//&&&&&&&&&&&&(ADMIN)BAR CONTROL&&&&&&&&&&&&&&&&&&&&&&
	void bar_control()
		{
			system("CLS");
			int top =0;
			int chi; //choice
			do
				{
					cout<<"\n\t\t\t\t\t\t\t\t BAR CORNER"
					    <<"\n\t\t\t\t\t\t 1.BAR MENU"
					    <<"\n\t\t\t\t\t\t 2.APPENED BAR MENU"
					    <<"\n\t\t\t\t\t\t 3.VIEW BAR MENU"
					    <<"\n\t\t\t\t\t\t 4.DELETE BAR MENU"
					    <<"\n\t\t\t\t\t\t 5.EXIT"
					    <<"\n\t\t\t\t\t\t ENTER YOUR  CHOICE: ";
					cin>>chi;
					bar b;
					switch(chi)
						{
							case 1:
							       system("CLS");
							       get_bar();
							       break;
							case 2:
									system("CLS");
			                        b.appened1_bar();
							        break;
							case 3:
									system("CLS");	
									displaybar();
									break;
							 case 4:
									system("CLS");
									b.bar_del();
									break;
							case 5:
									top=1;
									break;
						}
				}while(!top);
		}
//&&&&&&&&&&&&&&&&(ADMIN)CUSTOMER CONTROL&&&&&&&&&&&&
	void customer_control()
		{
			system("CLS");
			int tpmt =0;
			int chce; //choice
			do
				{
					cout<<"\n\t\t\t\t\t\t\t\t\t CUSTOMER CORNER"
					    <<"\n\t\t\t\t\t\t\t 1.CUSTOMER DETAILS"
					    <<"\n\t\t\t\t\t\t\t 2. APPENEND DETAILS"
					    <<"\n\t\t\t\t\t\t\t 3.VIEW CUSTOMER DETAILS"
						<<"\n\t\t\t\t\t\t\t 4.DELETE CUSTOMER RECORDS"
					    <<"\n\t\t\t\t\t\t\t 5.EXIT"
					    <<"\n\t\t\t\t\t\t\t ENTER YOUR  CHOICE: ";
					cin>>chce;
					customer c;
					switch(chce)
						{
							case 1:
							       system("CLS");
							       getcust_detail();
							       break;
							case 2:
									system("CLS");
									c.appened3_customer();
									break;
							case 3:
									system("CLS");
									displaycust();
									break;
							case 4:
									system("CLS");
									c.cust_del();
									break;	
							case 5:
									tpmt=1;
									break;
						}
				}while(!tpmt);
		}
//$$$$$$$$$$$$(ADMIN)ROOM CONTROL$$$$$$$$$$$$$$$$$$$$
	void room_control()
		{
			system("CLS");
			int tp =0;
			int chc; //choice
			do
				{
					cout<<"\n\t\t\t\t\t\t\t\t ROOM CORNER"
					    <<"\n\t\t\t\t\t\t 1.BOOKING"
					    <<"\n\t\t\t\t\t\t 2.CHECKIN STATUS"
					    <<"\n\t\t\t\t\t\t 3.CHECKOUT STATUS"
					    <<"\n\t\t\t\t\t\t 4.VIEW ROOM DETAILS"
					    <<"\n\t\t\t\t\t\t 5.VIEW CHECK-OUT ROOM DETAILS"
					    <<"\n\t\t\t\t\t\t 6.DELETE ROOM DETAILS"
						<<"\n\t\t\t\t\t\t 7.DELETE ROOM CHECK-OUT DETAILS"
					    <<"\n\t\t\t\t\t\t 8.EXIT"
					    <<"\n\t\t\t\t\t\t ENTER YOUR  CHOICE: ";
					cin>>chc;
					room r;
					switch(chc)
						{
							case 1:
									system("CLS");
									booking();
									break;
							case 2:
									system("CLS");
							        r.checkin();
								    break;
							case 3:
			                        system("CLS");
			                        checkoutroom();
							        break;
							case 4:
									system("CLS");
									displayroom();
									break;
							case 5:
									system("CLS");
									displayromcheckout();
									break;
						    case 6:
							       system("CLS");
							       r.room_del();
								   break;
							case 7:
									system("CLS");
									r.checkoutroom_del();
									break;
							case 8:
								  tp=1;
								  break;
						}
				}while(!tp);
		}
//&&&&&&&&&&&&&&(CLIENT) CUSTOMER CONTROL&&&&&&&&&
    void client_customer()
		{
			system("CLS");
			int cus =0;
			int choic; //choice
			do
				{
					cout<<"\n\t\t\t\t\t\t\t\t\t CUSTOMER CORNER"
					    <<"\n\t\t\t\t\t\t\t 1.MODIFY DETAILS"
					    <<"\n\t\t\t\t\t\t\t 2.SHOW DETAILS"
					    <<"\n\t\t\t\t\t\t\t 3.EXIT"
					    <<"\n\t\t\t\t\t\t\t ENTER YOUR  CHOICE: ";
					cin>>choic;
					switch(choic)
						{
							case 1:
							       system("CLS");
							       modifycutomer();
							       break;
							case 2:
									system("CLS");
			     			        displaycust();
							        break;
							case 3:
									cus=1;
									break;
						}
				}while(!cus);
		}
//******************ADMIN CONTROL**********************
	void adminctrl()
		{
			system("CLS");
			char password[5];
			cout<<"\n\t\t\t\t\t\t\t\t ADMIN AREA ";
			cout<<"\n\t\t\t ENTER THE PASSWORD TO LOGIN:";
			cin.ignore();
			cin.getline(password,5);
			if(strcmp(password,"pass")==0)
				{
				     cout<<"\n\t\t\t\t\t\t\t\t ADMIN MENU";
				     int tp =0;
				     int chc; //choice
				     do
					{
					   cout<<"\n\t\t\t\t\t\t\t 1.RESTUAURT STATUS "
					       <<"\n\t\t\t\t\t\t\t 2.BAR STATUS"
					       <<"\n\t\t\t\t\t\t\t 3.ROOM STATUS"
					       <<"\n\t\t\t\t\t\t\t 4.CUSTOMER STATUS"
					       <<"\n\t\t\t\t\t\t\t 5. BILL"
					       <<"\n\t\t\t\t\t\t\t 6.EXIT"
					       <<"\n\t\t\t\t\t\t\t ENTER YOUR  CHOICE: ";
					    cin>>chc;
					  switch(chc)
						{
					        	case 1:
					        	       system("CLS");
									   restaurant_control();
									   break;
						        case 2:
										system("CLS");
										bar_control();
										break;
						        case 3:
										system("CLS");
										room_control();
										break;
								case 4:
										system("CLS");
										customer_control();
										break;
								case 5:
										system("CLS");
										bill_control();
										break;
								case 6:
										tp=1;
										break;
						}
					}while(!tp);
						system("CLS");
		    	}
		    else
				cout<<"\n\t\t\t\t\t\t\t\t\t\t\t!!!!!!!!!!WRONG PASSWORD!!!!!!!!!!"
					<<"\n\t\t\t\t\t\t\t\t\t\t\t!!!!!!!!!!TRY AGAIN!!!!!!!!!!!!!!!";
		 }
//*****************CLIENT CONTROL*************************
  void clientctrl()
		{
				system("CLS");
				cout<<"\n\t\t\t\t\t\t\t\t\t\t\t CLIENT AREA ";
				int tpi =0;
				int chcw; //choice
				do
					{
						cout<<"\n\t\t\t\t\t\t\t 1.RESTUARANT "
						    <<"\n\t\t\t\t\t\t\t 2.BAR"
						    <<"\n\t\t\t\t\t\t\t 3.CUSTOMER"
						    <<"\n\t\t\t\t\t\t\t 4.ROOM"
						    <<"\n\t\t\t\t\t\t\t 5.EXIT"
						    <<"\n\t\t\t\t\t\t\t ENTER YOUR  CHOICE: ";
						 cin>>chcw;
						switch(chcw)
							{
								case 1:
										system("CLS");
										displayres();
										break;
								case 2:
										system("CLS");
										displaybar();
										break;
								case 3:
										system("CLS");
										client_customer();
										break;
								case 4:
										system("CLS");
										cancellation();
										break;
								case 5:
										tpi=1;
										break;
							}
					}while(!tpi);
					system("CLS");
		}
//****************************MAIN  PROGRAM***********************************
	int main ()
		{
			int opt;
			int flag = 0;
			do
					{
						cout<<"\n\t\t\t\t\t\t\t\t\t***** HOTEL  SILENT  VALLEY *****"
						    <<"\n\n\t\t\t\t\t\t\t\t MAIN MENU"
					        <<"\n\n\t\t\t\t\t\t\t [1] MANAGER AREA    "
						    <<"\n\t\t\t\t\t\t\t [2] CUSTOMER AREA   "
						    <<"\n\t\t\t\t\t\t\t [3] PROJECT INFO    "
						    <<"\n\t\t\t\t\t\t\t [4] Exit            "
						    <<"\n\n\t\t\t\t\t\t\t ENTER THE OPTION:";
		    			 cin>>opt;
						switch(opt)
							{
								case 1:
										system("CLS");
										adminctrl();
										break;
								case 2:
										system("CLS");
										clientctrl();
										break;
								case 3:
										system("CLS");
										projctdetail();
										break;
								case 4:
										system("CLS");
										projctclose();
										flag = 1;
										break;
							}
					}while(!flag);
			return 0;
		}
