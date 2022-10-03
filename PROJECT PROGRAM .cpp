#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdio>
#include <string.h>
using namespace std;
class user
{
public:
        void reg ();
        void login ();
        int phreg;
        void showinfo();
        void modinfo();
        void cancel_registration();
        void BMI();
        void reqbg_donor();
        void reqorg_donor();
        void SearchPhysician();
        void regPosthum();
        void loginfo();
        string name,cn,ui,up,age,sex,height,weight,bg,loc,disease,spl,cc,info,ID;
        int onset,p10op;
        user();
        void text_animation(char a[100000])
       {
       int i;
       double k;
       string z;
       for (i=0;a[i]!='\0';i++)
       {
        for(k=0;k<1000000;k++);
        cout<<a[i];

       }

       }

};
class resource
{
    protected:
        void posthumous_list(string);
        void blood_req_list(string);
        void org_req_list(string);
        void physician_list(string);
        void bdl(string);
        void vollist(string);
        void helpdesk(string);
        void blooddonation();
        void organdonation(string);
public:
string a,linea,b,lineb,c,linec,d,lined,linee,e,s,linef,f,p,v;
string name,cn,ui,up,age,sex,height,weight,bg,loc,disease,spl,cc,mail;
void ret_posthumous_list();
void ret_blood_req_list();
void ret_org_req_list();
void ret_physician_list();
void ret_bdl();
void ret_helpdesk();
void updtBdonor();
void updtOdonor();
void hospt_infoupdt();
void ret_vollist();
void BloodRecList();
void BloodDonorList();
void OrganRecList();
void OrganDonorList();
void text_animation(char a[100000])
       {
       int i;
       double k;
       string z;
       for (i=0;a[i]!='\0';i++)
       {
        for(k=0;k<1000000;k++);
        cout<<a[i];

       }

       }



};
class volunteer: public resource
{
public:
string vi,vp,id,pass,i,p,s,Uid,v_id;
 string name,cn,ui,up,age,sex,height,weight,bg,loc,disease,spl,cc,info,ID,vinfo;
        int onset;
void volsignup();

void volsignin();
void text_animation(char a[100000])
       {
       int i;
       double k;
       string z;
       for (i=0;a[i]!='\0';i++)
       {
        for(k=0;k<1000000;k++);
        cout<<a[i];

       }

       }

};
class admin : public resource
{
public:
void adminlogin();
void text_animation(char a[100000])
       {
       int i;
       double k;
       string z;
       for (i=0;a[i]!='\0';i++)
       {
        for(k=0;k<1000000;k++);
        cout<<a[i];

       }

       }

};
user::user()
{
cout<<endl<<endl<<endl<<endl<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(219)<<char(219)<<char(187)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(187)                <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)                  <<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)              <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)<<char(32)<<char(32)                     <<char(219)<<char(219)<<char(187)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(187)        <<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(219)<<char(219)<<char(187)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)                <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)                  <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(219)<<char(219)<<char(187)              <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(219)<<char(219)<<char(187)<<char(32)<<char(32)                     <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)        <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(200)<<char(219)<<char(219)<<char(187)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(219)<<char(219)<<char(201)<<char(188)                <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)<<char(176)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)<<char(176)                  <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)              <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(188)<<char(32)<<char(32)                     <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)        <<char(200)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(205)<<char(219)<<char(219)<<char(219)<<char(219)<<char(186)<<char(176)                <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(188)<<char(176)<<char(176)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(188)<<char(176)<<char(176)                  <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)              <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(219)<<char(219)<<char(187)<<char(32)<<char(32)                     <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)        <<char(176)<<char(200)<<char(205)<<char(205)<<char(205)<<char(219)<<char(219)<<char(187)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(176)<<char(200)<<char(219)<<char(219)<<char(201)<<char(188)<<char(176)<<char(200)<<char(219)<<char(219)<<char(201)<<char(188)<<char(176)                <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)                  <<char(200)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(188)              <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)<<char(32)<<char(32)                     <<char(200)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(188)        <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(188)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(176)<<char(176)<<char(200)<<char(205)<<char(188)<<char(176)<<char(176)<<char(176)<<char(200)<<char(205)<<char(188)<<char(176)<<char(176)                <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(32)<<char(32)                    <<char(200)<<char(205)<<char(188)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)                  <<char(176)<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(176)              <<char(200)<<char(205)<<char(188)<<char(176)<<char(176)<<char(200)<<char(205)<<char(188)<<char(32)<<char(32)                     <<char(176)<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(176)        <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(176)<<endl;
}

void user::reg ()
{
      system("CLS");
    system("COLOR 2");
     user();
    text_animation("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t:::::USER SIGNUP PAGE::::::\n\n");
    cout<<"\n\n\t\t\t\t\t\t\t\tEmail/Phone       : ";
    cin>>ui;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\tPassword          : ";
    cin>>up;
    cout<<endl;
    ofstream reg("database.txt",ios::app);
    ofstream signup("signup.txt",ios::app);
    reg<<"\n"<<ui<<"\t";
    signup<<"\t"<<ui<<"\t"<<up<<endl;

    signup.close();

    reg.close();
    cout<<"\t\t\t\t\t\t\t\t  REGISTRATION SUCCESSFUL!\n\n\n"<<endl;
    system ("pause");
    system ("CLS");
    ofstream ginfo;
    system ("COLOR 2");

     ginfo.open("database.txt",ios::out | ios::app);
     ofstream mlist("memberlist.txt",ios::app);
     user();
     text_animation("\n\n\t\t\t\t\t\t\t     :::::GENERAL INFORMATION FORM FILL-UP:::::");
     cout<<"\n\n\n\n\t\t\t\t\tNAME           : ";
     cin>>name;
     ginfo<<name<<"\t";
     mlist<<"\n\t\t\t"<<name<<"\t";
     cout<<"\n\t\t\t\t\tAGE            : ";
     cin>>age;
      mlist<<"\t\t\t"<<age<<"\t\t";
     ginfo<<age<<"\t";
     cout<<"\n\t\t\t\t\tSEX            : ";
     cin>>sex;
     ginfo<<sex<<"\t";
      mlist<<"\t"<<sex<<"\t\t";
     cout<<"\n\t\t\t\t\tHEIGHT         : ";
     cin>>height;
     ginfo<<height<<"\t";
     cout<<"\n\t\t\t\t\tWEIGHT         : ";
     cin>>weight;
     ginfo<<weight<<"\t";
     cout<<"\n\t\t\t\t\tBLOOD GROUP    : ";
     cin>>bg;
     ginfo<<bg<<"\t";
     mlist<<bg<<"\t\t";
     cout<<"\n\t\t\t\t\tCONTACT NUMBER : ";
    cin>>cn;
     ginfo<<cn<<"\t";
     mlist<<cn<<"\t\t";
     cout<<"\n\t\t\t\t\tLOCATION       : ";
     cin>>loc;
     ginfo<<loc<<"\t";
     mlist<<loc<<endl;
     cout<<"\n\t\t\t\t\tANY PREVIOUS MAJOR DISEASES? (If yes, then mention the disease name): ";
     cin>>disease;
     ginfo<<disease<<"\t";
     mlist.close();
     ginfo.close();
     system("cls");
     user();
    cout<<"\n\n\t\t\t\t\t\t\t    :::::REGISTER YOURSELF AS A PHYSICIAN:::::"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t     1.YES"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t     2.NO"  <<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t         Select your options from 1-2: ";
    cin>>phreg;
    cout<<endl;
    if (phreg==1)
    {

        system("CLS");
    user();
text_animation("\n\n\t\t\t\t\t\t\t      :::::PHYSICIAN REGISTRATION:::::\n\n\n\n");
ofstream physician;
ofstream physicianinfo("physicianlist.txt",ios::app);
physician.open("database.txt",ios::out | ios::app);
cout<<"\t\t\t\t\t\t\tNAME                       : "<<name<<endl;
physicianinfo<<"\n\t\t\t  "<<name<<"\t\t\t  ";
cout<<"\n\t\t\t\t\t\t\tCONTACT NUMBER           : "<<cn<<endl;
physicianinfo<<cn<<"\t";
cout<<"\n\t\t\t\t\t\t\tSPECILIZED IN            : ";
cin>>spl;
cout<<endl;

cout<<"\t\t\t\t\t\t\tCURRENT CHAMBER (Division) : ";
cin>>cc;

physicianinfo<<"\t\t\t"<<spl<<"\t\t\t\t"<<cc<<endl;
physicianinfo.close();
    physician.close();
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\tRECORD SAVED!\n\n\n"<<endl;
}
     else
    { cout<<"\n\n\t\t\t\t\t\t\t\t\t\tRECORD SAVED!\n\n\n";
      }
}


void volunteer:: volsignup()
    {
        system("cls");
        system("color 2");

                user();
   text_animation("\n\n\t\t\t\t\t\t\t\t   VOLUNTEER AGREEMENT TERMS\n");
   text_animation("\n\n\t\t\t\tService Policy:\n\n");
   text_animation("\t\t\t\t\tThanks for joining as a volunteer at WFU(We For US).\n");
   text_animation("\n\t\t\t\t\tAs a volunteer, you'll get some extra facilities and also access to some personal information of other registered");
   text_animation("\n\t\t\t\t\tmembers.Your duty is to maintain the privacy of this platform and not leaking the provided information outside");
   text_animation("\n\t\t\t\t\tto anyone.You're going to work as a medium of connecting donor to those who asks for donation and vice versa.If any");
   text_animation("\n\t\t\t\t\tkind of misuse of information or misbehave is proven,authority has the right to take legal action against anyone.\n");
   text_animation("\n\t\t\t\t\tIf you're agree with our Volunteer Policy then register yourself by proving the required information");
   text_animation("\n\t\t\t\t\tshown in the next page.\n\n\n");
    cout<<"\t\t\t\t\t\t\t       ";system("pause");
    system ("CLS");

    system("COLOR 2");
     user();
   text_animation("\n\n\n\n\n\t\t\t\t\t\t\t\t~~~Create Your Volunteer Credential~~~\n\n\n");


   cout<<"\n\t\t\t\t\t\t\t\tVOLUNTEER ID : ";


   cin>>Uid;
   cout<<"\n\t\t\t\t\t\t\t\tPASSWORD     : ";
   cin>>p;
    cout<<"\n\n\t\t\t\t\t\t\t\t\tACCOUNT CREATED!";
   cout<<"\n\n\t\t\t\t\t\t\t  NOW PLEASE CHECK YOUR PERSONAL INFORMATION\n\n\n";
   cout<<"\t\t\t\t\t\t\t       ";system("pause");


        ofstream volunteer_credential("volsignup.txt",ios::app);
        volunteer_credential<<"\n"<<Uid<<"\t\t"<<p<<"\t\t";
        volunteer_credential.close();

        ofstream VolDatabase("voldatabase.txt",ios::out | ios::app);
        VolDatabase<<"\n\t"<<Uid<<"\t\t";
        ofstream a("tempvol.txt",ios::out);
        a<<info;


    system("CLS");
    cout<<"\n\n\n\t\t\t\t\t\t\t\t~~~Your Personal Information~~~\n";
     ifstream show_info("showinfo.txt");
    system("COLOR 2");

    while(!show_info.eof())
    {
        getline(show_info,s);
        cout<<s<<endl;
    }

    ifstream volunteer_list("loginfo.txt");

    if (volunteer_list.is_open())
{
    while(!volunteer_list.eof())
        {
            getline(volunteer_list,info);

            {


                ofstream VolDatase("voldatabase.txt", ios::out | ios::app);
                VolDatabase<<info;

                VolDatabase.close();
            }

    }
}


     cout<<"\n\t\t\t\t\t\t\t\t  VOLUNTEER REGISTRATION SUCCESSFUL!"<<endl;
    cout<<"\n\n\t\t\t\t\t\t YOU CAN NOW LOG INTO YOUR VOLUNTEER PROFILE FROM THE LOGIN MENU.\n\n\n\n";

    }



