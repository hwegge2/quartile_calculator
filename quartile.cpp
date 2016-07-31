#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
 vector<int> set;
 double x, bottom_half, top_half;
 int set_counter = 0;

 cout<<"Enter a set of integers each followed by a space. Type \"end\" when you are finished: ";
 while (std::cin >> x)	//reads the next value into the vector until "end" is typed
  set.push_back(x);
 sort(set.begin(),set.end());
 typedef std::vector<double>::size_type vector_size;

 vector_size size = set.size();




// find the size of the lower and upper sets
   if (vector_size half_size = size % 4 == 0)	//For vectors that can be evenly broken down into quartiles
   {
   	bottom_half = size/2;
   	top_half = size/2;
   }
      if ((size)%4 != 0 && (size%2) == 0 ) 		//sets that are not evenly broken down but have a mod 0.
   {
   	bottom_half = size/2 + 1;
    top_half = size/2 - 1;
   }
         if ((size)%4 != 0 && (size%2) != 0 ) 		//sets that are not evenly broken and don't have a mod 0.
   {
   	bottom_half = size/2 + 1;
    top_half = size/2 - 1;
   }

   cout << endl <<"Q1\[";		//This displays quartile 1
   int count = bottom_half;
	for (int i=0; i < bottom_half/2; i++)
    {cout << " " << set[i];
     set_counter++;
    }
    cout<<"\]"<<endl;

       cout << endl <<"Q2\[";	//Quartile 2 varies on which type argument was reached above

	for (int i=0; i < bottom_half/2; i++)
    {cout << " " << set[set_counter];
     ++set_counter;
    }
    cout<<"\]"<<endl;

           cout << endl <<"Q3\[";


if ((size)%4 != 0 && (size%2) == 0 )
   {


	for (int i=0; i < top_half/2; i++)
    {cout << " " << set[set_counter];
     set_counter++;
    }
    cout<<"\]"<<endl;
   }
   if (vector_size half_size = size % 4 == 0)
   {


	for (int i=0; i < top_half/2; i++)
    {cout << " " << set[set_counter];
     set_counter++;
    }
    cout<<"\]"<<endl;
   }

    if ((size)%4 != 0 && (size%2) != 0 )
	{


   {for (int i=-1; i < top_half/2; i++)
    {cout << " " << set[set_counter];
     ++set_counter;
    }
    cout<<"\]"<<endl;
   }}


	cout << endl <<"Q4\[";		//Q4 outputs only after the adjustment has been made in Q3

	for (int i=0; i < top_half/2; i++)
    {cout << " " << set[set_counter];
     ++set_counter;
    }
    cout<<"\]"<<endl;

  return 0;
}

