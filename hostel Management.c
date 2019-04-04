#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct FACULTY
{
    char name[20];
    int Id_No;
    int mobile_no;
    char email_Id;
    char Address;
    int Reg_id;
    char Father_Name;

};


struct Student_Std
{
    char name[20];
    int roll_no;
    int mobile_no;
    char email_Id;
    char Address;
    int Reg_id;
    char Father_Name;

};



struct secA
{
    char name[20];
    int Id_no;
    int mobile_no;
    char email_Id;
    char Address;
    char Father_Name;

};
struct secB
{
    char name[20];
    int Id_no;
    int mobile_no;
    char email_Id;
    char Address;
    char Father_Name;

};


struct BCA1year
{
    char HOD_Name;
    char DEAN_Name;

    int Reg_id;
    int mobile_no;
    char email_Id;
    char Address;

    struct secA;
    struct secB;

};
struct BCA2year
{
    char HOD Name;
    char DEAN Name;

    int Reg_id;
    int mobile_no;
    char email_Id;
    char Address;




};
struct BCA3year
{
    char HOD Name;
    char DEAN Name;
    int Reg_id;
    int mobile_no;
    char email_Id;
    char Address;

};

struct BCA Dept{
     char HOD Name;
     char DEAN Name;
     struct FACULTY;
     int Reg_id;
     int mobile_no;
     char email_Id;
     char Address;

};

struct VICT
{
     char DIRECTOR Name;
      char DEAN Name;
       char HOD Name;
     int Reg_id;
    int mobile_no;
    char email_Id;
    char Address;
    struct BCA Dept
    struct BCA1year;
    struct BCA2year;
    struct BCA3year;
};
struct VCE
{
    char DIRECTOR Name;
      char DEAN Name;
       char HOD Name;
     int Reg_id;
    int mobile_no;
    char email_Id;
    char Address;
};
struct VIFT
{
   char DIRECTOR Name;
      char DEAN Name;
       char HOD Name;
     int Reg_id;
    int mobile_no;
    char email_Id;
    char Address;
};
struct VKP
{
    char DIRECTOR Name;
    int Reg_id;
    int mobile_no;
    char email_Id;
    char Address;

    struct VIFT;
    struct VCE;
    struct VICT;
};
void main()
{
    struct VKP;
    printf("++++++++++++++++++++++ WEL-COME TO VIDYA KNOWLEDGE PARK ++++++++++++++++++++++");
    printf("Enter VKP DIRECTOR Name:-");
    printf("Enter VKP Registration Id:-");
    printf("Enter VKP Mobile No:-");
    printf("Enter VKP Email.Id:-");
    printf("Enter VKP Address:-");


    printf("++++++++++++++++++++++ WEL-COME TO VIDYA INSTITUTE OF FASHION TEACHING ++++++++++++++++++++++");
    printf("Enter VIFT DIRECTOR Name:-");
    printf("Enter VIFT DEAN Name:-");
    printf("Enter VIFT HOD Name:-");
    printf("Enter VIFT Registration Id:-");
    printf("Enter VIFT Mobile No:-");
    printf("Enter VIFT Email.Id:-");
    printf("Enter VIFT Address:-");


    printf("++++++++++++++++++++++ WEL-COME TO VIDYA INSTITUTE OF CREATIVE TEACHING ++++++++++++++++++++++");
    printf("Enter VICT DIRECTOR Name:-");
    printf("Enter VICT DEAN Name:-");
    printf("Enter VICT HOD Name:-");
    printf("Enter VICT Registration Id:-");
    printf("Enter VICT Mobile No:-");
    printf("Enter VICT Email.Id:-");
    printf("Enter VICT Address:-");


    printf("++++++++++++++++++++++ WEL-COME TO VIDYA COLLEGE OF ENGINEERING  ++++++++++++++++++++++");
    printf("Enter VCE DIRECTOR Name:-");
    printf("Enter VCE DEAN Name:-");
    printf("Enter VCE HOD Name:-");
    printf("Enter VCE Registration Id:-");
    printf("Enter VCE Mobile No:-");
    printf("Enter VCE Email.Id:-");
    printf("Enter VCE Address:-");


    printf("++++++++++++++++++++++ WEL-COME TO Bachelor Of Computer Application  ++++++++++++++++++++++");
    printf("Enter BCA HOD Name:-");
    printf("Enter BCA DEAN Name:-");
    printf("Enter BCA FACULTY Name:-");
    printf("Enter BCA Registration Id:-");
    printf("Enter BCA Mobile No:-");
    printf("Enter BCA Email.Id:-");
    printf("Enter BCA Address:-");


    printf("++++++++++++++++++++++ WEL-COME TO Bachelor Of Computer Application In First Year  ++++++++++++++++++++++");
    printf("Enter BCA First Year HOD Name:-");
    printf("Enter BCA First Year DEAN Name:-");
    printf("Enter BCA First Year FACULTY Name:-");
    printf("Enter BCA First Year Registration Id:-");
    printf("Enter BCA First Year Mobile No:-");
    printf("Enter BCA First Year Email.Id:-");
    printf("Enter BCA First Year Address:-");




    printf("++++++++++++++++++++++ WEL-COME TO BCA In First Year Section = A  ++++++++++++++++++++++");
    printf("Enter Class Co-Ordinator Name:-");
    printf("Enter Class Co-Ordinator Registration Id:-");
    printf("Enter Class Co-Ordinator Mobile No:-");
    printf("Enter Class Co-Ordinator Email.Id:-");
    printf("Enter Class Co-Ordinator Address:-");


    printf("++++++++++++++++++++++ WEL-COME TO BCA In First Year Section = B  ++++++++++++++++++++++");
    printf("Enter Class Co-Ordinator Name:-");
    printf("Enter Class Co-Ordinator Registration Id:-");
    printf("Enter Class Co-Ordinator Mobile No:-");
    printf("Enter Class Co-Ordinator Email.Id:-");
    printf("Enter Class Co-Ordinator Address:-");



    printf("++++++++++++++++++++++ Student Details  ++++++++++++++++++++++");
    printf("Enter Std Name:-");
    printf("Enter Std Roll No:-");
    printf("Enter Std Mobile No:-");
    printf("Enter Std Email.Id:-");
    printf("Enter Std Registration Id:-");
    printf("Enter Std Address:-");


    printf("++++++++++++++++++++++ Faculty Details  ++++++++++++++++++++++");
    printf("Enter Faculty Name:-");
    printf("Enter Faculty Id No:-");
    printf("Enter Faculty Mobile No:-");
    printf("Enter Faculty Email.Id:-");
    printf("Enter Faculty Registration Id:-");
    printf("Enter Faculty Address:-");



    getch();
}