void resource :: ret_vollist()
{
    ifstream vol_list2("voldatabase.txt");
    if (vol_list2.is_open())
    {
     system("CLS");
    system("COLOR 2");
    user();
text_animation("\n\n\t\t\t\t\t\t\t\t::::::ALL VOLUNTEER LIST::::::::\n\n\n");
text_animation("   ============================================================================================================================================\n");
text_animation("    VOLN. ID        ID      NAME                   AGE      SEX     HEIGHT     WEIGHT   BG        CONTACT NO.     LOCATION    DISEASE          \n");
text_animation("   ============================================================================================================================================\n");
	 while(!vol_list2.eof())
    {
        getline(vol_list2,v);
        cout<<v<<endl;
	}
    }
    else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }
}
    void user:: login ()
{

    int exist;
    string id,pass,i,p;
    do
    {
        system("CLS");
        system("COLOR 2");

     user();
     text_animation("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t:::::USER LOGIN PAGE:::::\n");


    cout<<"\n\n\n\t\t\t\t\t\t\t\tEmail/Phone     : ";
    cin>>id;
    cout<<endl;
     cout<<"\t\t\t\t\t\t\t\tPassword        : ";
    cin>>pass;
    cout<<endl<<endl;
     ifstream signin("signup.txt");
    while(signin>>i>>p)
    {
    if(i==id && p==pass)
    {
        exist=1;
    }
    }
    signin.close ();

        if(exist==1)
       {
           cout<<"\t\t\t\t\t\t\t\t         LOGIN SUCCESSFUL!\n\n\n";

       }
       else
       {
           cout<<"\t\t\t\t\t\t\t\tSORRY, YOUR PASSWORD DIDN'T MATCH."<<endl;
           cout<<"\t\t\t\t\t\t\t\t\t  TRY AGAIN!"<<endl;

       }
    }
    while(exist!=1);
 ifstream loginfile("database.txt");

    if (loginfile.is_open())
{
    while(!loginfile.eof())
        {
            getline(loginfile,info);

            if(((onset=info.find(id,0)) !=string::npos) )
            {
                ofstream written("loginfo.txt");
                written<<info<<endl;
                written.close();
                ifstream Written("loginfo.txt");
                if (Written.is_open())
                {
                    Written>>ID>>name>>age>>sex>>height>>weight>>bg>>cn>>loc>>disease;
                    ofstream showinfo("showinfo.txt");
                    showinfo<<"\n\n\t\t\t\t\t\tUSER ID : "<<ID<<endl<<"\n\t\t\t\t\t\tNAME : "<<name<<endl<<"\n\t\t\t\t\t\tAGE : "<<age<<endl<<"\n\t\t\t\t\t\tSEX : "<<sex
                    <<endl<<"\n\t\t\t\t\t\tHEIGHT : "<<height<<endl<<"\n\t\t\t\t\t\tWEIGHT : "<<weight<<endl<<"\n\t\t\t\t\t\tBLOOD GROUP : "<<bg<<endl<<"\n\t\t\t\t\t\tCONTACT NUMBER : "<<cn<<endl<<"\n\t\t\t\t\t\tLOCATION : "<<loc<<endl
                    <<"\n\t\t\t\t\t\tDISEASE : "<<disease<<endl<<endl;
                    showinfo.close();
                }

            }

}
}


}


void volunteer :: volsignin()
{

    string id,info;
    int exist,onset;
    do
    {
        system("CLS");
   system("COLOR 2");
     user();
     cout<<endl;
     text_animation("\n\n\n\n\n\n\t\t\t\t\t\t\t\t:::::VOLUNTEER LOGIN PAGE:::::\n");


    cout<<"\n\n\t\t\t\t\t\t\t\tVolunteer ID   : ";
    cin>>id;
     cout<<"\n\t\t\t\t\t\t\t\tPassword       : ";
    cin>>pass;
     ifstream signin("volsignup.txt");
    while(signin>>i>>p)
    {
    if(i==id && p==pass)
    {
        exist=1;
    }
    }
    signin.close ();

        if(exist==1)
       {
            cout<<"\n\t\t\t\t\t\t\t\t    LOGIN SUCCESSFUL!\n\n\n";

             ifstream loginfile("voldatabase.txt");

    if (loginfile.is_open())
{
    while(!loginfile.eof())
        {
            getline(loginfile,info);

            if(((onset=info.find(id,0)) !=string::npos) )
            {
                ofstream written("volloginfo.txt");
                written<<info<<endl;
                written.close();
                ifstream Written("volloginfo.txt");
                if (Written.is_open())
                {
                    Written>>ID>>name>>age>>sex>>height>>weight>>bg>>cn>>loc>>disease;
                    ofstream vol_showinfo("vol_showinfo.txt");
                    vol_showinfo<<"\n\n\t\t\t\t\t\tUSER ID : "<<ID<<endl<<"\n\t\t\t\t\t\tNAME : "<<name<<endl<<"\n\t\t\t\t\t\tAGE : "<<age<<endl<<"\n\t\t\t\t\t\tSEX : "<<sex
                    <<endl<<"\n\t\t\t\t\t\tHEIGHT : "<<height<<endl<<"\n\t\t\t\t\t\tWEIGHT : "<<weight<<endl<<"\n\t\t\t\t\t\tBLOOD GROUP : "<<bg<<endl<<"\n\t\t\t\t\t\tCONTACT NUMBER : "<<cn<<endl<<"\n\t\t\t\t\t\tLOCATION : "<<loc<<endl
                    <<"\n\t\t\t\t\t\tDISEASE : "<<disease<<endl<<endl;
                    vol_showinfo.close();
                }

            }
}
}

       }
       else
       {
            cout<<"\n\t\t\t\t\t\t\t\tSORRY, YOUR PASSWORD DIDN'T MATCH."<<endl;
           cout<<"\t\t\t\t\t\t\t\t\tTRY AGAIN!"<<endl;

       }
    }while(exist!=1);

}

void admin:: adminlogin ()
{

   int exist;
    string id,pass,p,i;
    ofstream admin("admin.txt",ios::out | ios::app);
    admin<<"ADMIN"<<"\t";
    admin<<"ADMIN"<<"\t";
    admin.close();
     do{system("CLS");
        system("COLOR 2");
     user();
     text_animation("\n\n\n\n\n\n\t\t\t\t\t\t\t\t:::::ADMIN LOGIN PAGE:::::\n");

     cout<<"\n\n\t\t\t\t\t\t\t\tBoth admin  id & password is ADMIN. "<<endl;


    cout<<"\n\t\t\t\t\t\t\t\tAdmin ID       : ";
    cin>>id;
     cout<<"\t\t\t\t\t\t\t\tPassword       : ";
    cin>>pass;
     ifstream adminup("admin.txt",ios::in);

      while(adminup>>i>>p)
    {
    if(i==id && p==pass)
    {
        exist=1;
    }
    }
    adminup.close ();

      if(exist==1)
       {
           cout<<"\n\n\t\t\t\t\t\t\t       LOGIN SUCCESSFUL!\n\n\n";

       }
       else
       {
           cout<<"\n\n\t\t\t\t\t\t\tSORRY, YOUR PASSWORD DIDN'T MATCH."<<endl;
           cout<<"\t\t\t\t\t\t\tTRY AGAIN!"<<endl;

       }
    }
    while(exist!=1);

}

void user::showinfo()
{
    system("cls");
    string s;
    user();
    text_animation("\n\n\t\t\t\t\t\t\t\t:::::SHOW USER ACCOUNT INFORMATION:::::\n");
    ifstream show_info("showinfo.txt");
    system("COLOR 2");

    while(!show_info.eof())
    {
        getline(show_info,s);
        cout<<s<<endl;
    }


}

