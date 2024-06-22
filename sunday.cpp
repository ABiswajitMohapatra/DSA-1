//FIND THE LARGEST ELEMENT IN THE ARRAY:
/*
#include <iostream>
using namespace std;
int largest(int A[],int size){
    int max=A[0];
    for(int i=0;i<size;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}
int main() {
    cout<<"Enter your array size:";
    int size;
    cin>>size;
    int A[size];
    cout<<"Enter elements of array:";
    for (int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"Largest element is:"<<largest(A,size);
    
}
*/


//2)FIND THE SECOND LARGEST ELEMENT IN THE ARRAY:

/*
#include <iostream>
using namespace std;
int SecLar(int A[],int size){
int max1=-1;
int max2=-1;
for (int i=0;i<size;i++){
    if(A[i]>max1){
        max2=max1;
        max1=A[i];
    }else if (A[i]>max2){
        max2=A[i];
    }
}
return max2;
}
int main() {
    
   cout<<"Enter your array size:";
    int size;
    cin>>size;
    int A[size];
    cout<<"Enter elements of array:";
    for (int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"Sec Largest element is:"<<SecLar(A,size);

}
*/

// UNIQUEVALUE IN THE ARRAY:
/*
#include <iostream>
using namespace std;
void Unique(int A[],int size){
    int i=0;
    int count=0;
    for(int j=i+1;j<size;j++){
        if(A[i]!=A[j]){
            i++;
            A[i]=A[j];
            count++;
        }
    }
    for(int i=0;i<count;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
   cout<<"Enter your array size:";
    int size;
    cin>>size;
    int A[size];
    cout<<"Enter elements of array:";
    for (int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"Unique elements are:";
    Unique(A,size);
}
*/

//DUPLICATE VALUE IN THE ARRAY:

/*
#include <iostream>
using namespace std;
void Duplicate(int A[],int size){
    bool isdup=true;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(A[i]==A[j]){
                cout<<A[i]<<" "<<endl;;
                isdup=false;
                break;
            }
        }
    }
    if(!isdup){
cout<<"Duplicate available"<<endl;
    }else{
        cout<<"There is no duplicacy"<<endl;
    }
}
int main() {
    
    cout<<"Enter your array size:";
    int size;
    cin>>size;
    int A[size];
    cout<<"Enter elements of array:";
    for (int i=0;i<size;i++){
        cin>>A[i];
    }
    //cout<<"Duplicate elements are:";
    Duplicate(A,size);
}

*/


//PAIR SUM:

/*
#include <iostream>
using namespace std;
void  sum(int A[],int size,int key){
    bool found=false;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(A[i]+A[j]==key){
               cout<<A[i]<<" "<<A[j];
               found=true;
            }
        }
    }
    if(!found){
        cout<<"nehi mila"<<endl;
}
}
int main() {
    cout<<"Enter your array size:";
    int size;
    cin>>size;
    cout<<"Enter your key:";
    int key;
    cin>>key;
    int A[size];
    cout<<"Enter elements of array:";
    for (int i=0;i<size;i++){
        cin>>A[i];
    }
    sum(A,size,key);
}
*/


//TRIPLE SUM
/*
#include <iostream>
using namespace std;
void  sum(int A[],int size,int key){
    bool found=false;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
            if(A[i]+A[j]+A[k]==key){
               cout<<A[i]<<" ,"<<A[j]<<", "<<A[k]<<" ";
               found=true;
            }
        }
    }
    }
    if(!found){
        cout<<"nehi mila"<<endl;
}
}
int main() {
    cout<<"Enter your array size:";
    int size;
    cin>>size;
    cout<<"Enter your key:";
    int key;
    cin>>key;
    int A[size];
    cout<<"Enter elements of array:";
    for (int i=0;i<size;i++){
        cin>>A[i];
    }
    sum(A,size,key);
}
*/

//INTERSECTION:

/*
#include <iostream>
using namespace std;
void  Common(int A1[],int size1,int A2[] ,int size2){
    cout<<"common elents are:";
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(A1[i]==A2[j]){
                
               cout<<A1[i]<<endl;
              
            }
        }
       
    }
    
}

int main() {
    cout<<"Enter your array1 size1:";
    int size1;
    cin>>size1;
     int A1[size1];
    cout<<"Enter elements of array_1:";
    for (int i=0;i<size1;i++){
        cin>>A1[i];
    }
    cout<<"Enter your array2 size2:";
    int size2;
    cin>>size2;
    
    int A2[size2];
    cout<<"Enter elements of array_2:";
    for (int i=0;i<size2;i++){
        cin>>A2[i];
    }
    Common(A1,size1,A2,size2);
}
*/

//Find occurance unique of elemets in array:
/*
#include <iostream>
using namespace std;
void Unique(int A[],int size){
    int i=0;
    int count=0;
    int k=0;
    for(int j=i+1;j<size;j++){
        if(A[i]!=A[j]){
            i++;
            A[i]=A[j]; 
        }
    }
    for(int i=0;i<size ;i++){
        cout<<i<<endl;
    }
    
}
int main() {
   cout<<"Enter your array size:";
    int size;
    cin>>size;
    int A[size];
    cout<<"Enter elements of array:";
    for (int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"Unique elements are:";
    Unique(A,size);
}
*/


//SORT ZERO AND ONE:
/*
#include <iostream>
using namespace std;
void  Zero(int A1[],int size1){
    cout<<"sort elements are:";
    int count_zero=0;
    for(int i=0;i<size1;i++){
            if(A1[i]==0){
                count_zero++;
            }
        }
        for(int i=0;i<count_zero;i++){
            A1[i]=0;
        }
        for(int i=count_zero;i<size1;i++){
            A1[i]=1;;
        }
        for(int i=0;i<size1;i++){
            cout<<A1[i]<<" ";
        }
}
int main() {
    cout<<"Enter your array1 size1:";
    int size1;
    cin>>size1;
     int A1[size1];
    cout<<"Enter elements of array_1:";
    for (int i=0;i<size1;i++){
        cin>>A1[i];
    }
    Zero(A1,size1);
}
*/

#include <iostream>
using namespace std;
void  Sot(int A1[],int size1){
    cout<<"Reverse elements are:";
    int start=0;
    int end=size1-1;
    while(start<end){
        int temp=A1[start];
        A1[start]=A1[end];
        A1[end]=temp;
        start++;
        end--;
    }
      for(int i=0;i<size1;i++){
        cout<<A1[i]<<" ";
      }      
}

int main() {
    cout<<"Enter your array1 size1:";
    int size1;
    cin>>size1;
     int A1[size1];
    cout<<"Enter elements of array_1:";
    for (int i=0;i<size1;i++){
        cin>>A1[i];
    }
    Sot(A1,size1);
}
