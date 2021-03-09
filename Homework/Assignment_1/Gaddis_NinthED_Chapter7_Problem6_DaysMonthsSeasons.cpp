#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int NofM = 3; //Declaring : Holds a real number of months.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
const int DinM = 30; //Declaring : Holds a real number of days in months.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
const int NofS = 3;//Declaring : Holds a real number of seasons. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647

void Rdff ( //Read data from file
    char data [NofM][DinM]); //Declaring: Holds a real number of any individual character
int Grprt ( //Generate report
    int report [NofM] [NofS], //Declaring : Holds a real number. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
    char data [NofM] [DinM]);//Declaring : Holds a real number of any individual character 
void prntrpt ( //Print report
    int report [NofM] [NofS], //Declaring : Holds a real number. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
    int MofMRD); //Months of Rainy Days Max

int main()
{
char data [NofM] [DinM];
int report [NofM] [NofS]; Declaring : //Holds a real number. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
int MofMRD; //Holds a real number of Months of Max Rainy Days. Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
Rdff (data); //Data of file
MofMRD = Grprt (report, data); //Report of Max Rainy Days
prntrpt (report, MofMRD); //Print report of Max Rainy Days
}
void Rdff ( //So not output the data file
char data[NofM][DinM]) ///Declaring: Holds a real number of any individual character
{
    int m, d; //Declaring : Holds a real number of months.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
    ifstream infile; //Taking files from the stream files
    infile.open ("RainOrShine.txt"); //Opening the stream file called RainOrShine.txt
    if (!infile)//If the specific condition is true then the following happens    
    {
        cout<<"Input file cannot be opened!:"<<endl;//Output
        exit(1);
    }
    for (m=0; m<NofM; m++)//Will continue to loop if condition is true
    {
        for (d=0;d<DinM; d++)//Will continue to loop if condition is true
        {
            infile>>data[m][d];
        }
    }        
    infile.close(); //Close the stream file
}
int Grrpt(//Declaring : Holds a real number of a generated report.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
    int report[NofM][NofS],//Declaring : Holds a real number of months.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
    char data [NofM] [DinM])
{
    int m, d, s;//Declaring : Holds a real number of months, days and seasons.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
    int MRD =0;//Declaring : Holds a real number of max rain days.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
    int MofMRD =0;//Declaring : Holds a real number of months of max rain days.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
    for (m=0; m<NofM; m++) //Will continue to loop if condition is true
    {
        for (s=0; s<NofS; s++)//Will continue to loop if condition is true
        {
            report[m][s] =0;
        }
    }
    for (m=0;m<NofM; d++)//Will continue to loop if condition is true
    {
        for (d=0; d<DinM; d++)//Will continue to loop if condition is true
            if (data[m][d]='R')//If the specific condition is true then the following happens
            {
                report [m][0]++;
                if (report[m][0]>MRD)//If the specific condition is true then the following happens
                {
                    MRD=report[m][0];
                    MofMRD=m;
                }
            }
        if (data[m][d]=='S')//If the specific condition is true then the following happens
        {
            report [m][1]++;
        }
        if (data [m][d] =='C')//If the specific condition is true then the following happens
        {
            report [m][2]++;
        }
    }
    return MofMRD;
}
void prntrpt ( //Do not output the print report
int report[NofM][NofS],//Declaring : Holds a real number of reports of months and seasons.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
        int MofMRD)//Declaring : Holds a real number of months of max rain days.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
{
    int m, s;//Declaring : Holds a real number of months of months and seasons.Is 4 bytes. Range is −2,147,483,648 to +2,147,483,647
    cout<<"Report for each month and the entirety of the three months:"<<endl;//Output
    cout<<"---------------"<<endl;
    cout<<right<<setw(18)<<"R_days"<<setw(8)//Output
            <<"C_Days"<<setw(8)<<"S_Days"<<endl;
    cout<<"---------------"<<endl;//Output
    for (m=0; m<NofM; m++)//If the specific condition is true then the following happens
    {
        if(m==0)//If the specific condition is true then the following happens
            cout<<left<<setw(9)<<"June:";//Output
        if(m==1)//If the specific condition is true then the following happens
            cout<<left<<setw(9)<<"July:";//Output
        if (m==2)//If the specific condition is true then the following happens
            cout<<left<<setw(9)<<"August:";//Output
        for (s=0; s<NofS; s++)//If the specific condition is true then the following happens
        {
            cout<<right<<setw(8)<<report[m][s]; //Output
        }
        cout<<endl;
    }
    cout<<"---------------"<<endl;
    cout<<endl<<"The month that had the largest amount of rain days:"; //Output
    if(MofMRD ==0)//If the specific condition is true then the following happens
        cout<<left<<setw(9)<<"June"<<endl;//Output
    if (MofMRD ==1)//If the specific condition is true then the following happens
        cout<<left<<setw(9)<<"July"<<endl;//Output
    if(MofMRD ==2)//If the specific condition is true then the following happens
        cout<<left<<setw(9)<<"August"<<endl;//Output
}