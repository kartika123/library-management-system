
#include "AuthSys.h"


int main()
{
    int n;
    char opt;

    AuthSys A1;

    L23: cout<<"\n\n\t\t\tWELCOME TO AUTHENTICATION SYSTEM";

         cout<<"\n\n\t[1]\tREGISTER ID";
         cout<<"\n\t[2]\tLOGIN";
         cout<<"\n\t[3]\tFORGOT PASSWORD";

         cout<<"\n\n\tSelect : ";
         cin>>n;

    switch(n)
    {
        case 1:  A1.IDSet();
                 cout<<"\n\nContinue (Y/N): ";
                 cin>>opt;
                 if(opt=='Y'||opt=='y')
                  {
                    goto L23;
                    break;
                  }
                 else
                  {
                    cout<<"\n\n\tThank You! For using Authentication System ";

                  }



        case 2: A1.IDLog();
                 cout<<"\n\nContinue (Y/N): ";
                 cin>>opt;
                 if(opt=='Y'||opt=='y')
                  {
                    goto L23;
                    break;
                  }
                 else
                  {
                    cout<<"\n\n\tThank You! For using Authentication System ";

                  }

        case 3: A1.IDRst();
                cout<<"\n\nContinue (Y/N): ";
                cin>>opt;
                 if(opt=='Y'||opt=='y')
                  {
                    goto L23;
                    break;
                  }
                 else
                  {
                    cout<<"\n\n\tThank You! For using Authentication System ";

                  }
        default:
                  cout<<"\n\tIncorrect Choice!";
                  cout<<"\n\n\tContinue (Y/N): ";
                  cin>>opt;
                  if(opt=='Y'||opt=='y')
                    {
                      goto L23;
                      break;
                    }
                 else
                  {
                    cout<<"\n\n\tThank You! For using Authentication System ";

                  }
                  return 0;
    }


}
