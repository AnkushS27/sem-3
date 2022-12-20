#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define size 5

int main()
{
    int arr[size],R=-1,F=0,te=0,ch,n,i,x;

    for(;;)		// An infinite loop
    {
        // system("cls");	 for clearing the screen
        cout<<"1. Add\n";
        cout<<"2. Delete\n";
        cout<<"3. Display\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                if(te==size)
                {
                    cout<<"Queue is full";
                    getch();	// pause the loop to see the message
                }
                else
                {
                    cout<<"Enter a number ";
                    cin>>n;
                    R=(R+1)%size;
                    arr[R]=n;
                    te=te+1;
                }
                break;

            case 2:
                if(te==0)
                {
                    cout<<"Queue is empty";
                    getch();	// pause the loop to see the message
                }
                else
                {
                    cout<<"Number Deleted = "<<arr[F];
                    F=(F+1)%size;
                    te=te-1;
                    getch();	// pause the loop to see the number
                }
                break;

            case 3:
                if(te==0)
                {
                    cout<<"Queue is empty";
                    getch();	// pause the loop to see the message
                }
                else
                {
                    x=F;
                    for(i=1; i<=te; i++)
                    {
                        cout<<arr[x]<<" ";
                        x=(x+1)%size;
                    }
                    getch();	// pause the loop to see the numbers
                }
                break;

            case 4:
                exit(0);
                break;

            default:
                cout<<"Wrong Choice";
                getch();	// pause the loop to see the message
        }

        cout<<"\n\n*************************\n\n";
    }
    return 0;
}