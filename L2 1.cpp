#include<iostream>

using namespace std;

class data{
	
	private:
		
	static int	hotel_id;
    static char hotel_name;
    static char hotel_type; 
    static char hotel_rating;
    static char hotel_location;
	static int hotel_establish_year;
    static int hotel_staff_quantity;
    static int hotel_room_quantity;

	public:
	
	static void setter();
	static void getter(); 
};
		int data::hotel_id = 0;
		char data::hotel_name = 0;
		char data::hotel_type = 0;
		char data::hotel_rating = 0;
		char data::hotel_location = 0;
		int data::hotel_establish_year = 0;
		int data::hotel_staff_quantity = 0;
		int data::hotel_room_quantity = 0;
 

void data :: setter(){
	cout<<"your value of id : ";
	cin>>hotel_id;
	
	cout<<"Your value of name : ";
	cin>>hotel_name;
	
 	cout<<"Your value of type : ";
	cin>>hotel_type;
	
	cout<<"Your value of rating : ";
	cin>>hotel_rating;
	
	cout<<"Your value of location : ";
	cin>>hotel_location;
	
	cout<<"Your value of establish year : ";
	cin>>hotel_establish_year;
	
	cout<<"Your value of staff quantity : ";
	cin>>hotel_staff_quantity;
	
	cout<<"Your value of room quantity : ";
	cin>>hotel_room_quantity;	 
		 
}

void data :: getter(){
	
    	 
}

int main(){
	
	int N;
	
	cout<<"Enter size : ";
	cin>>N;
	
	data obj[N];
	
	int i;
	
	for(i=0 ; i<N ; i++){
		
		obj[i].setter();
	}
	
	for(i=0 ; i<N ; i++){
		
		obj[i].getter();
	}
}