void user::modinfo()
{
    string info;
    string mod1;
    string a;
    string name, age, cn,id,uid,m,t;
    system("cls");
    system("color 2");
    user();
    text_animation("\n\n\t\t\t\t\t\t\t\t:::::MODIFY USER ACCOUNT INFORMATION:::::\n");
    cout<<"\n\n\t\t\t\t\t\tEnter Your User ID : ";
    cin>>id;
           ifstream mod;
           mod.open("database.txt");
           ofstream temp;
           temp.open("temp.txt");

    while(getline(mod,info))
        {

            if(((onset=info.find(id,0)) !=string::npos) )

            {

                mod1=info;
            }

        while(getline(mod,a))
        {
            if(a!=mod1)
            {

                temp<<a<<endl;
            }
        }

        mod.close();
        temp.close();
        remove("database.txt");
        rename("temp.txt","database.txt");
         ofstream mod2;
            mod2.open("database.txt",ios::app|ios::out);




            text_animation("\n\n\t\t\t\t\t\t\t\t~~~Enter Your Modified Information~~~~\n\n");
            cout<<"\t\t\t\t\t\tID             : "<<id<<endl<<endl;
            mod2<<id<<"\t";
            cout<<"\t\t\t\t\t\tNAME           : ";
            cin>>name;
            cout<<endl;
            mod2<<name<<"\t";
            cout<<"\t\t\t\t\t\tAGE            : ";
            cin>>age;
            cout<<endl;
            mod2<<age<<"\t";
            cout<<"\t\t\t\t\t\tSEX            : ";
            cin>>sex;
            cout<<endl;
            mod2<<sex<<"\t";




            cout<<"\n\t\t\t\t\t\tHEIGHT         : ";
            cin>>height;
            cout<<endl;
            mod2<<height<<"\t";
            cout<<"\t\t\t\t\t\tWEIGHT         : ";
            cin>>   weight;
            cout<<endl;
            mod2<<weight<<"\t";
            cout<<"\t\t\t\t\t\tBLOOD GROUP    : ";
            cin>>bg;
            cout<<endl;
            mod2<<bg<<"\t";
            cout<<"\t\t\t\t\t\tCONTACT NUMBER : ";
            cin>>cn;
            cout<<endl;
            mod2<<cn<<"\t";
            cout<<"\t\t\t\t\t\tLOCATION       : ";
            cin>>loc;
            cout<<endl;
            mod2<<loc<<"\t";
            cout<<"\t\t\t\t\t\tMAJOR DISEASE  : ";
            cin>>disease;
            cout<<endl;
            mod2<<disease;
            cout<<"\n\n\t\t\t\t\t\t\t\t\tRECORD UPDATED!";
            cout<<"\n\t\t\t\tPLEASE LOGOUT FROM YOUR ACCOUNT ANAD AGAIN RE-LOGIN TO SEE YOUR NEWLY MODIFIED INFORMATION";
            cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
            }




    }


void resource :: ret_blood_req_list()
{

    ifstream bloodlist("blood_req.txt");

    if(bloodlist.is_open())
    {
    system("COLOR 2");
user();
text_animation("\n\n\n\t\t\t\t\t\t\t\t:::::REQUEST LIST FOR BLOOD DONATION:::::\n\n\n");
text_animation("\t\t\t=====================================================================================================================================\n");
text_animation("\t\t\t NAME                                   CONTACT NO.                       BLOOD GROUP                 LOCATION       \n");
text_animation("\t\t\t=====================================================================================================================================\n");
  while(!bloodlist.eof())
    {
        getline(bloodlist,a);
        cout<<a<<endl;
    }
    }
    else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }

}

void resource :: ret_org_req_list()
{

    ifstream orglist("org_req.txt");

if(orglist.is_open())

   {
       system("COLOR 2");
user();
text_animation("\n\n\n\t\t\t\t\t\t\t\t:::::REQUEST LIST FOR ORGAN DONATION:::::\n\n\n");
text_animation("\t\t\t===============================================================================================================================\n");
text_animation("\t\t\tNAME                            CONTACT NO.                     ORGAN                         LOCATION                  \n");
text_animation("\t\t\t===============================================================================================================================\n");
  while(!orglist.eof())
    {
        getline(orglist,b);
        cout<<b<<endl;
    }

   }
else
   {
       user();
   cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";

   }

}


void resource:: ret_physician_list()
{
    ifstream phy_2("physicianlist.txt");
    if(phy_2.is_open())
    {

    system("CLS");
    system("COLOR 2");
     user();
text_animation("\n\n\n\t\t\t\t\t\t\t\t  :::::ALL PHYSICIAN LIST:::::\n\n\n");
text_animation("\t\t\t===========================================================================================================================\n");
text_animation("\t\t\t  NAME                          CONTACT NO.                      SPECIALIZED IN                    CHAMBER	          \n");
text_animation("\t\t\t===========================================================================================================================\n");
	while(!phy_2.eof())
    {
        getline(phy_2,c);
	cout<<c<<endl;
    }
    }
    else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }

}

void resource :: ret_bdl()
{
    ifstream b_dl("memberlist.txt");

    if(b_dl.is_open())
    {
     system("CLS");
    system("COLOR 2");
    user();
text_animation("\n\n\t\t\t\t\t\t\t\t::::::ALL MEMBER LIST::::::::\n\n\n");
text_animation("\t\t=================================================================================================================================================\n");
text_animation("\t\t             NAME                       AGE                 SEX             BG               CONTACT NO.                   LOCATION              \n");
text_animation("\t\t=================================================================================================================================================\n");

	 while(!b_dl.eof())
    {
        getline(b_dl,d);
        cout<<d<<endl;
	}
    }

    else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }
}

void user:: reqorg_donor()
{
    ofstream Oreqname("organ_req_name.txt", ios::app);
ofstream reqorg("org_req.txt", ios::app);

     int p6op,p7op;
         system("CLS");
     user();
     text_animation("\n\n\t\t\t\t\t\t\t        :::::REQUEST FOR ORGAN DONATION:::::\n\n");
     cout<<"\t\t\t\t\t\t\t\t  NAME           : "<<name<<endl;
     reqorg<<"\n\t\t\t"<<name<<"\t\t\t\t";
     Oreqname<<name<<"\t\t";
    cout<<"\t\t\t\t\t\t\t\t  CONTACT NUMBER : "<<cn<<endl;
     reqorg<<cn<<"\t\t\t";
     cout<<"\n\t\t\t\t\t\t\tORGAN : ";
     cout<<"\n\n\t\t\t\t\t\t\t\t1. EYE\n";
     cout<<"\t\t\t\t\t\t\t\t2. KIDNEY\n";
     cout<<"\t\t\t\t\t\t\t\t3. LUNG\n";
     cout<<"\t\t\t\t\t\t\t\t4. LIVER\n";
     cout<<"\t\t\t\t\t\t\t\t5. PANCREAS\n";
     cout<<"\t\t\t\t\t\t\t\t   Select from 1-5: ";
      cin>>p6op;
      cout<<endl;
    cout<<"\t\t\t\t\t\t\tLOCATION : \n";
    cout<<"\n\t\t\t\t\t\t\t\t1. DHAKA\n";
    cout<<"\t\t\t\t\t\t\t\t2. MYMENSINGH\n";
    cout<<"\t\t\t\t\t\t\t\t3. RAJSHAHI\n";
    cout<<"\t\t\t\t\t\t\t\t4. KHULNA\n";
    cout<<"\t\t\t\t\t\t\t\t5. SYLHET\n";
    cout<<"\t\t\t\t\t\t\t\t6. CHOTTOGRAM\n";
    cout<<"\t\t\t\t\t\t\t\t7. BARISHAL\n";
    cout<<"\t\t\t\t\t\t\t\t8. RANGPUR\n";
    cout<<"\t\t\t\t\t\t\t\t   Select Location from 1-8: ";
            cin>>p7op;
            cout<<endl;
            system("cls");
            user();
            text_animation("\n\n\n\t\t\t\t\t\t\tYOUR SELECTIONS ARE :\n\n");
            cout<<"\n";
            if(p6op==1)
            {
                text_animation("\t\t\t\t\t\t\t\t\tORGAN    : EYE\n");
                reqorg<<"EYE"<<"\t\t\t\t";
                Oreqname<<"EYE";
            }
        else if (p6op==2)
            {
                text_animation("\t\t\t\t\t\t\t\t\tORGAN    : KIDNEY\n");
                reqorg<<"KIDNEY"<<"\t\t\t\t";
                 Oreqname<<"KIDNEY";
            }
        else if(p6op==3)
            {
                text_animation("\t\t\t\t\t\t\t\t\tORGAN    : LUNG\n");
                reqorg<<"LUNG"<<"\t\t\t\t";
                 Oreqname<<"LUNG";
            }
        else if (p6op==4)
            {
                text_animation("\t\t\t\t\t\t\t\t\tORGAN    : LIVER\n");
                reqorg<<"LIVER"<<"\t\t\t\t";
                 Oreqname<<"LIVER";
            }
        else if (p6op==5)
            {
                text_animation("\t\t\t\t\t\t\t\t\tORGAN    : PANCREAS\n");
                reqorg<<"PANCREAS"<<"\t\t\t\t";
                 Oreqname<<"PANCREAS";
            }
            else
                {
                    text_animation("\t\t\t\t\t\t\t   INVALID TARGET!\n");
                }
            if (p7op==1)
            {
                text_animation("\t\t\t\t\t\t\t\t\tLOCATION : DHAKA\n\n\n\n");
                reqorg<<"DHAKA"<<"\t\t\t";
            }
            else if (p7op==2)
            {
                text_animation("\t\t\t\t\t\t\t\t\tLOCATION : MYMENSINGH\n\n\n\n");
                reqorg<<"MYMENSINGH"<<"\t\t\t";
            }
            else if (p7op==3)
            {
                text_animation("\t\t\t\t\t\t\t\t\tLOCATION : RAJSHAHI\n\n\n\n");
                reqorg<<"RAJSHAHI"<<"\t\t\t";
            }
            else if (p7op==4)
            {
                text_animation("\t\t\t\t\t\t\t\t\tLOCATION : KHULNA\n\n\n\n");
                reqorg<<"KHULNA"<<"\t\t\t";
            }
            else if (p7op==5)
            {
                text_animation("\t\t\t\t\t\t\t\t\tLOCATION : SYLHET\n\n\n\n");
                reqorg<<"SYLHET"<<"\t\t\t";
            }
            else if (p7op==6)
            {
                text_animation("\t\t\t\t\t\t\t\t\tLOCATION : CHOTTOGRAM\n\n\n\n");
                reqorg<<"CHOTTOGRAM"<<"\t\t\t";
            }
            else if (p7op==7)
            {
                text_animation("\t\t\t\t\t\t\t\t\tLOCATION : BARISHAL\n\n\n\n");
                reqorg<<"BARISHAL"<<"\t\t\t";
            }
            else if (p7op==8)
            {
                text_animation("\t\t\t\t\t\t\t\t\tLOCATION : RANGPUR\n\n\n\n");
                reqorg<<"RANGPUR"<<"\t\t\t";
            }
            else
                {
                    text_animation("\t\t\t\t\t\t\t\t INVALID TARGET!\n");
                }

            reqorg.close();

            Oreqname.close();
}

