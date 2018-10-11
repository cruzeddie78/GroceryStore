#include<iostream>
#include<string>
#include<vector> 
using namespace std;
// Eddie Alexis Cruz
int main()
{
  vector <string> list ; //array of 5 strings
  int numItems = 0;
  char input;
  string item;
  int index=0;

do
{  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  if (list.size()>0)
  {cout<< "\n (D)elete last item";
  }

  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
   if (input=='A' || input== 'a')
{ cout<<"What is the item?"<<endl;
  cin>>item;

 list.push_back(item);

}
  if(input=='D' || input=='d')
  {
    cout<< list[list.size()-1]<<" was deleted from the list. \n";

    list.pop_back();
    
  }

}while ( input!='q' && input!='Q' );
  

cout<<"==ITEMS TO BUY=="<<endl;
if (list.size()==0)
 { cout<<"No items to buy"<<endl;
  }
 

 
for (index ; index< list.size() ; index++)
{
        cout<<list[index]<<endl;
}



return 0;
  
}
