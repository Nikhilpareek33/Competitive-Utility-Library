#include<bits/stdc++.h> 
using namespace std; 
  
// Define the number of runs for the test data 
// generated 
#define RUN 10 
  
// Define the range of the test data generated 
#define MAX 4 
  
// Define the maximum number of array elements 
#define MAXNUM 6 
  
int main() 
{ 
    // Uncomment the below line to store 
    // the test data in a file 
    //freopen ("Test_Cases_Random_Array.in", "w", stdout); 
  
    //For random values every time 
    srand(time(NULL)); 
  	cout<<RUN<<endl;
    for (int i=1; i<=RUN; i++) 
    { 
        // Number of array elements 
        int NUM = 1 + rand() % MAXNUM; 
  
        // First print the number of array elements 
        printf("%d\n", NUM); 
  
        // Then print the array elements separated  
        // by space 
        for (int j=1; j<=NUM; j++) 
            printf("%d ", rand() % MAX+1); 
  
        printf("\n");
		for (int j=1; j<=NUM; j++) 
            printf("%d ", rand() % MAX+1); 
  		cout<<endl; 
    } 
  
    // Uncomment the below line to store 
    // the test data in a file 
    //fclose(stdout); 
    return(0); 
} 
