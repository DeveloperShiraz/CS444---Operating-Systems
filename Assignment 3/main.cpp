/*
This program reads the name of the students, the courses that they took, and their exams froma text file.
Then it calculates GPA of the students.
*/
#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
using namespace std;

 
int
main ()
{
  
    //file stream input:
    ifstream file;
  
 
string filename = "FinalGrades.txt";
  
//String Variables:
string Student_Name[20];
  
string Grade_Received[20];
  
string Course_First[20];
  
string Course_Second[20];
  
string Course_Third[20];
  
string Course_Fourth[20];
  
 
int Course1Exam1[20];
  
int Course1Exam2[20];
  
int Course1Exam3[20];
  
 
int Course2Exam1[20];
  
int Course2Exam2[20];
  
int Course2Exam3[20];
  
 
int Course3Exam1[20];
  
int Course3Exam2[20];
  
int Course3Exam3[20];
  
 
int Course4Exam1[20];
  
int Course4Exam2[20];
  
int Course4Exam3[20];
  
 
double Average_Course_1_Grade[20];
  
double Average_Course_2_Grade[20];
  
double Average_Course_3_Grade[20];
  
double Average_Course_4_Grade[20];
  
 
string Grade_First[20];
  
string Grade_Second[20];
  
string Grade_Third[20];
  
string Grade_Fourth[20];
  
 
double Grade_Point_Average[20];
  
 
int i = 0;
  
    //Opens the Input File:
    file.open (filename.c_str ());
  
    //Outputs The File:
    cout << "Name" << "\tGrade\t" << "Course-1\t" << "Exam-1 " << "Exam-2 " <<
    "Exam-3 " << "Course-2 " << "Exam-1 " << "Exam-2 " << "Exam-3 " 
    <<"Course-3 " << "Exam-1 " << "Exam-2 " << "Exam-3 " 
 <<"Course-4 " <<
    "Exam-1 " << "Exam-2 " << "Exam-3 " << endl;
  
cout <<
    "-----------------------------------------------------------------------------------------------------------------------"
    << endl;
  
    //Reads The File:
    while (!file.eof ())
    {
      
	//Reads Strings From File:
	file >> Student_Name[i] >> Grade_Received[i] >> Course_First[i] >>
	Course1Exam1[i] >> Course1Exam2[i] >> Course1Exam3[i] >>
	
Course_Second[i] >> Course2Exam1[i] >> Course2Exam2[i] >>
	Course2Exam3[i] >> 
Course_Third[i] >> Course3Exam1[i] >>
	Course3Exam2[i] >> Course3Exam3[i] >> 
Course_Fourth[i] >>
	Course4Exam1[i] >> Course4Exam2[i] >> Course4Exam3[i];
      
cout << Student_Name[i] << "\t" << Grade_Received[i] << "\t" <<
	Course_First[i] << "\t" << Course1Exam1[i] << " " << Course1Exam2[i]
	<< " " << Course1Exam3[i] << " " 
 <<Course_Second[i] << "\t " <<
	Course2Exam1[i] << " " << Course2Exam2[i] << " " << Course2Exam3[i] <<
	
" " << Course_Third[i] << "\t " << Course3Exam1[i] << " " <<
	Course3Exam2[i] << " " << Course3Exam3[i] << 
" " << Course_Fourth[i]
	<< "\t" << Course4Exam1[i] << " " << Course4Exam2[i] << " " <<
	Course4Exam3[i] << endl;
      
if (i == 19)
	
	{
	  
break;
	
}
      
i++;
    
}
  
//Calculate Avg GPA & Grades:
    cout <<
    "------------------------------Averages & Grades-----------------------"
    << endl;
  
for (int i = 0; i < 20; i++)
    {
      
Average_Course_1_Grade[i] =
	((Course1Exam1[i] + Course1Exam2[i] + Course1Exam3[i]) / 3);
      
if (Average_Course_1_Grade[i] >= 90)
	
	{
	  
Grade_First[i] = "A";
	
}
      
      else if (Average_Course_1_Grade[i] >= 80
	       && Average_Course_1_Grade[i] < 90)
	
	{
	  
Grade_First[i] = "B";
	
}
      
      else if (Average_Course_1_Grade[i] >= 70
	       && Average_Course_1_Grade[i] < 80)
	
	{
	  
Grade_First[i] = "C";
	
}
      
      else if (Average_Course_1_Grade[i] >= 60
	       && Average_Course_1_Grade[i] < 70)
	
	{
	  
Grade_First[i] = "D";
	
}
      
      else if (Average_Course_1_Grade[i] >= 0
	       && Average_Course_1_Grade[i] < 60)
	
	{
	  
Grade_First[i] = "F";
	
}
      
 
Average_Course_1_Grade[i] =
	((Course2Exam1[i] + Course2Exam2[i] + Course2Exam3[i]) / 3);
      
if (Average_Course_1_Grade[i] >= 90)
	
	{
	  
Grade_Second[i] = "A";
	
}
      
      else if (Average_Course_1_Grade[i] >= 80
	       && Average_Course_1_Grade[i] < 90)
	
	{
	  
Grade_Second[i] = "B";
	
}
      
      else if (Average_Course_1_Grade[i] >= 70
	       && Average_Course_1_Grade[i] < 80)
	
	{
	  
Grade_Second[i] = "C";
	
}
      
      else if (Average_Course_1_Grade[i] >= 60
	       && Average_Course_1_Grade[i] < 70)
	
	{
	  
Grade_Second[i] = "D";
	
}
      
      else if (Average_Course_1_Grade[i] >= 0
	       && Average_Course_1_Grade[i] < 60)
	
	{
	  
Grade_Second[i] = "F";
	
}
      
 
Average_Course_1_Grade[i] =
	((Course3Exam1[i] + Course3Exam2[i] + Course3Exam3[i]) / 3);
      
if (Average_Course_1_Grade[i] >= 90)
	
	{
	  
Grade_Third[i] = "A";
	
}
      
      else if (Average_Course_1_Grade[i] >= 80
	       && Average_Course_1_Grade[i] < 90)
	
	{
	  
Grade_Third[i] = "B";
	
}
      
      else if (Average_Course_1_Grade[i] >= 70
	       && Average_Course_1_Grade[i] < 80)
	
	{
	  
Grade_Third[i] = "C";
	
}
      
      else if (Average_Course_1_Grade[i] >= 60
	       && Average_Course_1_Grade[i] < 70)
	
	{
	  
Grade_Third[i] = "D";
	
}
      
      else if (Average_Course_1_Grade[i] >= 0
	       && Average_Course_1_Grade[i] < 60)
	
	{
	  
Grade_Third[i] = "F";
	
}
      
 
Average_Course_1_Grade[i] =
	((Course4Exam1[i] + Course4Exam2[i] + Course4Exam3[i]) / 3);
      
if (Average_Course_1_Grade[i] >= 90)
	{
	  
Grade_Fourth[i] = "A";
	
}
      
      else if (Average_Course_1_Grade[i] >= 80
	       && Average_Course_1_Grade[i] < 90)
	{
	  
Grade_Fourth[i] = "B";
	
}
      
      else if (Average_Course_1_Grade[i] >= 70
	       && Average_Course_1_Grade[i] < 80)
	{
	  
Grade_Fourth[i] = "C";
	
}
      
      else if (Average_Course_1_Grade[i] >= 60
	       && Average_Course_1_Grade[i] < 70)
	{
	  
Grade_Fourth[i] = "D";
	
}
      
      else if (Average_Course_1_Grade[i] >= 0
	       && Average_Course_1_Grade[i] < 60)
	{
	  
Grade_Fourth[i] = "F";
	
}
      
	//GPA Calculation Logic:
	Grade_Point_Average[i] =
	((Average_Course_1_Grade[i] + Average_Course_1_Grade[i] +
	  Average_Course_1_Grade[i] + Average_Course_1_Grade[i]) / 4) / 10;
      
	//Output Print Statements:
	cout << Student_Name[i] << " " << Average_Course_1_Grade[i] << "\t" <<
	Grade_First[i] << "\t" << Average_Course_1_Grade[i] << "\t" <<
	Grade_Second[i] << "\t" << Average_Course_1_Grade[i] << "\t" <<
	Grade_Third[i] << "\t" 
 <<Average_Course_1_Grade[i] << "\t" <<
	Grade_Fourth[i] << "\t" << Grade_Point_Average[i] << endl;
    
}
  
file.close ();
  
return 0;

}
