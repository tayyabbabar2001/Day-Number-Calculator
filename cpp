#include <iostream>
using namespace std; 

int main(){
	int month, date, target; //variables name. target is the output of month number + date number
	
	cout<<"Enter Month number:"; //month number
	cin >>month;
	cout<<"Enter Date number:"; //date number
	cin >>date;
	
	if (month==1){ //== operator is used to compare the value
		target= 0 + date; // 0 + date means its the first month so simply add the day and output
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==2){
		target= 31 + date; // 31 + date means month 2 is feb so jan has 31 days so 31 + date number and output result
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==3){
		target= 59 + date; // 59 + date means month 3 is march so jan and feb has 59 days so 59 + date number and output result, like this for every month.
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==4){
		target= 90 + date;
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==5){
		target= 120 + date;
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==6){
		target= 151 + date;
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==7){
		target= 181 + date;
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==8){
		target= 212 + date;
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==9){
		target= 242 + date;
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==10){
		target= 273 + date;
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==11){
		target= 303 + date;
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	else if (month==12){
		target= 334 + date;
		cout<<"Day number of the target day is "<<target<<endl;
	}
	
	// For every month, previous month days are added and the date number is added into them and output is shown 
	
	else{
	cout<<"Invalid Month entered"; // if invalid month number like 13,14... is added,it will display invalid month
}
}