void user :: SearchPhysician()
{
string search3;
string search4;
int onset;
string linephy;

ifstream search_physician;
search_physician.open("physicianlist.txt");
system("COLOR 2");
user();
text_animation("\n\n\n\n\n\t\t\t\t\t\t\t          :::::SEARCH SPECIALIZED PHYSICIAN:::::\n\n\n");
cout<<"\t\t\t\t\t\t\t\tSEARCH BY SPECIALIZED CATAGORY         : ";
cin>>search3;
cout<<endl;
cout<<"\t\t\t\t\t\t\t\tSEARCH BY CHAMBER'S LOCATION(Division) : ";
cin>>search4;
cout<<endl;
  system("CLS");
    system("COLOR 2");
    user();
text_animation("\n\n\n\t\t\t\t\t\t\t    :::::LIST SPECIALIZED PHYSICIAN:::::\n\n\n");
text_animation("\t\t\t================================================================================================================================\n");
text_animation("\t\t   NAME		                CONTACT NO.	                     SPECIALIZED IN                             CHAMBER                  \n");
text_animation("\t\t\t================================================================================================================================\n");
if (search_physician.is_open())

{
    while(!search_physician.eof())
        {
            getline(search_physician,linephy);

            if(((onset=linephy.find(search3,0)) !=string::npos) && ((onset=linephy.find(search4,0)) !=string::npos))
            {
                cout<<linephy<<endl;
            }
        }
        search_physician.close();

}

else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }

}

void resource :: ret_posthumous_list()
{
    ifstream posthum_list("posthum.txt");
if (posthum_list.is_open())
{
     system("CLS");
    system("COLOR 2");
    user();
    text_animation("\n\n\t\t\t\t\t\t\t\t::::::POSTHUMOUS CONTRIBUTOR LIST::::::::\n\n\n");
    text_animation("\t\t===========================================================================================================================================\n");
	text_animation("\t\t\t ID                 NAME                AGE          SEX      BG          CONTACT NO.             LOCATION           DISEASE     \n");
	text_animation("\t\t============================================================================================================================================\n");

	while(!posthum_list.eof())
    {
        getline(posthum_list,e);
        cout<<e<<endl;
    }

}

 else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }
}
 void user :: reqbg_donor()
{
    ofstream Breqname("blood_req_name.txt", ios::out|ios::app);
ofstream reqbg("blood_req.txt",ios::app|ios::out);
ofstream bgr;

     int p4op,p5op;
         system("CLS");
    user();
     text_animation("\n\n\t\t\t\t\t\t\t\t:::::REQUEST FOR BLOOD DONATION:::::\n\n");
     cout<<"\t\t\t\t\t\t\t\tNAME           : "<<name<<endl;;
     reqbg<<"\n\t\t\t  "<<name<<"\t\t\t\t\t";
     Breqname<<"\n\t\t"<<name<<"\t\t";
     cout<<"\t\t\t\t\t\t\t\tCONTACT NUMBER : "<<cn<<endl<<endl;
     reqbg<<cn<<"\t\t\t\t";
cout<<"\t\t\t\t\t\t  BLOOD GROUP:";
     cout<<"\n\t\t\t\t\t\t\t\t1. AB +ve"<<endl;
     cout<<"\t\t\t\t\t\t\t\t2. AB -ve"<<endl;
     cout<<"\t\t\t\t\t\t\t\t3. A +ve"<<endl;
     cout<<"\t\t\t\t\t\t\t\t4. A -ve"<<endl;
     cout<<"\t\t\t\t\t\t\t\t5. B +ve"<<endl;
     cout<<"\t\t\t\t\t\t\t\t6. B -ve"<<endl;
     cout<<"\t\t\t\t\t\t\t\t7. O +ve"<<endl;
     cout<<"\t\t\t\t\t\t\t\t8. O -ve"<<endl;
     cout<<"\t\t\t\t\t\t\t\t    Select blood group from 1-8: ";
      cin>>p4op;
      cout<<endl<<endl;
cout<<"\t\t\t\t\t\t  LOCATION: "<<endl;
     cout<<"\t\t\t\t\t\t\t\t1. DHAKA"<<endl;
     cout<<"\t\t\t\t\t\t\t\t2. MYMENSINGH"<<endl;
     cout<<"\t\t\t\t\t\t\t\t3. RAJSHAHI"<<endl;
     cout<<"\t\t\t\t\t\t\t\t4. KHULNA"<<endl;
     cout<<"\t\t\t\t\t\t\t\t5. SYLHET"<<endl;
     cout<<"\t\t\t\t\t\t\t\t6. CHOTTOGRAM"<<endl;
     cout<<"\t\t\t\t\t\t\t\t7. BARISHAL"<<endl;
     cout<<"\t\t\t\t\t\t\t\t8. RANGPUR"<<endl;
      cout<<"\t\t\t\t\t\t\t\t   Select Location from 1-8: ";
            cin>>p5op;
            cout<<endl;
            system("cls");
            user();
            text_animation("\n\n\n\t\t\t\t\t\t  YOUR SELECTIONS ARE : \n");
            cout<<"\n";
            {
                if(p4op==1)
            {
            text_animation("\t\t\t\t\t\t\t\t\tBLOOD GROUP : AB+\n");
             reqbg<<"AB+"<<"\t\t\t";
             Breqname<<"AB+";
            }
        else if (p4op==2)
        {
            text_animation("\t\t\t\t\t\t\t\t\tBLOOD GROUP : AB-\n");
            reqbg<<"AB-"<<"\t\t\t";
             Breqname<<"AB-";
        }

        else if(p4op==3)
        {
            text_animation("\t\t\t\t\t\t\t\t\tBLOOD GROUP : A+\n");
            reqbg<<"A+"<<"\t\t\t";
            Breqname<<"A+";
        }

        else if (p4op==4)
        {
            text_animation("\t\t\t\t\t\t\t\t\tBLOOD GROUP : A-\n");
            reqbg<<"A-"<<"\t\t\t";
            Breqname<<"A-";
        }

        else if (p4op==5)
        {
            text_animation("\t\t\t\t\t\t\t\t\tBLOOD GROUP : B+\n");
            reqbg<<"B+"<<"\t\t\t";
            Breqname<<"B+";
        }

        else if (p4op==6)
        {
            text_animation("\t\t\t\t\t\t\t\t\tBLOOD GROUP : B-\n");
            reqbg<<"B-"<<"\t\t\t";
            Breqname<<"B-";
        }

        else if (p4op=7)
        {
            text_animation("\t\t\t\t\t\t\t\t\tBLOOD GROUP : O+\n");
            reqbg<<"O+"<<"\t\t\t";
            Breqname<<"O+";
        }

        else if (p4op=8)
        {
            text_animation("\t\t\t\t\t\t\t\t\tBLOOD GROUP : O-\n");
            reqbg<<"O-"<<"\t\t\t";
            Breqname<<"O-";
        }

            else

                {
                    text_animation("\t\t\t\t\t\t\t\t\t  INVALID TARGET!\n");
                }
            }
            {
            if (p5op==1)
            {
                text_animation("\t\t\t\t\t\t\t\t\tLOCATION    : DHAKA\n\n\n\n");

                reqbg<<"DHAKA"<<"\t"<<endl;
            }
            else if (p5op==2)
            {
            text_animation("\t\t\t\t\t\t\t\t\tLOCATION    : MYMENSINGH\n\n\n\n");
            reqbg<<"MYMENSINGH"<<"\t"<<endl;
            }
            else if (p5op==3)
            {
            text_animation("\t\t\t\t\t\t\t\t\tLOCATION    : RAJSHAHI\n\n\n\n");
            reqbg<<"RAJSHAHI"<<"\t"<<endl;
            }
            else if (p5op==4)
            {
            text_animation("\t\t\t\t\t\t\t\t\tLOCATION    : KHULNA\n\n\n\n");
            reqbg<<"KHULNA"<<"\t"<<endl;
            }
            else if (p5op==5)
            {
            text_animation("\t\t\t\t\t\t\t\t\tLOCATION    : SYLHET\n\n\n\n");
            reqbg<<"SYLHET"<<"\t"<<endl;
            }
            else if (p5op==6)
            {
            text_animation("\t\t\t\t\t\t\t\t\tLOCATION    : CHOTTOGRAM\n\n\n\n");
            reqbg<<"CHOTTOGRAM"<<"\t"<<endl;
            }
            else if (p5op==7)
            {
            text_animation("\t\t\t\t\t\t\t\t\tLOCATION    : BARISHAL\n\n\n\n");
            reqbg<<"BARISHAL"<<"\t"<<endl;
            }
            else if (p5op==8)
            {
            text_animation("\t\t\t\t\t\t\t\t\tLOCATION    : RANGPUR\n\n\n\n");
            reqbg<<"RANGPUR"<<"\t"<<endl;
            }
            else
               {
                text_animation(" \t\t\t\t\t\t\t\t  INVALID TARGET!\n");
               }
            }


            reqbg.close();
            Breqname.close();
}

 void user :: BMI()
       {
          int ar,g;
           float H,W,BMI=0.0;
          user ();
        text_animation("\n\n\n\t\t\t\t\t\t\t\t     :::::BODY MASS INDEX:::::\n");

         cout<<"\n\n\t\t\t\t\t\t\t\t\t HEIGHT  (m): ";
         cin>>H;
         cout<<"\n\t\t\t\t\t\t\t\t\t WEIGHT (kg): ";
         cin>>W;
         BMI=W/(H*H);
         cout<<"\n\n\t\t\t\t\t\t\t\t\t YOUR BMI IS: "<<BMI<<endl<<endl<<endl;
         text_animation("\n\t\t\t\t\t\tSELECT YOUR AGE RANGE : \n\n");
         text_animation("\t\t\t\t\t\t\t\t\t1.UNDER 17\n");
         text_animation("\t\t\t\t\t\t\t\t\t2.UNDER 35\n");
         text_animation("\t\t\t\t\t\t\t\t\t3.35 & OVER\n");
         text_animation("\n\t\t\t\t\t\t\t\t  Select your option from 1-3: ");
         cin>>ar;
         cout<<endl;
         if(ar==1 && BMI>=15 || BMI<=20)
         {
             system("cls");
             system("color 2");
             user();
            text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
            text_animation("\n\n\t\t\t\t\t\t\t\t  CONGRATULATIONS,YOUR BMI IS BALANCED.");
            text_animation("\n\t\t\t\t\t\tPLEASE MAINTAIN YOUR FOOD HABIT & WALK FOR MINIMUM 20 MINS DAILY.\n\n");
         }
         else if(ar==1 && BMI>=20 || BMI<=26)
         {
              system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
             text_animation("\n\n\t\t\t\t\t\t\t\t  YOU'RE OVERWEIGHT.\n");
             text_animation("\t\t\t\t\t\tPLEASE AVOID JUNK FOODS & HAVE SOME FREE HAND EXERCISE DAILY.\n\n");
         }
         else if(ar==1 && BMI>=26 || BMI<=34)
         {
              system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
             text_animation("\n\n\t\t\t\t\t\t\t\t   YOU'RE OBESE.\n PLEASE REDUCE CARBOHYDRATE AND FATS IN YOUR DAILY MEALS & DO SOME EXERCISE REGULARLY.");
             text_animation("\n\t\t\t\t\tCONSULT A NUTRITIONIST.\n\n");
         }
         else if(ar==1 && BMI>34)
         {
              system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
             text_animation("\n\n\t\t\t\t\t\t\t\t   YOU'RE EXTREMELY OBESE.\nPLEASE AVOID CARBOHYDRATE AND FATS IN YOUR DAILY MEALS &DO SOME EXERCISE REGULARLY.\n");
            text_animation("\t\t\t\t\tCONSULT A NUTRITIONIST AS SOON AS POSSIBLE.\n\n");
         }
          else if(ar==2 && BMI>=18 || BMI<=24)
         {
              system("cls");
             system("color 2");
             user();
            text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
            text_animation("\n\n\t\t\t\t\t\t\t\t  CONGRATULATIONS,YOUR BMI IS BALANCED.");
            text_animation("\n\t\t\t\t\t\tPLEASE MAINTAIN YOUR FOOD HABIT & WALK FOR MINIMUM 20 MINS DAILY.\n\n");
         }
          else if(ar==2 && BMI>=24 || BMI<=30)
         {
              system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
             text_animation("\n\n\t\t\t\t\t\t\t\t  YOU'RE OVERWEIGHT.\n");
             text_animation("\t\t\t\t\t\tPLEASE AVOID JUNK FOODS & HAVE SOME FREE HAND EXERCISE DAILY.\n\n");
         }
         else if(ar==2 && BMI>=30 || BMI<=40)
         {
              system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
             text_animation("\n\n\t\t\t\t\t\t\t\t   YOU'RE OBESE.\n PLEASE REDUCE CARBOHYDRATE AND FATS IN YOUR DAILY MEALS & DO SOME EXERCISE REGULARLY.");
             text_animation("\n\t\t\t\t\tCONSULT A NUTRITIONIST.\n\n");
         }
          else if(ar==2 && BMI>41)
         {
              system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
             text_animation("\n\n\t\t\t\t\t\t\t\t  YOU'RE EXTREMELY OBESE.\nPLEASE AVOID CARBOHYDRATE AND FATS IN YOUR DAILY MEALS &DO SOME EXERCISE REGULARLY.\n");
             text_animation("\t\t\t\t\tCONSULT A NUTRITIONIST AS SOON AS POSSIBLE.\n\n");
         }
         else if(ar==3 && BMI>=19 || BMI<=26)
         {
              system("cls");
             system("color 2");
             user();
            text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
            text_animation("\n\n\t\t\t\t\t\t\t\t  CONGRATULATIONS,YOUR BMI IS BALANCED.");
            text_animation("\n\t\t\t\t\t\tPLEASE MAINTAIN YOUR FOOD HABIT & WALK FOR MINIMUM 20 MINS DAILY.\n\n");
         }
          else if(ar==3 && BMI>=26 || BMI<=30)
         {
              system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
             text_animation("\n\n\t\t\t\t\t\t\t\t  YOU'RE OVERWEIGHT.\n");
             text_animation("\t\t\t\t\t\tPLEASE AVOID JUNK FOODS & HAVE SOME FREE HAND EXERCISE DAILY.\n\n");
         }
         else if(ar==3 && BMI>=30 || BMI<=40)
         {
              system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
             text_animation("\n\n\t\t\t\t\t\t\t\t   YOU'RE OBESE.\n PLEASE REDUCE CARBOHYDRATE AND FATS IN YOUR DAILY MEALS & DO SOME EXERCISE REGULARLY.");
             text_animation("\n\t\t\t\t\tCONSULT A NUTRITIONIST.\n\n");
         }
          else if(ar==3 && BMI>41)
         {
              system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
             text_animation("\n\nt\t\t\t\t\t\t\t   YOU'RE EXTREMELY OBESE.\nPLEASE AVOID CARBOHYDRATE AND FATS IN YOUR DAILY MEALS &DO SOME EXERCISE REGULARLY.\n");
             text_animation("\t\t\t\t\tCONSULT A NUTRITIONIST AS SOON AS POSSIBLE.\n\n");
         }
         else
           {
                system("cls");
             system("color 2");
             user();
             text_animation("\n\n\n\n\t\t\t\t\t\t\t\t\tHEALTH TIPS :\n");
            text_animation("\n\n\t\t\t\t\t\t\t\t   YOU'RE UNDERWEIGHT.\nPLEASE MAINTAIN PROPER BALANCED DIET FOOD & TAKE VITAMINS & CALCIUM SUPPLIMENTS\n");
            text_animation("\t\t\t\t\tTO IMPROVE YOUR IMMUNE SYSTEM.\n");
            text_animation("\t\t\t\t\t\t\t\tAVOID HEAVY WORKS & WALK FOR 20 MINS DAILY.\n\n");
           }

}

