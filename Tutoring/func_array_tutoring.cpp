//Function practice with arrays
//Original code by Scott 
//Updated and commented by Tyler Dickon
//Date: 3/22/2017

#include <iostream>

//At the stage you're at right now, using namespace is fine, but just keep in mind as you progress further into bigger projects 
//This could cause name collision. 
using namespace std;

//Changed from MAXNUM to MAX_NUM as it's easier to read and understand, do you know why we use CAPS when declaring global constants?
//It's a common syntax method that allows another programmer to easily distinguish variable types. When using this type of variable
//It's better to use VAR_NAME instead of VARNAME, as it's easier on the eyes.
const int MAX_NUM = 10;

/*This is wrong, why are you declaring these as global variables? If you declare these as global variables outside of the main
function, then they can be accessed in any scope, no matter how small. You're creating these variables again inside of int main, thus
the compiler cannot tell the difference between the two. It's also good practice to never declare non GLOBAL Const variables
outside of main.
*/
//double price[MAXNUM] = { 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
//double quantity[MAXNUM] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
//double amount[MAXNUM];

/*This is wrong as well, when working with functions in a single file you need a functions definition and decleration.
Currently you have a sort of blend between the two.
void extend(const double[], const double[], const double[] <-This is wrong as well, when using a const tag that means that the values
inside of that variable are locked into place. If you want to add content into the third array then you can't have it be a constant.)
{
for (int i=0; i<MAXNUM; i++){
amount[i] = price[i]*amount[i];
cout << amount[i] << endl;
}
return; //You also don't need a return statement in a void function.
}
*/

//Another note, is to consider your function name? Why is it called extend, when we want to add elements from array one and two
//into the array of 3? Extend would have another programmer believe that they are going to complete some sort of extention of an array
//with this name. 
//--------------------------------------------------------------------------------------------------------------------------------------

//This is how you should declare your function, note that you should include comments about your functions.
void setArray(const double[], const double[], double[]); //Adds the elements from Array one and Array two, and places them in Array3.

int main()
{
	double price[MAX_NUM] = { 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98 };
	double quantity[MAX_NUM] = { 4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8 };
	double amount[MAX_NUM];

	//extend(price[MAX_NUM], amount[MAXNUM], quantity[MAXNUM]);
	//Call the function in the program like this;
	setArray(price, quantity, amount);

	for (int index = 0; index < MAX_NUM; ++index)
	{
		std::cout << "Amount[" << index << "]: " << amount[index] << std::endl;
	}

	return 0;
}

//Function Definition located below:
void setArray(const double array1[], const double array2[], double array3[])
{
	//We want to iterate through each element in the array, add them and then place them into the matching element of array 3.
	for (int index = 0; index < MAX_NUM; ++index)
	{
		array3[index] = array1[index] + array2[index];
	}
}