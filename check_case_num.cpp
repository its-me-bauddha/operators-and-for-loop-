/*Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
Input format :
Single Character
Output format :
1 or 0 or -1
Constraints :
Input can be any character
Sample Input 1 :
v
Sample Output 1 :
0*/


_________________________________________________________CODE_________________________________________________________________________________
  
  
  
  #include<iostream>
using namespace std;

int main (){
    char i;
    cin >> i;

    
    if  ( 'A' <=i && i<='Z' ){
        cout << "1" <<endl;
    } else if ( 'a' <=i && i <= 'z' ){
        cout << "0" << endl;
    } else {
        cout << "-1" << endl;
    }
    
}
	

