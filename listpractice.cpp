'''
#include<iostream.h>
#include<list.h>
Using namespace std;
int main ( ){
   List<int> list = { 55, 84, 38, 66, 67 };
   / / print the deque
   cout<< “ List: “;
   for( auto x = List.begin( ); x != List.end( ); ++x)
      cout<< *x << “ “;
   / / declaring insert( ) function
   list.insert( x, 6);
   / / printing new list after inserting new element
   cout<< “New list “;
   for( x=list.begin( ); x != list.end( ); ++x)
      cout<< “ “<<*x;
   return 0;
}
'''
#include<iostream>
using namespace std;
int main()
{
    int arr[10], tot=10, i, elem, j, found=0;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    return 0;
}