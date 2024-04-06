/*
Task description
An array A consisting of N integers is given. Rotation of the array means that each element is shifted right by one index, and the last element of the array is moved to the first place. For example, the rotation of array A = [3, 8, 9, 7, 6] is [6, 3, 8, 9, 7] (elements are shifted right by one index and 6 is moved to the first place).

The goal is to rotate array A K times; that is, each element of A will be shifted to the right K times.

Write a function:

vector<int> solution(vector<int> &A, int K);

that, given an array A consisting of N integers and an integer K, returns the array A rotated K times.

For example, given

    A = [3, 8, 9, 7, 6]
    K = 3
the function should return [9, 7, 6, 3, 8]. Three rotations were made:

    [3, 8, 9, 7, 6] -> [6, 3, 8, 9, 7]
    [6, 3, 8, 9, 7] -> [7, 6, 3, 8, 9]
    [7, 6, 3, 8, 9] -> [9, 7, 6, 3, 8]
For another example, given

    A = [0, 0, 0]
    K = 1
the function should return [0, 0, 0]

Given

    A = [1, 2, 3, 4]
    K = 4
the function should return [1, 2, 3, 4]

Assume that:

N and K are integers within the range [0..100];
each element of array A is an integer within the range [−1,000..1,000].
In your solution, focus on correctness. The performance of your solution will not be the focus of the assessment.

Copyright 2009–2024 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.

*/
//refined version and this is the best way to implement the rotation of a vector 
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
    vector<int> index; 
    int size=A.size();
    for(int i=0; i<size; i++){
        index.push_back((i+K-1)%size); //only rotate the index of vector A
    }
    return index; 
}

int main() {   
   vector<int> A = {3, 8, 9, 7, 6};
   int K = 3;
   vector<int> result;
   result=solution(A,K);
   for(int i=0; i<A.size(); i++)
   {
       cout<<A[result[i]]<<" ";
   }
   cout<<endl;
    return 0;
}

/*
//original version using vector copy, that is not good way
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
    vector<int> index; 
    int size=A.size();
     vector<int> result(size); 
    for(int i=0; i<size; i++){       
        index.push_back((i+K-1)%size); //index rotation
        result[i]=A[(i+K-1)%size];      //copy element into result vector
    }    
    return result; 
}

int main() {
   vector<int> A = {3, 8, 9, 7, 6};
   int K = 3;
   vector<int> result;
   result=solution(A,K);
   for(auto elm:result){
       cout<< elm <<" "; 
   }
   cout<<endl;
}
    return 0;
}
*/