void user:: regPosthum()
{
    user();
    system("color 2");
    text_animation("\n\n\n\t\t\t\t\t\t\t    :::::POSTHUMOUS CONTRIBUTOR REGISTRATION:::::\n\n\n\n");
    cout<<"\n\n\t\t\t\t\t\tI,"<<name<<"am agreeing with the policies of registering myself as a ";
    cout<<"\n\t\t\t\t\t\tPosthumous Contributor,with my full concern and at my own will.\n";
    text_animation("\n\n\t\t\t\t\t\t\t\t   If you're agree with us,then press :");
    text_animation("\n\n\t\t\t\t\t\t\t\t\t\t1. Yes");
    text_animation("\n\t\t\t\t\t\t\t\t\t\t2. No");
    text_animation("\n\n\t\t\t\t\t\t\t\t\t    YOUR SELECTION IS: ");
    cin>>p10op;
    cout<<endl;
    if (p10op==1)
        {
            cout<<"\n\n\t\t\t\t\t\t\t\t        THANK YOU FOR REGISTERING!\n\n\n"<<endl;
            cout<<"\t\t\t\t\t\t\t       ";system("pause");
            system("cls");
            system("color 2");
            user();

            text_animation("\n\n\t\t\t\t\t\t\t\t  ~~YOUR PERSONAL INFORMATION~~\n\n");
    ofstream regposthum("posthum.txt",ios::app);
    cout<<"\n\n\n\t\t\t\t\t\tID             : "<<ID<<endl;
    regposthum<<"\n\t\t"<<ID<<"\t\t";
    cout<<"\t\t\t\t\t\tNAME           : "<<name<<endl;
    regposthum<<"\t"<<name<<"\t";
    cout<<"\t\t\t\t\t\tAGE            : "<<age<<endl;
    regposthum<<"\t"<<age<<"\t  ";
    cout<<"\t\t\t\t\t\tSEX            : "<<sex<<endl;
    regposthum<<sex<<"\t";
    cout<<"\t\t\t\t\t\tBLOOD GROUP    : "<<bg<<endl;
    regposthum<<bg<<"\t\t";
    cout<<"\t\t\t\t\t\tCONTACT NUMBER : "<<cn<<endl;
    regposthum<<cn<<"\t\t  ";
    cout<<"\t\t\t\t\t\tLOCATION       : "<<loc<<endl;
    regposthum<<loc<<"\t\t";
    cout<<"\t\t\t\t\t\tDISEASE        : "<<disease<<endl<<endl<<endl;
    regposthum<<disease<<"\t";

        }
else if(p10op==2)
        {
            cout<<"\n\n\t\t\t\t\t\tGOING BACK.\n\n\n";
            cout<<"\t\t\t\t\t\t\t       ";system("pause");
            cout<<endl;
        }
else
{
    cout<<"\t\t\t\t\t\t\t\t\tINVALID TARGET"<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t       ";system("pause");
}

}

