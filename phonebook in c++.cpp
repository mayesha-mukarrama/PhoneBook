#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;



class phonebook_Contacts
{
public:

    string FirstName;
    string LastName;
    string PhoneNumber;
    string EmailAddress;
    string Occupation;
    string Age;
    double BillAmount;


};



int main ()

{


    cout<<"\t\t\t\tA group project by"<<endl<<endl;


    cout<<"\t\t\t Mayesha Mukarrama.   ID - 151014060"<<endl;
    cout<<"\t\t\t Dilshad Jahan Rupa.  ID - 151014020"<<endl;
    cout<<"\t\t\t Afsana Islam Mimi.   ID - 151014025"<<endl;
    cout<<"\t\t\t Shuvo Das.           ID - 151014059"<<endl;
    cout<<endl<<endl;




    cout<<"\t\t ______   _                       _____              _ "<<endl;
    cout<<"\t\t|  ___ \\ | |                     |  __ \\            | |"<<endl;
    cout<<"\t\t| |   \\ \\| |                     | |  \\ \\           | |"<<endl;
    cout<<"\t\t| |__ / /| |__   ___  _ __   ____| |__/ /  ___  ___ | | __"<<endl;
    cout<<"\t\t| _____/ | ,_ \\ / _ \\| ;_ \\ / __ \\ |  \\ \\ / _ \\/ _ \\| |/ /"<<endl;
    cout<<"\t\t| |      | | | | <_> | | | |  ___/ |__/ /| <_>  <_> |   <"<<endl;
    cout<<"\t\t|_|      |_| |_|\\___/|_| |_|\\____|_____/  \\___/\\___/|_|\\_\\ "<<endl;
    cout<<endl;
    cout<<"\n\t\t\tWelcome to our project.\n"<<endl;
    system("pause");

    phonebook_Contacts phonebook[100];

    int n,DataChoice;

                             ///.....Menu selection.....
    do
    {


        cout<<"\t\t\t*****phonebook Menu*****";
        cout<<"\n\n\t\t\t(1)\tAdd Friend";
        cout<<"\n\t\t\t(2)\tDelete Friend";
        cout<<"\n\t\t\t(3)\tDisplay phonebook Contacts";
        cout<<"\n\t\t\t(4)\tSearch for Phone Number";
        cout<<"\n\t\t\t(5)\tFind a Random Friend";
        cout<<"\n\t\t\t(6)\tDelete All Contacts";
        cout<<"\n\t\t\t(7)\tEdit Contact";
        cout<<"\n\t\t\t(8)\tSort and Search By Last Name";
        cout<<"\n\t\t\t(9)\tSort and Search By First Name";
        cout<<"\n\t\t\t(10)\tExit phonebook"<<endl;
        cout<<"\n\nWhat would you like to do <1-10>? ";

        cin>>DataChoice;


        if (DataChoice == 1)
        {
                          ///.....Adding Friend and inputing bills.....

            int i;

            int regMinutes;
            int dayMinutes;
            int nightMinutes;
            int accountNum;
            int serviceType;
            double BillAmount;

            double rPerMinute = 0.20;
            double pPerMinuteDay = 0.10;
            double pPerMinuteNight = 0.05;
            double Vat = 10.10;
            cout<<"How many contacts do you want to add?"<<endl;
            cin>>n;

            for(i=0; i < n; i++ )
            {

                cout<<"\nFirst Name: ";
                cin>>phonebook[i].FirstName;
                cout<<"Last Name: ";
                cin>>phonebook[i].LastName;
                cout<<"Phone Number (XXX-XXX-XXXX): ";
                cin>>phonebook[i].PhoneNumber;
                cout<<"Email Address: ";
                cin>>phonebook[i].EmailAddress;
                cout<<"Occupation: ";
                cin>>phonebook[i].Occupation;
                cout<<"Age: ";
                cin>>phonebook[i].Age;

                         ///.....Calculating bill.....

                do
                {
                    cout << "Please enter your 6-digit account number: ";
                    cin >> accountNum;
                }
                while (accountNum >999999 || accountNum < 100000);


                cout << "Enter a service code: 1 (Regular), 2 (Premium): ";
                cin >> serviceType;
                cout << endl;

                        ///.....Calculating bill for regular.....

                if(serviceType == 1)
                {

                    cout << "Enter the number of minutes used: ";
                    cin >> regMinutes;
                    cout << endl;
                    cout << "Account Number: " << accountNum << endl;
                    cout << "Type of Service: " << serviceType << endl;
                    cout << "Number of minutes used (if regular): " << regMinutes << endl;

                    if (regMinutes < 50)
                    {
                        BillAmount = (regMinutes +50)  * rPerMinute + Vat;
                        cout<<" Regular bill = "<<BillAmount<<"Taka"<<endl;
                    }
                    else if(regMinutes == 50 )
                    {

                        BillAmount = regMinutes + Vat;
                        cout<<" Regular bill = "<<BillAmount<<"Taka"<<endl;
                    }
                    else if(regMinutes > 50 )
                    {

                        BillAmount = regMinutes * rPerMinute + 50 + Vat;
                        cout<<" Regular bill = "<<BillAmount<<"Taka"<<endl;
                    }

                }

                ///.....Calculating bill for premium.....

                if (serviceType == 2)
                {

                    cout << "Enter the minutes used for the day: ";
                    cin >> dayMinutes;
                    cout << endl;

                    cout << "Account Number: " << accountNum << endl;
                    cout << "Type of Service: " << serviceType << endl;
                    cout << "Number of minutes used during the day (if premium): " << dayMinutes << endl;


                    if (dayMinutes < 75 )
                    {

                        BillAmount = dayMinutes * pPerMinuteDay+ Vat+75;
                        cout<<" Day time bill = "<<BillAmount<<"Taka"<<endl;

                    }
                    else if(dayMinutes >= 75 && dayMinutes <= 100)
                    {

                        BillAmount = dayMinutes+75 + Vat;
                        cout<<" Day time bill = "<<BillAmount<<"Taka"<<endl;
                    }

                    else if (dayMinutes > 100)
                    {

                        BillAmount = dayMinutes  * pPerMinuteDay + Vat+100;
                        cout<<" Day time bill = "<<BillAmount<<"Taka"<<endl;
                    }

                    cout << "Enter the minutes used for the night: ";
                    cin >> nightMinutes;
                    cout << "Number of minutes used during the night (if premium): " << nightMinutes << endl;

                    if (nightMinutes < 75 )
                    {

                        BillAmount =nightMinutes * pPerMinuteNight+ Vat+75;
                        cout<<" Night time bill = "<<BillAmount<<"Taka"<<endl;

                    }
                    else if(nightMinutes >= 75 && nightMinutes <= 100)
                    {

                        BillAmount = nightMinutes+75 + Vat;
                        cout<<" Night time bill = "<<BillAmount<<"Taka"<<endl;
                    }

                    else if (nightMinutes > 100)
                    {

                        BillAmount = nightMinutes  * pPerMinuteNight + Vat+100;
                        cout<<" Night time bill = "<<BillAmount<<"Taka"<<endl;
                    }


                }

                cout<<"\n\tFriend successfully added to phonebook\n";

                cout<<phonebook[i].FirstName<<endl
                    <<phonebook[i].LastName<<endl
                    << phonebook[i].PhoneNumber<<endl
                    <<phonebook[i].EmailAddress<<endl
                    <<phonebook[i].Occupation<<endl
                    <<phonebook[i].Age<<endl;
                system("pause");
            }



        }

        if (DataChoice == 2)
        {
                     ///.....Delete one individual friend through searching.....

            int x;
            string deleteFirstName;
            string deleteLastName;
            string deletePhoneNumber;

            cout<<"\nFirst name: ";
            cin>> deleteFirstName;
            cout<<"\nLast name: ";
            cin>>deleteLastName;
            cout<<"\nPhone number: ";
            cin>>deletePhoneNumber;

            for(x = 0; x < n ; x++ )
            {

                if (deleteFirstName == phonebook[x].FirstName )
                {
                    if (deleteLastName == phonebook[x].LastName )
                    {
                        if(deletePhoneNumber == phonebook[x].PhoneNumber )
                        {

                            for (int i = x; i < n; i++)
                            {

                                phonebook[i].FirstName = phonebook[i+1].FirstName;
                                phonebook[i].LastName = phonebook[i+1].LastName;
                                phonebook[i].PhoneNumber = phonebook[i+1].PhoneNumber;
                                phonebook[i].Age = phonebook[i+1].Age;
                                phonebook[i].EmailAddress = phonebook[i+1].EmailAddress;
                                phonebook[i].Occupation = phonebook[i+1].Occupation;



                                cout<<"Record deleted from the phonebook.\n\n";
                            }

                        }

                    }
                }

            }
            system("pause");
            cout<<"The contact was not found.Please try again..."<<endl;

        }


        if (DataChoice == 3)
        {
                          ///.....Displaying All Entries.....

            int i;

            cout<<"\nphonebook Entries:\n\n ";

            for( i = 0; i < n; i++ )
            {

                cout<<endl<<"<"<< i+1<<">"<<endl;
                cout<<"First name: "<< phonebook[i].FirstName<<endl;
                cout<<"Last name: "<< phonebook[i].LastName<<endl;
                cout<<"Number: "<< phonebook[i].PhoneNumber<<endl;
                cout<<"Email: "<<phonebook[i].EmailAddress<<endl;
                cout<<"Age: "<<phonebook[i].Age<<endl;
                cout<<"Occupation: "<<phonebook[i].Occupation<<endl<<endl;

            }

            system("pause");

        }

        if (DataChoice == 4)
        {
                          ///.....Searching Number.....

            string TempFirstName;
            string TempLastName;
            string TempOccupation;
            string TempEmailAddress;
            int i;



            cout<<"\nPlease type the name of the friend you wish to find a number for.";
            cout<<"\n\nFirst Name: ";
            cin>>TempFirstName;
            cout<<"Last Name: ";
            cin>>TempLastName;
            cout<<"Email: ";
            cin>>TempEmailAddress;
            cout<<"Occupation: ";
            cin>>TempOccupation;
            for (i = 0; i < n; i++)
            {

                if (TempFirstName == phonebook[i].FirstName)
                {
                    if (TempLastName == phonebook[i].LastName)
                    {
                        if(TempEmailAddress == phonebook[i].EmailAddress)
                        {
                            if(TempOccupation == phonebook[i].Occupation)
                            {

                                cout<<"\n\tYour searched contact is given below...\n";
                                cout<<"First name "<< phonebook[i].FirstName<<endl;
                                cout<<"last name: "<<phonebook[i].LastName<<endl;
                                cout<<"Phone number : "<<phonebook[i].PhoneNumber<<endl;
                                cout<<"Email Address is "<<phonebook[i].EmailAddress<<endl;
                                cout<<"Age is "<<phonebook[i].Age<<endl;
                                cout<<"Occupation is "<<phonebook[i].Occupation;

                            }
                        }
                    }
                }
            }
            system("pause");

        }

        if (DataChoice == 5)
        {
                          ///.....Displaying one random friend.....

            int iRandom = 0;

            iRandom = rand() % n;
            int x = iRandom;


            srand (time(NULL));


            cout<<"Your random friend is: "<< phonebook[x].FirstName<<endl;
            cout<<"Phone number is: "<< phonebook[x].PhoneNumber<<endl;
            cout<<"Email Address is: "<< phonebook[x].EmailAddress<<endl;
            cout<<"Age is: "<< phonebook[x].Age<<endl;
            cout<<"Occupation is: "<< phonebook[x].Occupation<<endl<<endl;



        }

        if (DataChoice == 6)
        {
                          ///.....Deleting All Entries.....

            int i;

            for ( i = 0; i < n+1; i++ )
            {
                phonebook[i].FirstName = phonebook[i+1].FirstName;
                phonebook[i].LastName = phonebook[i+1].LastName;
                phonebook[i].PhoneNumber = phonebook[i+1].PhoneNumber;
                phonebook[i].EmailAddress = phonebook[i+1].EmailAddress;
                phonebook[i].Age = phonebook[i+1].Age;
                phonebook[i].Occupation = phonebook[i+1].Occupation;
                n--;
            }

            cout<<"\n\tAll Contacts have been deleted.\n\n";


        }

        if(DataChoice == 7)
        {
                  ///.....Editing Number.....

            int iEdit,x;
            int i=0;

            string TempFirstName;
            string TempLastName;
            string TempEmailAddress;


            cout<<"\nPlease type the name of the friend you wish to find and edit a number for.";
            cout<<"\n\nFirst Name: ";
            cin>>TempFirstName;
            cout<<"Last Name: ";
            cin>>TempLastName;
            cout<<"Email: ";
            cin>>TempEmailAddress;

            for (x = 0; x < n; x++)
            {
                if (TempFirstName == phonebook[x].FirstName)
                {
                    if (TempLastName == phonebook[x].LastName)
                    {
                        if(TempEmailAddress == phonebook[x].EmailAddress)
                        {


                            cout<< "First name "<<phonebook[x].FirstName<<endl;
                            cout<< "Last name "<<phonebook[x].LastName<<endl;
                            cout<<"Phone number "<< phonebook[x].PhoneNumber<<endl;
                            cout<<"Email Address is "<<phonebook[x].EmailAddress<<endl;
                            cout<<"Age is "<<phonebook[x].Age<<endl;
                            cout<<"Occupation is "<<phonebook[x].Occupation<<endl;


                        }
                    }
                }
            }

            do
            {

                cout<<"\n\t\tWhich information you want to edit ? \n";



                cout<<"\n1. First Name. \n";
                cout<<"2. Last Name. \n";
                cout<<"3. Phone Number (XXX-XXX-XXXX). \n";
                cout<<"4. Email Address. \n";
                cout<<"5. Occupation. \n";
                cout<<"6. Age. \n";
                cout<<"7. Edit completed. \n";
                cout<<"\n\twhat would you want to edit <1-7>\n\n";

                cin>>iEdit;
                if(iEdit == 1)

                {
                    cout<<"\nFirst Name: ";
                    cin>>phonebook[i].FirstName;


                }
                if(iEdit == 2)
                {

                    cout<<"Last Name: ";
                    cin>>phonebook[i].LastName;

                }
                if(iEdit == 3)
                {

                    cout<<"Phone Number (XXX-XXX-XXXX): ";
                    cin>>phonebook[i].PhoneNumber;

                }
                if(iEdit == 4)
                {

                    cout<<"Email Address: ";
                    cin>>phonebook[i].EmailAddress;

                }
                if(iEdit == 5)
                {
                    cout<<"Occupation: ";
                    cin>>phonebook[i].Occupation;
                }
                if(iEdit == 6)
                {
                    cout<<"Age: ";
                    cin>>phonebook[i].Age;
                }

                if(iEdit == 7)
                {

                    cout<<"\n\tEdited successfully to phonebook\n\n"<<endl
                        <<"\nYour Edited contact is given below...  "<<endl
                        <<"\nFirst Name: "<<phonebook[i].FirstName<<endl
                        <<"Last Name: "<< phonebook[i].LastName<<endl
                        <<"Phone Number (XXX-XXX-XXXX): "<< phonebook[i].PhoneNumber<<endl
                        <<"Email Address: "<<phonebook[i].EmailAddress<<endl
                        <<"Occupation: "<< phonebook[i].Occupation<<endl
                        <<"Age: "<< phonebook[i].Age<<endl;

                    cout<<"\n\t Edit completed.Thank you.\n\n"
                        <<"please press 8 or more than 8 to continue...\n"
                        <<endl;


                }
            }
            while(iEdit < 8 );


        }
        if(DataChoice == 8)
        {
                     ///.....Sorting list by last name and finding detail of entries from that list.....

            int i;
            int j;
            int isearch;
            string temp;
            string iname;


            cout<<"\nYour contacts:\n";

            for (i = 0; i < n-1; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (phonebook[i].LastName >  phonebook[j].LastName)
                    {
                        temp = phonebook[i].LastName;
                        phonebook[i].LastName = phonebook[j].LastName;
                        phonebook[j].LastName = temp;
                    }

                }
            }

            cout<<"\nYour friends in Alphabetical Order by Last Name:\n\n";

            for(i=0; i<= n-1; i++)
            {

                cout<< i+1<<". Name: "<<phonebook[i].LastName<<endl;

            }



            for (i = 0; i < n-1; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (phonebook[i].LastName <  phonebook[j].LastName)
                    {
                        temp = phonebook[i].LastName;
                        phonebook[i].LastName = phonebook[j].LastName;
                        phonebook[j].LastName = temp;
                    }

                }
            }


            cout<<"Do you want to search any contact's detail from this list?"<<endl
                <<"Please enter your choice 1(Yes) or 2(No)."<<endl;

            cin>>isearch;
            do
            {
                if(isearch == 1)
                {
                    cout<<"which contact's detail you want to know?"<<endl;
                    cin>>iname;
                    for (i = 0; i < n; i++)
                    {


                        if (iname == phonebook[i].LastName)
                        {
                            cout<<"\n\tYour searched contact is given below...\n";
                            cout<<"First name "<< phonebook[i].FirstName<<endl;
                            cout<<"last name: "<<phonebook[i].LastName<<endl;
                            cout<<"Phone number : "<<phonebook[i].PhoneNumber<<endl;
                            cout<<"Email Address is "<<phonebook[i].EmailAddress<<endl;
                            cout<<"Age is "<<phonebook[i].Age<<endl;
                            cout<<"Occupation is "<<phonebook[i].Occupation<<endl;

                        }



                    }


                }
            }
            while(isearch > 2);


        }

        if(DataChoice == 9)
        {
                          ///.....Sorting list by last name and finding detail of entries from that list.....


            int i;
            int j;
            int isearch;
            string iname;
            string temp;


            cout<<"\nYour contacts:\n";

            for (i = 0; i < n-1; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (phonebook[i].FirstName >  phonebook[j].FirstName)
                    {
                        temp = phonebook[i].FirstName;
                        phonebook[i].FirstName = phonebook[j].FirstName;
                        phonebook[j].FirstName = temp;
                    }

                }
            }


            cout<<"\nYour friends in Alphabetical Order by First Name:\n\n";

            for(i=0; i<= n-1; i++)
            {

                cout<< i+1<<". Name: "<<phonebook[i].FirstName<<endl;

            }
            for (i = 0; i < n-1; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (phonebook[i].FirstName <  phonebook[j].FirstName)
                    {
                        temp = phonebook[i].FirstName;
                        phonebook[i].FirstName = phonebook[j].FirstName;
                        phonebook[j].FirstName = temp;
                    }

                }
            }


            cout<<"Do you want to search any contact's detail from this list?"<<endl
                <<"Please enter your choice 1(Yes) or 2(No)."<<endl;

            cin>>isearch;

            do
            {
                if(isearch == 1)
                {
                    cout<<"which contact's detail you want to know?"<<endl;
                    cin>>iname;
                    for (i = 0; i < n; i++)
                    {


                        if (iname == phonebook[i].FirstName)
                        {
                            cout<<"\n\tYour searched contact is given below...\n";
                            cout<<"First name "<< phonebook[i].FirstName<<endl;
                            cout<<"last name: "<<phonebook[i].LastName<<endl;
                            cout<<"Phone number : "<<phonebook[i].PhoneNumber<<endl;
                            cout<<"Email Address is "<<phonebook[i].EmailAddress<<endl;
                            cout<<"Age is "<<phonebook[i].Age<<endl;
                            cout<<"Occupation is "<<phonebook[i].Occupation<<endl;

                        }



                    }


                }
            }
            while(isearch > 2);




        }
        if (DataChoice == 10)
        {

                               ///.....Closing this program.....

            cout<<"\nYou have chosen to exit the phonebook.\n";
            cout<<"The program will now exit.\n\n\t\tThank you for choosing our program.\n\n\n";
            system("pause");

            return 0;


        }
    }
    while (DataChoice < 11);


}




