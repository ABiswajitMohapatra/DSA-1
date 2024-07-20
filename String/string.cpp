#include<iostream>
using namespace std;
int main(){

// string str;
// cout<<"enter a string: ";
// //cin>>str;  //but there is a problem it will print the first word 
// // cout<<str<<endl;

// // so can use getline:
// getline(cin,str);
// cout<<str<<endl;


// it works as array index wise :

// string x;
// cin>>x;
// cout<<x<<endl;
// cout<<x[0]<<endl;
// cout<<x[4]<<endl;
// x[0]='c';
// x[4]='x';
// cout<<x<<endl;
// cout<<x.length()<<endl;


// WE CAN ALSO PRINT STRING LIKE BELOW :'

/*
string str=" hey how are you";
//cout<<str;
for(int i=0;i<str.length();i++){
    cout<<str[i];
}

*/
 //CALCULATE THE NUMBER OF VOWELS IN THE STRING:
/*
 string str=" hey how are you";
 int count=0;
 for(int i=0;i<str.length();i++){
    if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
        count+=1;
    }
 }
 cout<<"the number of vowels is: "<<count<<endl;

 */

//INPUT A STRING FROM THE USER AND PRINT "A" IN THE EVEN INDEX ?
/*
string str;
cout<<"enter a string";
getline(cin,str);
for(int i=0;i<str.length();i++){
    if(i%2==0){
        str[i]='a';
    }
    cout<<str[i];
}
*/

//INBUILT FUNCTION IN STRING:
/*
string str="raghav";
str.push_back('m');
// it will add at the end of the string;
cout<<str<<endl;
str.pop_back();
//it will remove from the end of the string
cout<<str<<endl;
str.append("mohapatra");
//it will add a word at the last of the string
cout<<str<<endl;

cout<<str.length()<<endl;
// str.clear();
// //it will clear or empty the whole string;
// cout<<str.length()<<endl;

//(+OPERATOR)-IT WILL ADD TWO STRINGS IT MAY BE FIRST OR LAST OF THE STRING:
str="bbb"+str;
cout<<str<<endl;
str=str+"mmm";
cout<<str<<endl;
*/
//REVERS A STRING:

//string m="biswajit";
// for(int i=m.length();i>=0;i--){
//     cout<<m[i];
// }

// another method:

// string str;
// cout << "Enter a string: ";
//     getline(cin, str);

//     int start = 0;
//     int end = str.length() - 1;

//     while (start < end) {
//         // Swap characters at start and end positions
//         swap(str[start], str[end]);
        
//         // Move indices towards the center
//         start++;
//         end--;
//     }
// cout << "Reversed string: " << str << endl;








}