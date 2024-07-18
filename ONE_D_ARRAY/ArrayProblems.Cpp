#include <iostream>
using namespace std;

int main()
{
    // SUM OF ALL THE ELEMENT IN THE ARRAY:
    /*
    int A[]={12,34,21,22,11,2};
    int sum=0;
    int Mul=1;
    for(int i=0;i<=5;i++){
        sum+=A[i];
        Mul*=A[i];
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"MUl is: "<<Mul<<endl;
    */
    // MAXIMUM  AND MINIMUM VALUE OUT OF THESE ELEMENTS:
    int M[] = {90, 34, 25, 123, 67};
    int max = M[0];
    for (int i = 0; i < 5; i++)
    {
        if (M[i] > max)
        {
            max = M[i];
        }
    }
    cout << max << endl;
    // INPUT FROM THE USER AND PRINT SQUARE OF THESE ELEMENT:
    /*
   int N[4];
   for (int i=0;i<4;i++){
       cin>>N[i];
   }
   cout<<"Square :"<<endl;
   for(int i=0;i<4;i++){
       cout<<N[i]*N[i]<<endl;
   }
   */
    // GIVEN AN ARRAY OF INTEGERS,CHANGE THE VALUE OF ALL
    // ODD INDEXED ELEMENTS TO ITS SECOND MULTIPLE AND INCREMENT ALL EVEN VALUE
    // BY 10?
    // int A[]={2,3,4,5,6,7};
    // for(int i=0;i<6;i++){
    //     if(i%2!=0){
    //         cout<<"Square:"<<A[i]*A[i]<<endl;
    //     }else{
    //         cout<<"Add by 10:"<<A[i]+10;
    //     }
    // }

    ////FIND THE DIFFERENCE BETWEEN SUM OF EVEN INDEXES AND ODD INDEXES?
    /*
    int arr[]={2,3,4,5,6,7,8,9};
    int evenSum=0;
    int oddSum=0;
    for(int i=0;i<8;i++){
        if(i%2==0){
            evenSum+=arr[i];
        }else{
            oddSum+=arr[i];
        }
    }
    int dif=evenSum-oddSum;
    cout<<"Difference:"<<dif<<endl;
    */

    // Find the second max number in the list:
    /*
    int A[]={12,34,56,89};
    int max1=A[0];
    int max2=A[0];
    for(int i=0;i<6;i++){
        if(A[i]>max1){
            max2=max1;
            max1=A[i];
        }
        else if(A[i]>max2){
            max2=A[i];
        }
    }
    cout<<max2<<endl;
    */
    // diffrence beyween even and odd :

    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 12};
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }
    int dif = evenSum - oddSum;
    cout << "Difference:" << dif << endl;

    // Copy the element in reverse order:
    int A[] = {12, 78, 55, 66, 90};
    int Copy[5];
    for (int i = sizeof(A[0]); i >= 0; i--)
    {
        Copy[i] = A[i];
    }
    for (int i = 0; i < sizeof(A[0]); i++)
    {
        cout << Copy[i] << endl;
    }
}