# include <iostream>
using namespace std;


int main()
{
//Some variables
int A[5] = {1,2,3,4,5};
int x = 3;
int n = sizeof(A)/sizeof(A[0]);


//loop through array
for(int i = 0; i < n; i++)
{ 
  //stop when we got a match
  if(A[i]==x)
  {

      break;

  }
  //copy the index of match to a new loop variable
  //copy the next element to current index position
  for(int j = i; j < n; j++){
      A[j] = A[j+1];
  }

}
for(int i =0; i < n; i++)
{
  cout << A[i] << endl;

}

return 0;

}
