
/*
---------------------------------------
# ✅ xc+039
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+039]
AS
/*
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
//defining the comparator function returns true or false
//not for binary search..
bool f(int x, int y){
	return x>y; //for decreasing order
}

int main() {

	vector<int> A ={ 11,2,3,14 };
	cout<<A[1]<<endl;//2

	sort(A.begin(), A.end()); // sort in order to perform binary search
	cout<<A[1]<<endl;//3 after sorting

	bool present = binary_search(A.begin(), A.end(), 3);
	cout<<present<<endl;//will return true


	present = binary_search(A.begin(), A.end(), 5);
	cout<<present<<endl;//will return false

	A.push_back(100);//inserting new element from end

	present = binary_search(A.begin(), A.end(), 100);
	cout<<present<<endl;

   	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(121);

	//give me the iterator pointing to first element >= 100
	vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);
	//you can also use auto as c++ will see that a lower_bound is performed
	//and it will figur it out that it is an iterator of vector<int>
	//auto it = lower_bound(A.begin(), A.end(), 100);
	//auto it2 = upper_bound(A.begin(), A.end(), 100);



	//give me an iterator pointing to first element >100
	vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);

	//print the content of it and it2
	cout<<*it<<" "<<*it2<<endl;

	//give me the number of hundreds(100)
	cout<<it2-it<<endl; //4 it subtracts the indices


	//soritng the vector in reverse order
	//use method overloading with sort by passing a comparator function
	//to control the ordering
	sort(A.begin(), A.end(), f);

	//now print the sorted vector using iterator
	vector<int>::iterator it3;

	for (it3 =A.begin(); it3!= A.end(); it3++){
		cout<<*it3<<" ";
	}
	cout<<endl;

	//A shorter code for the above will be
	for(int x: A){
		//x++ wont change the vector content it will only print the changed one
		cout<<x<<" ";
	}
	cout<<endl;

	//to change the vector content while iterating
	//iterate it by referance by using &x
	for(int &x: A){
		x++;
		cout<<x<<" ";
	}
	cout<<endl;

	return 0;
}



*/