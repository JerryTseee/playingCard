#include<iostream>
#include<string>
using namespace std;

int count(int num, int arr[], int length)
{
 int count = 0;
 for (int i = 0; i<length; i++)
 {
  if (arr[i] == num)
  {
   count+=1;
   arr[i] = -1; //mark the element as counted
  }
 }
 return count;
}

int main()
{
 int num;//total number of listed cards
 cin >> num;
  
 string cards[52];//this array store all the cards
 int cards_num[52];//this array only store the integer numbers on each card

 int output = 0;
 int sum = 0;

 for (int i=0; i<num; i++)
 {
  cin >> cards[i];//store the card
  cards_num[i] = stoi(cards[i].substr(1));//stoi() can convert string to integer, and store the integer into card
   
  sum += cards_num[i];//get the sum
 }

 for (int i=0; i<num; i++)
 {
  if (cards_num[i] != -1)
  {
   int temp = 0;
   temp += count(cards_num[i], cards_num, num);//count the number of occurence in the array, count(begin, end, target)
   output += temp/2;
  }
 }

 cout<<output<<endl;
  
 cout<<sum<<endl;

 return 0;
}