void resource :: updtBdonor()
{
    string bg,rname,name,rcn,rbg,rloc,breq,rdate,breq2,dinfo,dID,dname,dage,dsex,dheight,dweight,dbg,dcn,dloc,ddisease,blood,dinfo2,inf, vID;
    int exist,onset,op;
    system("cls");

     text_animation("\n\n\t\t\t\t\t\t\t:::::UPDATE BLOOD DONOR INFORMATION:::::\n\n\n\n");
     fstream blood_recipient;
     fstream blood_donor;
     fstream tempbr1;
     fstream tempshowbr;
     tempshowbr.open("temp_show_br.txt");
     tempbr1.open("temp_blood_recipient.txt");
     blood_recipient.open("blood_recipientlist.txt");
     blood_donor.open("blood_donorlist.txt");
     do{
            system("CLS");
        system("color 2");
    user();
     text_animation("\n\n\t\t\t\t\t\t\t:::::UPDATE BLOOD DONOR INFORMATION:::::\n\n\n\n");
     cout<<"\t\t\t\t\t\tENTER RECIPIENT'S NAME        : ";
     cin>>rname;
     cout<<endl<<endl;
     cout<<"\t\t\t\t\t\tENTER THE DONATED BLOOD GROUP : ";
     cin>>blood;
     cout<<endl;
     ifstream brn("blood_req_name.txt");
     while(brn>>name>>bg)
    {
    if(name==rname && bg==blood)
    {
        exist=1;
    }
    }
    brn.close ();

        if(exist==1)
       {
           cout<<"\n\t\t\t\t\t\t\t\tRECORD HAS BEEN FOUND!\n\n\n";

         ifstream breqlist2("blood_req.txt");

           if (breqlist2.is_open())

{
    while(!breqlist2.eof())
        {
            getline(breqlist2,breq);

            if(((onset=breq.find(rname,0)) !=string::npos))
            {
                ofstream tempbr1("temp_blood_recipient.txt");
                tempbr1<<breq;
                tempbr1.close();
                ifstream tempbr2("temp_blood_recipient.txt");
                if (tempbr2.is_open())
                {
                    tempbr2>>name>>rcn>>rbg>>rloc;
                    ofstream tempshowbr ("temp_show_br.txt");

                tempshowbr<<"\n\n\t\t\t\t\t\tNAME           : "<<name;
                tempshowbr<<"  \n\t\t\t\t\t\tCONTACT NUMBER : "<<rcn;
                tempshowbr<<"  \n\t\t\t\t\t\tBLOOD GROUP    : "<<rbg;
                tempshowbr<<"  \n\t\t\t\t\t\tLOCATION       : "<<rloc;
                tempbr2.close();
                 tempshowbr.close();
                }

                 ifstream tempshowbr2("temp_show_br.txt");

    while(!tempshowbr2.eof())
    {
        getline(tempshowbr2,breq2);
        cout<<breq2<<endl;
    }

    cout<<"\n\n\t\t\t\t\t\t\tARE THESE ABOVE INFORMATION MATCHED YOUR RECIPIENT?";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t   1.YES";
    cout<<"\n\t\t\t\t\t\t\t\t\t   2.NO";
    cout<<"\n\n\t\t\t\t\t\t\t       Select your option from 1-2: ";
    cin>>op;
    cout<<endl<<endl;
    if (op==1)
              {
                  system("cls");
                  system("color 2");
                  cout<<"\n\n\n\n\t\t\t\t\t\t\t\t~~~Your Personal Information~~~\n\n\n";
    ifstream volshow_info("vol_showinfo.txt");
    system("COLOR 2");

    while(!volshow_info.eof())
    {
        getline(volshow_info,s);
        cout<<s<<endl;
    }
                cout<<"\n\t\t\t\t\t\tEnter the date of recieving donation (dd/mm/yy) : ";
                cin>>rdate;
                cout<<endl;

    ofstream blood_donor_dt ("blood_donordt.txt", ios::out | ios::app);
    ifstream read_b_donor ("volloginfo.txt");
                  if (read_b_donor.is_open())
{
    while(!read_b_donor.eof())
        {
               getline(read_b_donor,inf);

            {
                blood_donor_dt<<"\n\t"<<inf<<"\t\t";

            }

        }

                ifstream blood_donor_dt("blood_donordt.txt");
                if (blood_donor_dt.is_open())
                {
                    blood_donor_dt>>vID>>dID>>dname>>dage>>dsex>>dheight>>dweight>>dbg>>dcn>>dloc>>ddisease;
                    ofstream blood_donor("blood_donorlist.txt", ios::out | ios::app);
                    blood_donor<<"\n\t\t\t\t"<<dname<<"\t\t\t"<<dage<<"\t\t\t"<<dsex<<"\n\t\t\t"<<dbg<<"\n\t\t\t"<<dcn<<"\n\t\t\t"<<dloc<<"\t\t\t";

            }

                ofstream blood_recipient("blood_recipientlist.txt", ios::out);

                blood_recipient<<"\n\t\t\t"<<name<<"\t\t\t"<<rcn<<"\t\t\t"<<rbg<<"\t\t\t"<<rloc<<"\t\t\t"<<rdate<<"\t\t";
                blood_donor<<name<<"\t\t\t"<<rdate<<"\t\t";
                blood_donor.close();
                breqlist2.close();
                blood_donor_dt.close();

                cout<<"\n\n\t\t\t\t\t\t\t\t\tRECORD UPDATED!";
}
string info, modreq1,a;
        int offset;
            ifstream mod_req;
           mod_req.open("blood_req.txt");
           ofstream temp_req;
           temp_req.open("temp_b_req.txt");

           while(getline(mod_req,info))
        {

            if(((offset=info.find(rname,0)) !=string::npos) && ((offset=info.find(blood,0)) !=string::npos) )
            {

                modreq1=info;
            }

    while(getline(mod_req,a))
             {
            if(a!=modreq1)
            {

                temp_req<<a<<endl;
            }
       }
        mod_req.close();
         temp_req.close();
        remove("blood_req.txt");
        rename("temp_b_req.txt","blood_req.txt");

        }
    }

}

       }
    }
}

       else
       {
           cout<<"\t\t\t\t\t\t\t\tSORRY,CAN NOT FIND THE RECORD."<<endl;
           cout<<"\t\t\t\t\t\t\t\t\tPLEASE TRY AGAIN!"<<endl;
           cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
       }
     }while(exist!=1);



}



void resource :: updtOdonor()
{
    string org,rname,name,rcn,rbg,rloc,oreq,rdate,oreq2,dinfo,dID,dname,dage,dsex,dheight,dweight,dbg,dcn,dloc,ddisease,organ,dinfo2,inf, vID;
    int exist,onset,op;
    system("cls");
    system("color 2");
    user();
     text_animation("\n\n\t\t\t\t\t\t\t:::::UPDATE ORGAN DONOR INFORMATION:::::\n\n\n\n");
     fstream organ_recipient;
     fstream organ_donor;
     fstream tempor1;
     fstream tempshowor;
     tempshowor.open("temp_show_or.txt");
     tempor1.open("temp_organ_recipient.txt");
     organ_recipient.open("organ_recipientlist.txt");
     organ_donor.open("organ_donorlist.txt");
     do
     {
         system("CLS");
         user();
         cout<<"\n\n\t\t\t\t\t\tENTER RECIPIENT'S NAME        : ";
     cin>>rname;
     cout<<endl<<endl;
     cout<<"\t\t\t\t\t\tENTER THE DONATED ORGAN NAME  : ";
     cin>>organ;
     cout<<endl;
     ifstream orn("org_req_name.txt");

    while(orn>>name>>org)
    {
    if(name==rname && org==organ)
    {
        exist=1;
    }

    else
    {
         cout<<"\t\t\t\t\t NOT FOUND!";
         system("pause");
    }

    }
    orn.close ();



     if(exist==1)
       {
           cout<<"\n\t\t\t\t\t\t\t\tRECORD HAS BEEN FOUND!\n\n\n";

         ifstream oreqlist2("org_req.txt");

           if (oreqlist2.is_open())
        {
    while(!oreqlist2.eof())
        {
            getline(oreqlist2,oreq);

            if(((onset=oreq.find(rname,0)) !=string::npos))
            {
                ofstream tempor1("temp_organ_recipient.txt");
                tempor1<<oreq;
                tempor1.close();
                ifstream tempor2("temp_organ_recipient.txt");
                if (tempor2.is_open())
                {
                    tempor2>>name>>rcn>>rbg>>rloc;
                    ofstream tempshowor ("temp_show_or.txt");

                tempshowor<<"\n\n\t\t\t\t\t\tNAME           : "<<name;
                tempshowor<<"  \n\t\t\t\t\t\tCONTACT NUMBER : "<<rcn;
                tempshowor<<"  \n\t\t\t\t\t\tBLOOD GROUP    : "<<rbg;
                tempshowor<<"  \n\t\t\t\t\t\tLOCATION       : "<<rloc;
                tempor2.close();
                 tempshowor.close();
                }

              ifstream tempshowor2("temp_show_or.txt");

    while(!tempshowor2.eof())
    {
        getline(tempshowor2,oreq2);
        cout<<oreq2<<endl;
    }

     cout<<"\n\n\t\t\t\t\t\t\tARE THESE ABOVE INFORMATION MATCHED YOUR RECIPIENT?";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t   1.YES";
    cout<<"\n\t\t\t\t\t\t\t\t\t   2.NO";
    cout<<"\n\n\t\t\t\t\t\t\t       Select your option from 1-2: ";
    cin>>op;
    cout<<endl<<endl;
    if (op==1)
              {
                  system("cls");
                  system("color 2");
                  cout<<"\n\n\n\n\t\t\t\t\t\t\t\t~~~Your Personal Information~~~\n\n\n";
    ifstream volshow_info("vol_showinfo.txt");
    system("COLOR 2");

    while(!volshow_info.eof())
    {
        getline(volshow_info,s);
        cout<<s<<endl;
    }

     cout<<"\n\t\t\t\t\t\tEnter the date of recieving donation (dd/mm/yy) : ";
                cin>>rdate;
                cout<<endl;

                ofstream organ_donor_dt ("organ_donordt.txt", ios::out | ios::app);
    ifstream read_o_donor ("volloginfo.txt");
                  if (read_o_donor.is_open())
{
    while(!read_o_donor.eof())
        {
               getline(read_o_donor,inf);

            {
                organ_donor_dt<<"\n\t\t"<<inf<<"\t\t";

            }
        }

        ifstream organ_donor_dt("organ_donordt.txt");
                if (organ_donor_dt.is_open())
                {
                    organ_donor_dt>>vID>>dID>>dname>>dage>>dsex>>dheight>>dweight>>dbg>>dcn>>dloc>>ddisease;
                    ofstream organ_donor("organ_donorlist.txt", ios::out | ios::app);
                    organ_donor<<"\n\t\t\t\t"<<dname<<"\t\t\t"<<dage<<"\t\t\t"<<dsex<<"\n\t\t\t"<<dbg<<"\n\t\t\t"<<dcn<<"\n\t\t\t"<<dloc<<"\t\t\t";

            }

              ofstream organ_recipient("organ_recipientlist.txt", ios::out);

                organ_recipient<<"\n\t\t\t"<<name<<"\t\t\t"<<rcn<<"\t\t\t"<<rbg<<"\t\t\t"<<rloc<<"\t\t\t"<<rdate<<"\t\t";
                organ_donor<<name<<"\t\t\t"<<rdate<<"\t\t";
                organ_donor.close();
                oreqlist2.close();
                organ_donor_dt.close();

                cout<<"\n\n\t\t\t\t\t\t\t\t\tRECORD UPDATED!";
}

string info, modreq1,a;
        int offset;
            ifstream mod_req;
           mod_req.open("organ_req.txt");
           ofstream temp_req;
           temp_req.open("temp_o_req.txt");

            while(getline(mod_req,info))
        {

            if(((offset=info.find(rname,0)) !=string::npos) && ((offset=info.find(organ,0)) !=string::npos) )

            {

                modreq1=info;
            }
            while(getline(mod_req,a))
             {
            if(a!=modreq1)
            {

                temp_req<<a<<endl;
            }
       }

       mod_req.close();
         temp_req.close();
        remove("organ_req.txt");
        rename("temp_o_req.txt","organ_req.txt");

        }
              }

        else{
    cout<<"\n\n\n\t\t\t\t\t\t\tPLEASE CHECK THE RECIPIENT'S NAME & TRY AGAIN"<<endl;
    continue;
            }

       }
    }
}
       }

        else
       {
           cout<<"\t\t\t\t\t\t\t\tSORRY,CAN NOT FIND THE RECORD."<<endl;
           cout<<"\t\t\t\t\t\t\t\t\tPLEASE TRY AGAIN!"<<endl;
           cout<<"\n\n\n\t\t\t\t\t\t\t       ";
           system("pause");
       }

}while(exist!=1);
}



