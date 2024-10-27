#include<iostream>
using namespace std;

class florist{
	private:
		
	int bouquet_size;
	int flower_type;
	int flower_color;
	
	
	double price;
	double flower_price;
	double color_price;
	double size_price;
	
	public:
		
	
	char choice;
	
	void BouquetSize(){
		
	jump:
	cout<<"Bouquet Size's  "<<endl;	
	cout<<"1. Small   5.5 Rs"<<endl;	
	cout<<"2. Meduim  7.5 Rs"<<endl;	
	cout<<"3. Large   9.5 Rs"<<endl;
	cout<<"Select your Bouquet Size : ";
	cin>>bouquet_size;
	
	system("cls");
	if(bouquet_size !=1 && bouquet_size !=2 && bouquet_size !=3){
	cout<<"Invalid Input !"<<endl;
	goto jump;
}
	switch (bouquet_size){
		
		case 1:
			size_price=5.5;
		break;
		
		case 2:
			size_price=7.5;
		break;
		
		case 3:
			size_price=9.5;
		break;
		
		default :
			cout<<"Invalid Input ! "<<endl;
	
	   }
		
	}
	
	void flowerType(){
		jump11:
		cout<<"Choose a flower type "<<endl;
		cout<<"1. Rose            1.2 Rs"<<endl;
		cout<<"2. Lily            1.3 Rs"<<endl;
		cout<<"3. Carnations      1.0 Rs"<<endl;
		cout<<"4. Daffodil        1.0 Rs"<<endl;
		cout<<"5. Gerbera         1.1 Rs"<<endl;
		cout<<"6. Chrysanthemum   1.1 Rs"<<endl;
		cout<<"7. Assorted        0.8 Rs"<<endl;
		cout<<"Select your Flower Type :";
		cin>>flower_type;
		
		system("cls");
		
		if(flower_type<1 || flower_type>7){
			cout<<"Invalid Input ! "<<endl;
		goto jump11;
	}
			switch (flower_type){
		
		case 1:
			flower_price=1.2;
		break;
		
		case 2:
			flower_price=1.3;
		break;
		
		case 3:
			flower_price=1.0;
		break;
			
		case 4:
			flower_price=1.0;
		break;
				
		case 5:
			flower_price=1.1;
		break;
				
		case 6:
			flower_price=1.1;
		break; 
				
		case 7:
			flower_price=0.8;
		break;
		
		default :
			cout<<"Invalid Input ! "<<endl;
			
	    }	
	}
	
	void flowerColor(){
		jump2:
		cout<<"Choose a Flower Color "<<endl;
		cout<<"1. White    1.3 Rs"<<endl;
		cout<<"2. Red      1.2 Rs"<<endl;
		cout<<"3. Pink     1.1 Rs"<<endl;
		cout<<"4. Yellow   1.1 Rs"<<endl;
		cout<<"5. Blue     1.2 Rs"<<endl;
		cout<<"6. Mixed    1.0 Rs"<<endl;
		cout<<"Select your Flower Color :";
		cin>>flower_color;
		
		system("cls");
		if(flower_color<1 || flower_color>6){
			cout<<"Invalid Input ! "<<endl;
		goto jump2;
	}
		switch (flower_color){
		
		case 1:
			color_price=1.3;
		break;
		
		case 2:
			color_price=1.2;
		break;
		
		case 3:
			color_price=1.1;
		break;
			
		case 4:
			color_price=1.1;
		break;
				
		case 5:
			color_price=1.2;
		break;
				
		case 6:
			color_price=1.0;
		break; 
		
		default :
			cout<<"Invalid Input ! "<<endl;
			
	        }
			
	}
	
	void billing(){
		price=(flower_price + color_price ) * size_price;
		cout<<"Your Total is "<<price<<" Rs";
		cout<<endl;
	}

int place_order(){


BouquetSize();	
flowerType();	
flowerColor();	
billing();	

// **************STATISTICS****************
	order_count++;
total_sales +=size_price + flower_price + color_price;


}

// **************STATISTICS****************
int order_count;
double total_sales=0;

void display_statistics(){
	if(order_count ==0){
		cout<<"No orders placed yet."<<endl;
		return;
	}
	cout<<"Statistics"<<endl;
	cout<<"Total Orders : "<<order_count<<endl;
	cout<<"Total Sales :  Rs "<<total_sales<<endl;
	cout<<"Average Sale : RS "<<total_sales /order_count <<endl;
	
}

	
	
	
};


int main() {
	char choice;
	florist shop;
	int count=0;
		
		
	int menu;
	backtomenu:
	Option:
	cout<<"Main Menu"<<endl;
	cout<<"1.Order Bouquet"<<endl;
	cout<<"2.Statsitics"<<endl;
	cout<<"3.Exit"<<endl;
	cout<<"Select Option : ";
	cin>>menu;
	system("cls");
		if(menu !=1 && menu !=2 && menu !=3){
	cout<<"Invalid Input !"<<endl;
	goto Option;
	
}
	
	
	
	if(menu ==1){
		
for(int i=0;i<10;i++){
	shop.place_order();
	
	cout<<"Would you like to continue shopping (Y/N) ";
    cin>>choice;
	if(choice !='Y' && choice !='y' ){
    //cout<<"Exiting"<<endl;
    goto backtomenu;
    break;
}

count++;
}
if(count==10){
	cout<<"Limit Reached ";
}
} //menu ==1

if(menu ==3){
	cout<<"Exiting";
	return 0;
}

if(menu == 2){
	shop.display_statistics();
	
	
}




}


