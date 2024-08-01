#include<iostream>
#include<vector>
using namespace std;
  int main()
{
  int n ; 
  int m ;
  cin>>n>>m;
   vector<vector<int> >arr( n , vector<int>( m , 0));
  for( int i=0; i<n; i++)
    {
   for( int j=0;j<m ;j++)
   {
     cin>>arr[i][j];
   }
    }
   vector<vector<int> >ans( m , vector<int>( n, 0));
  for( int i=0; i<n; i++)
  for( int j=0;j<m; j++)
    ans[j][i]=arr[i][j];


  for( int i=0;i<n;i++){
    for(int j=0;j<m ; j++)
      {
        cout<<ans[i][j]<<" ";
      }
  cout<<endl;}
  cout<<endl;
   
}