void resource::hospt_infoupdt()
{
    fstream hospt;
    hospt.open("helpdesk.txt", ios::out | ios::app);
    system("cls");
    system("color 2");
    string hosp, hdesk,emn,hloc;
    user();
    text_animation("\n\n\n\n\n\t\t\t\t\t\t\t:::::UPDATE HOSPITAL HELP DESK INFORMATION:::::\n\n\n\n");
    cout<<"\t\t\t\t\t\tHospital's Name                    : ";
    cin>>hosp;
    hospt<<"\n\t\t\t\t "<<hosp;
    cout<<endl;
    cout<<"\t\t\t\t\t\tHospital's Location                : ";
    cin>>hloc;
    hospt<<"\t\t\t"<<hloc;
    cout<<endl;
    cout<<"\t\t\t\t\t\tHelp Desk Number                   : ";
    cin>>hdesk;
    hospt<<"\t\t"<<hdesk;
    cout<<endl;
    cout<<"\t\t\t\t\t\tEmergency Ambulance Service Number : ";
    cin>>emn;
    hospt<<"\t\t\t\t"<<emn<<"\t\t";
    hospt.close();
    cout<<"\n\n\n\n\t\t\t\t\t\t\t\t     RECORD UPDATED!"<<endl<<endl<<endl;

}


void resource:: ret_helpdesk()
{
    system("CLS");
    system("COLOR 2");
     ifstream hdlist("helpdesk.txt");
     if (hdlist.is_open())
     {
     user();
    text_animation("\n\n\n\t\t\t\t\t\t\t\t:::::HOSPITAL HELP DESK:::::\n\n\n");
    text_animation("\t\t\t==========================================================================================================================\n");
	text_animation("\t\t\t        HOSPITAL NAME                LOCATION      RECEPTION DESK            EMERGENCY AMBULANCE SERVICE   \n");
	text_animation("\t\t\t==========================================================================================================================\n");
	while(!hdlist.eof())
    {
        getline(hdlist,p);
	cout<<p<<endl;
    }
     }
      else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }
}


void resource::BloodRecList()
{
    string ww;

    ifstream bloodreclist("blood_recipientlist.txt");
    system("cls");
    system("COLOR 2");
    if(bloodreclist.is_open())
    {

user();
text_animation("\n\n\n\t\t\t\t\t\t\t\t:::::BLOOD DONATION RECIPIENTS LIST:::::\n\n\n");
text_animation("\t\t\t====================================================================================================================================\n");
text_animation("\t\t          NAME                  CONTACT NO.                    BLOOD GROUP            LOCATION               DATE                 \n");
text_animation("\t\t\t====================================================================================================================================\n");
  while(!bloodreclist.eof())
    {
        getline(bloodreclist,ww);
        cout<<ww<<endl;
    }
    }
     else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }



}


void resource::OrganRecList()
{
    string yy;

    ifstream organreclist("organ_recipientlist.txt");
    system("cls");
    system("COLOR 2");
    system("COLOR 2");
    if(organreclist.is_open())
    {

user();
text_animation("\n\n\n\t\t\t\t\t\t\t\t:::::ORGAN DONATION RECIPIENTS LIST:::::\n\n\n");
text_animation("\t\t\t====================================================================================================================================\n");
text_animation("\t\t          NAME                  CONTACT NO.                    ORGAN            LOCATION               DATE                 \n");
text_animation("\t\t\t====================================================================================================================================\n");
  while(!organreclist.eof())
    {
        getline(organreclist,yy);
        cout<<yy<<endl;
    }
    }
     else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }
}



void resource::OrganDonorList()

{
    string zz;

    ifstream organdonlist("organ_donordt.txt");
    system("cls");
    system("COLOR 2");
    if (organdonlist.is_open())
    {
        user();
text_animation("\t============================================================================================================================\n");
text_animation("\t\t Vol.ID         ID      NAME    AGE     SEX     HEIGHT  WEIGHT  BG      CONTACT NO.     LOC    DISEASE            \n");
text_animation("\t============================================================================================================================\n");
while(!organdonlist.eof())

    {
        getline(organdonlist,zz);
        cout<<zz;
    }
}
 else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }

}


void resource::BloodDonorList()

{
    string xx;

    ifstream blooddonlist("blood_donordt.txt");
    system("cls");
    system("COLOR 2");
    if (blooddonlist.is_open())
    {

user();
text_animation("\n\n\n\t\t\t\t\t\t\t\t:::::BLOOD DONOR LIST:::::\n\n\n");
text_animation("\t============================================================================================================================\n");
text_animation("\t\t\t Vol.ID         ID      NAME    AGE     SEX     HEIGHT  WEIGHT  BG      CONTACT NO.     LOC    DISEASE            \n");
text_animation("\t============================================================================================================================\n");
while(!blooddonlist.eof())
    {
        getline(blooddonlist,xx);
        cout<<xx;
    }
}
 else
{
 user();
	 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tNO RECORD HAS BEEN FOUND TILL NOW!\n\n\n\n";
    }

}

