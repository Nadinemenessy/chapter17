#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i<n; ++i) os<<a[i]<<"\n";
	return os;
}

int main(){

	//Allocate an int, initialize it to 7, and assign its address to a variable p1.
	int x= 7;
	int* p1= &x;
	
	//Print out the value of p1 and of the int it points to
	cout<< "pointer "<<p1<<" points to "<<*p1<<"\n";
	
	//Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p2.	int* p2= new int[7];
	x=1;
	for(int i=0; i<7; ++i){
		p2[i]=x;
		x*=2;
	}
	
	// Print out the value of p2 and of the array it points to.
    cout<<"address "<<p2<<"\n";
	for(int j= 0; j<7; ++j)
		cout<<p2[j]<<"\t";
	
	cout<<"\n\n";
	
	//Declare an int* called p3 and initialize it with p2 then Assign p1 to p2 then Assign p3 to p2.
	int* p3= p2;
	p2=p1;
	p2=p3;
	
	//Print out the values of p1 and p2 and of what they point to.
	cout<< "pointer "<<p1<<" points to "<<*p1<<"\n";	
	cout<< "pointer "<<p2<<" points to "<<*p2<<"\n";
	
	//Deallocate all the memory you allocated from the free store
    delete[] p2;
	
	//Allocate an array of ten ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p1.
	p1= new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	p2= new int[10];
	
	//Copy the values from the array pointed to by p1 into the array pointed to by p2.
	for(int m=0; m<10; ++m)
		p2[m]= p1[m];
		
	for(int k= 0; k<10; ++k)
		cout<<p2[k]<<"\t";
	cout<<"\n\n";
	
	//Repeat 10–12 using a vector rather than an array.
	vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	vector<int> v2 (10);
	v2=v1;
	
	cout<<"vector form\n"; //just for making it clear
	for(int v: v2) cout<<v<<"\t";
	cout<<"\n";
}	
