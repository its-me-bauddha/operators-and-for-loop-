/*Sum or Product
Send Feedback
Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
Input format :
Line 1 : Integer N
Line 2 : Choice C
Output Format :
 Sum or product according to user's choice
Constraints :
1 <= N <= 12
Sample Input 1 :
10
1
Sample Output 1 :
55
*/


//--------------------------------------------------------------------CODE-----------------------------------------------------------------------
  #include<iostream>
using namespace std;

int main() {
	int no;
    int c;
    cin>>no>>c;
    int sum=0;
    int product =1;
    int i=1;
    if(c==1){
        while(i<=no){
        	sum=sum+i;
            i++;
        }
        cout<<sum<<endl;
    }
     if(c==2){
        while(i<=no){
            product=product*i;
            i++;
        }
        cout<<product<<endl;
    }
    if(c!=1 && c!=2){
        cout<<"-1"<<endl;
    }
	
}
