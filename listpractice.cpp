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