int main()
{
     resource Res;
    volunteer Vol;
    admin Admin;
  user User;
  int onset,p1op,p2op,p3op,p4op,p5op,p6op,p7op,p8op,p9op,p11op,p12op;
  string info;
  system("COLOR 2");
  system("cls");

    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<"\t\t"<<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196)<<char(219)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(196)<<char(196) <<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<"\t\t"<<endl;
    cout<<"\t\t"<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196) <<"\t\t"<<endl;

   User.text_animation("\n\t\t\t\tProject Detail:");
   User.text_animation("\n\n\t\t\t\tThrough this program,we can build a health related site from where a user");
   User.text_animation(" can easily be able to access doctors,donors ");
   User.text_animation("\n\t\t\t\tetc.And well as he can also get some");
   User.text_animation(" health tips. There will be some volunteers to work as a medium to connect the \n\t\t\t\t");
   User.text_animation("donor with whom who asks for donation,they can also update information.\n");
   User.text_animation("\n\n\n\t\t\t\t\t\t\t\tProject Members:");
   User.text_animation("\n\n\t\t\t\t\t\t\t\t\t1.OLIUR RAHMAN OLI");
   User.text_animation("\n\t\t\t\t\t\t\t\t\t2.RUKSAT KHAN SHAYONI");
   User.text_animation("\n\t\t\t\t\t\t\t\t\t3.PROKHOR ROY PAVEL");
   User.text_animation("\n\t\t\t\t\t\t\t\t\t4.FARIHAH FARHAD");
   User.text_animation("\n\n\n\t\t\t\t\t\t\t\tThank you for your concern!");
   User.text_animation("\n\n\t\t\t\t\t\t\tTake Care of Yourself & "); system("pause");

  system("cls");

    do{

        system("CLS");
    system("COLOR 2");
     user();
      User.text_animation("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t::::MAIN MENU::::");
     User.text_animation("\n\n\n\t\t\t\t\t\t\t\t 1.Registration.\n");
     User.text_animation("\t\t\t\t\t\t\t\t 2.Sign in.\n");
     User.text_animation("\t\t\t\t\t\t\t\t 3.Emergency.\n\n");
     User.text_animation("\t\t\t\t\t\t\t\t Select your option from 1-3: ");
    cin>>p1op;

    switch(p1op)
    {
        case 1:
             system("cls");
  system("COLOR 2");

cout<<endl<<endl<<endl<<endl<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(219)<<char(219)<<char(187)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(187)                <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)                  <<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)              <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)<<char(32)<<char(32)                     <<char(219)<<char(219)<<char(187)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(187)        <<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(219)<<char(219)<<char(187)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)                <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)                  <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(219)<<char(219)<<char(187)              <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(219)<<char(219)<<char(187)<<char(32)<<char(32)                     <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)        <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(200)<<char(219)<<char(219)<<char(187)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(219)<<char(219)<<char(201)<<char(188)                <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)<<char(176)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)<<char(176)                  <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)              <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(188)<<char(32)<<char(32)                     <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)        <<char(200)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(176)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(176)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(205)<<char(219)<<char(219)<<char(219)<<char(219)<<char(186)<<char(176)                <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(188)<<char(176)<<char(176)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(188)<<char(176)<<char(176)                  <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)              <<char(219)<<char(219)<<char(201)<<char(205)<<char(205)<<char(219)<<char(219)<<char(187)<<char(32)<<char(32)                     <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)        <<char(176)<<char(200)<<char(205)<<char(205)<<char(205)<<char(219)<<char(219)<<char(187)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(176)<<char(200)<<char(219)<<char(219)<<char(201)<<char(188)<<char(176)<<char(200)<<char(219)<<char(219)<<char(201)<<char(188)<<char(176)                <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(187)<<char(32)<<char(32)                    <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)                  <<char(200)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(188)              <<char(219)<<char(219)<<char(186)<<char(176)<<char(176)<<char(219)<<char(219)<<char(186)<<char(32)<<char(32)                     <<char(200)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(188)        <<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(201)<<char(188)<<endl;
  cout<<"\t\t\t\t\t\t"<<char(176)<<char(176)<<char(176)<<char(200)<<char(205)<<char(188)<<char(176)<<char(176)<<char(176)<<char(200)<<char(205)<<char(188)<<char(176)<<char(176)                <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(32)<<char(32)                    <<char(200)<<char(205)<<char(188)<<char(176)<<char(176)<<char(176)<<char(176)<<char(176)                  <<char(176)<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(176)              <<char(200)<<char(205)<<char(188)<<char(176)<<char(176)<<char(200)<<char(205)<<char(188)<<char(32)<<char(32)                     <<char(176)<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(176)        <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<char(176)<<endl;

    User.text_animation("\n\n\t\t\t\t \t\t\t\t            USER AGREEMENT TERMS\n\n");
    User.text_animation("\t\t\t\tService Policy:");
    User.text_animation("\n\t\t\t\tIt's a non-profitable platform where a person can get health related services.");
    User.text_animation("Recipient and Donor can meet through\n\t\t\t\tthis platform, one can also ");
    User.text_animation("search for a Physician anytime anywhere.Also one can check his/her BMI regularly");
    User.text_animation(" and get \n\t\t\t\tsome health tips on it. We also have other valuable health services.");
    User.text_animation("\n\t\t\t\tFor enjoying all these service one have to be a registered member of us.");
     User.text_animation("In case of change of mind,anyone is able to\n\t\t\t\tcancel his/her registration too.\n\n\n");
     User.text_animation("\t\t\t\tInstructions:");
     User.text_animation("Your all information has to be filled up in block letters except e-mail ID and password and use unders");
     User.text_animation("\n\t\t\t\tcores as a replacement of space.");
     User.text_animation("\n\t\t\t\teg. NAME- OLIUR_RAHMAN");
    User.text_animation("\n\n\n\n\t\t\t        If you're agree with our service policy then,\n");
    cout<<"                                                                      ";
    cout<<"\n\n\t\t\t\t\t\t\t       ";system("pause");
    system("CLS");

             User.reg();
             cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
			break;
		case 2:
		    system("cls");
			do
            { system ("CLS");
            system("color 2");
    user();
      User.text_animation("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t:::::LOGIN MENU:::::\n");
     User.text_animation("\n\t\t\t\t\t\t\t\t     1. LOGIN AS A USER");
     User.text_animation("\n\t\t\t\t\t\t\t\t     2. LOGIN AS A VOLUNTEER");
      User.text_animation("\n\t\t\t\t\t\t\t\t     3. LOGIN AS AN ADMIN");
      User.text_animation("\n\t\t\t\t\t\t\t\t     4. GO BACK");
      User.text_animation("\n\n\t\t\t\t\t\t\t\t  Select your option from 1-4: ");
cin>>p3op;
system("CLS");
switch (p3op)
{
case 1:
    system("color 2");
    User.login();
    do
            { system ("CLS");
            system("color 2");
    user();
      User.text_animation("\n\n\n\n\n\n\t\t\t\t\t\t\t\t    :::::USER ACCESSIBILITIES:::::");
      User.text_animation("\n\n\n\t\t\t\t\t\t\t\t1. USER ACCOUNT INFORMATION.");
      User.text_animation("\n\t\t\t\t\t\t\t\t2. REQUEST FOR DONATION.");
      User.text_animation("\n\t\t\t\t\t\t\t\t3. SEARCH FOR A SPECIALIZED PHYSICIAN");
      User.text_animation("\n\t\t\t\t\t\t\t\t4. YOUR BODY MASS INDEX(BMI) AND HEALTH TIPS.");
      User.text_animation("\n\t\t\t\t\t\t\t\t5. REGISTER YOURSELF AS A POSTHUMOUS CONTRIBUTOR.");
      User.text_animation("\n\t\t\t\t\t\t\t\t6. JOIN AS WFU VOLUNTEER.");
      User.text_animation("\n\t\t\t\t\t\t\t\t7. LOG OUT.");
      User.text_animation("\n\n\t\t\t\t\t\t\t           Select your option from 1-7: ");
cin>>p3op;
system("CLS");
switch (p3op)
{
case 1:

 do{
        system("cls");
    user();
      User.text_animation("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   :::::USER ACCOUNT:::::");
      User.text_animation("\n\n\n\t\t\t\t\t\t\t\t1. SHOW INFORMATION");
      User.text_animation("\n\t\t\t\t\t\t\t\t2. MODIFY INFORMATION.");
      User.text_animation("\n\t\t\t\t\t\t\t\t3. GO BACK.");
      User.text_animation("\n\n\n\t\t\t\t\t\t\t      Select your option from 1-3: ");
    cin>>p2op;
    switch(p2op)
    {
case 1:
    system("cls");
    user();
    User.showinfo();
    cout<<"\n\n\t\t\t\t\t\t\t         ";system("pause");
    break;
case 2:
    system("cls");
    User.modinfo();
    break;
case 3:
    break;
default:
    user();
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET"<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t       ";system("pause");
    }
    }while (p2op!=3);
    continue;
case 2:
    do{
        system("cls");
   user();
      User.text_animation("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  :::::REQUEST FOR DONATION:::::");
       User.text_animation("\n\n\t\t\t\t\t\t\t\t\t1. BLOOD DONATION        ");
       User.text_animation("\n\t\t\t\t\t\t\t\t\t2. ORGAN DONATION        ");
       User.text_animation("\n\t\t\t\t\t\t\t\t\t3. GO BACK               ");
      User.text_animation("\n\n\t\t\t\t\t\t\t         Select your option from 1-3 : ");
    cin>>p7op;
    cout<<endl<<endl<<endl;
    switch(p7op)
    {
case 1:
    system("cls");
    User.reqbg_donor();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 2:
    system("cls");
     User.reqorg_donor();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 3:
    break;
default:
    user();
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    }
    }while (p7op!=3);
    continue;
case 3:
    system("CLS");
    User.SearchPhysician();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 4:
    system("CLS");
    User.BMI();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 5:
    system("CLS");
    User.regPosthum();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;

case 6:
    system("CLS");
    Vol.volsignup();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 7:
    break;
default:
    user();
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
}
            }
while(p3op!=7);
continue;
case 2:
    system("CLS");
    system("color 2");
    Vol.volsignin();

       do
        { system("cls");
        system("color 2");
    user();
       User.text_animation("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t:::::VOLUNTEER ACCESSIBILITIES:::::");
       User.text_animation("\n\n\t\t\t\t\t\t\t\t1. REQUEST LIST FOR DONATION");
       User.text_animation("\n\t\t\t\t\t\t\t\t2. UPDATE DONATION INFORMATION");
       User.text_animation("\n\t\t\t\t\t\t\t\t3. UPDATE HOSPITAL HELP DESKS INFORMATION");
       User.text_animation("\n\t\t\t\t\t\t\t\t4. LOG OUT");

      User.text_animation("\n\n\t\t\t\t\t\t\t\t   Select your option from 1-4: ");
    cin>>p8op;
    switch(p8op)
{
case 1:
    system("cls");
      do
        {system("cls");
user();
       User.text_animation("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t:::::REQUEST LIST FOR DONATION:::::");
       User.text_animation("\n\n\n\t\t\t\t\t\t\t\t1. BLOOD DONATION REQUESTS LIST");
       User.text_animation("\n\t\t\t\t\t\t\t\t2. ORGAN DONATION REQUESTS LIST");
       User.text_animation("\n\t\t\t\t\t\t\t\t3. GO BACK");

      User.text_animation("\n\n\t\t\t\t\t\t\t\t  Select your option from 1-3: ");
    cin>>p5op;
    switch(p5op)
    {
case 1:
    system("cls");
    Res.ret_blood_req_list();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 2:
    system("cls");
     Res.ret_org_req_list();
     cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 3:
    break;
default:
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINALID TARGET"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
        }
}
while (p5op!=3);
continue;

case 2:
    do{
        system("cls");
        system("color 2");
           user();
    User.text_animation("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t:::::UPDATE DONATION INFORMATION:::::");
     User.text_animation("\n\n\n\t\t\t\t\t\t\t\t\t1. BLOOD DONATION");
     User.text_animation("\n\t\t\t\t\t\t\t\t\t2. ORGAN DONATION");
     User.text_animation("\n\t\t\t\t\t\t\t\t\t3. GO BACK");
     User.text_animation("\n\n\t\t\t\t\t\t\t\t   Select your option from 1-3: ");
     cin>>p9op;
    switch(p9op)

    {
    case 1:
    system("cls");
    Res.updtBdonor();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 2:
    system("cls");
    Res.updtOdonor();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 3:
break;
default:
    user();
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    }
    }while(p9op!=3);
    continue;

case 3:
    system("cls");
    user();
    Vol.hospt_infoupdt();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 4:
    break;

default:
    user();
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");

     }
}
     while (p8op!=4);
     continue;

case 3:
    system("cls");
    Admin.adminlogin();
    do
        {system("cls");
        system("color 2");
    user();
     User.text_animation("\n\n\n\n\n\n\t\t\t\t\t\t\t     :::::ADMIN ACCESSIBILITIES:::::\n\n");
     User.text_animation("\n\t\t\t\t\t\t\t\t1. ALL MEMBER LIST");
     User.text_animation("\n\t\t\t\t\t\t\t\t2. ALL DONOR LIST");
     User.text_animation("\n\t\t\t\t\t\t\t\t3. ALL DONATION RECIPIENT LIST");
     User.text_animation("\n\t\t\t\t\t\t\t\t4. REGISTERED POSTHUMOUS CONTRIBUTOR LIST");
    User.text_animation("\n\t\t\t\t\t\t\t\t5. ALL PHYSICIAN LIST");
     User.text_animation("\n\t\t\t\t\t\t\t\t6. ALL VOLUNTEER LIST");
     User.text_animation("\n\t\t\t\t\t\t\t\t7. LOG OUT");

    User.text_animation("\n\n\t\t\t\t\t\t\t     Select your option from 1-7: ");
    cin>>p8op;
    cout<<endl;
    switch(p8op)
{
case 1:
    system("cls");
    Res.ret_bdl();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
 case 2:
    system("cls");
    int p21op;
     do
        {system("cls");
        system("color 2");
    user();
     User.text_animation("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t    :::::DONOR LIST:::::\n\n");
     User.text_animation("\n\t\t\t\t\t\t\t\t1. BLOOD DONOR LIST");
     User.text_animation("\n\t\t\t\t\t\t\t\t2. ORGAN DONOR LIST");
     User.text_animation("\n\t\t\t\t\t\t\t\t3. GO BACK");

    User.text_animation("\n\n\t\t\t\t\t\t\t     Select your option from 1-3: ");
    cin>>p21op;
    cout<<endl;
    switch(p21op)
    {
    case 1:
        system("cls");
        Res.BloodDonorList();
        cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
        break;
    case 2:
        system("cls");
        Res.OrganDonorList();
        cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
        break;
    case 3:
        break;
    default:
        user();
        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET!"<<endl;
        cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    }
        }while (p21op!=3);
        continue;
case 3:
    system("cls");
    int p20op;
     do
        {system("cls");
        system("color 2");
    user();
     User.text_animation("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t    :::::RECIPIENTS LIST:::::\n\n");
     User.text_animation("\n\t\t\t\t\t\t\t\t1. BLOOD DONATION RECIPIENT LIST");
     User.text_animation("\n\t\t\t\t\t\t\t\t2. ORGAN DONATION RECIPIENT LIST");
     User.text_animation("\n\t\t\t\t\t\t\t\t3. GO BACK");

    User.text_animation("\n\n\t\t\t\t\t\t\t\tSelect your option from 1-3: ");
    cin>>p20op;
    cout<<endl;
    switch(p20op)
    {
    case 1:
        system("cls");
        Res.BloodRecList();
        cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
        break;
    case 2:
        system("cls");
        Res.OrganRecList();
        cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
        break;
    case 3:
        break;
    default:
        user();
        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET!"<<endl;
        cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    }
        }while (p20op!=3);
        continue;
case 4:
    system("cls");
    Admin.ret_posthumous_list();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 5:
    system("cls");
     Res.ret_physician_list();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 6:
    system("cls");
    Res.ret_vollist();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
case 7:
    break;
default:
    user();
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET!"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
}
     }
     while (p8op!=7);

    continue;
case 4:
    break;
default:
    user();
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET!"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
        }

}
while (p3op!=4);
    continue;
case 3:
    system("cls");
    Res.ret_helpdesk();
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    break;
default:
    user();
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID TARGET"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\t       ";system("pause");
    }
    }while(p1op!=3);
}
