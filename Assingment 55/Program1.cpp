#include<iostream>
using namespace std;

int main()
{
	int A[10][10], B[10][10], mult[10][10], r1, c1, r2, c2;

	cout<<"Enter rows and columns for first matrix :"<<endl;
	cin>> r1 >> c1;
	cout<<"Enter rows and columns for second matrix :"<<endl;
	cin>> r2 >> c2;

	cout<<endl<<"Enter elements of matrix 1 :"<<endl;
	for(int i = 0; i < r1; i++)
		for(int j = 0; j < r2; j++){
			cin>> A[i][j];
		}

	cout<<endl<<"Enter elements of matrix 2 :"<<endl;
	for(int i = 0; i < r1; i++)
		for(int j = 0; j < r2; j++){
			cin>> B[i][j];
		}

	/*for(int i = 0; i < r1; i++)
		for(int j = 0; j < c2; j++){
			mult[i][j] = 0;
		}*/

	for(int i = 0; i < r1; i++)
		for(int j = 0; j < c2; j++)
			for(int k = 0; k < c1; k++){
				mult[i][j] = A[i][j] * B[k][j];
			}

	cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < r1; ++i)
    	for(int j = 0; j < c2; ++j){
       		cout<< mult[i][j]<<" ";
       		if(j == c2-1){
       			cout<<endl;
       		}
    	}

    return 0;

}