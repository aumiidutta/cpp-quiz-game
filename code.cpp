#include<bits/stdc++.h>
using namespace std;
int main()
{
string name; //name of player
float score=0; //initialising score
char poll;
string a1, a2, b1, b2, c1, c2, d1, d2, e1, e2;
//answers of questions stored in sting variables a, b, c, d, e
string a="roskosmos";
string b="apate";
string c="pickles";
string d="kesarbai kerkar";
string e="mt. mauna kea";


cout<<"Welcome to 'Are you feeling lucky'!"<<endl;
cout<<"Enter your name: ";
getline(cin, name);
cout<<"Ok "<<name<<", let's start with the game."<<endl;
cout<<endl;
cout<<endl;


cout<<"There will be five questions and answers should be only in lowercase."<<endl;
cout<<"Your score will be displayed at the end."<<endl;
cout<<endl;
cout<<endl;


cout<<"                  1. SCIENCE                  "<<endl;
cout<<"Name the russian space agency."<<endl;
cout<<"Attempt 1:"<<endl;
getline(cin, a1);
cout<<"You have said: "<<a1<<endl;
if (a1==a)
{
cout<<"Your answer is correct!";
score += 1;
}
else
{
cout<<"You have another attempt to answer correctly!"<<endl;
getline(cin, a2);
cout<<"You have said: "<<a2<<endl;
if (a2==a)
{
	cout<<"Your answer is correct!";
	score += 0.5;
}
else
{
cout<<"The correct answer is roskosmos.";
}
}
cout<<endl;
cout<<endl;


cout<<"                  2. MYTHOLOGY                  "<<endl;
cout<<"Who is the goddess of betrayal?"<<endl;
cout<<"Attempt 1:"<<endl;
getline(cin, b1);
cout<<"You have said: "<<b1<<endl;
if (b1==b)
{
	cout<<"Your answer is correct!";
	score += 1;
}
else
{
cout<<"You have another attempt to answer correctly!"<<endl;
getline(cin, b2);
cout<<"You have said: "<<b2<<endl;
if (b2==b)
{
	cout<<"Your answer is correct!";
	score += 0.5;
}
else
{
cout<<"The correct answer is apate.";
}
}
cout<<endl;
cout<<endl;


cout<<"                  3. SPORTS                  "<<endl;
cout<<"Name the dog who found the stolen FIFA world cup."<<endl;
cout<<"Attempt 1:"<<endl;
getline(cin, c1);
cout<<"You have said: "<<c1<<endl;
if (c1==c)
{
	cout<<"Your answer is correct!";
	score += 1;
}
else
{
cout<<"You have another attempt to answer correctly!"<<endl;
getline(cin, c2);
cout<<"You have said: "<<c2<<endl;
if (c2==c)
{
	cout<<"Your answer is correct!";
	score += 0.5;
}
else
{
cout<<"The correct answer is pickles.";
}
}
cout<<endl;
cout<<endl;


cout<<"                  4. MUSIC                  "<<endl;
cout<<"Who is the only Indian to have her song echo in interstellar space?"<<endl;
cout<<"Attempt 1:"<<endl;
getline(cin, d1);
cout<<"You have said: "<<d1<<endl;
if (d1==d)
{
	cout<<"Your answer is correct!";
	score += 1;
}
else
{
cout<<"You have another attempt to answer correctly!"<<endl;
getline(cin, d2);
cout<<"You have said: "<<d2<<endl;
if (d2==d)
{
	cout<<"Your answer is correct!";
	score += 0.5;
}
else
{
cout<<"The correct answer is kesarbai kerkar.";
}
}
cout<<endl;
cout<<endl;


cout<<"                  5. GEOGRAPHY                  "<<endl;
cout<<"Which mountain is taller than mount everest when height is measured from base to peak?"<<endl;
cout<<"Attempt 1:"<<endl;
getline(cin, e1);
cout<<"You have said: "<<e1<<endl;
if (e1==e)
{
	cout<<"Your answer is correct!";
	score += 1;
}
else
{
cout<<"You have another attempt to answer correctly!"<<endl;
getline(cin, e2);
cout<<"You have said: "<<e2<<endl;
if (e2==e)
{
	cout<<"Your answer is correct!";
	score += 0.5;
}
else
{
cout<<"The correct answer is Mauna kea.";
}
}
cout<<endl;
cout<<endl;


cout<<"Okay "<<name<<", Your score is "<<score<<endl;
if (score==5) 
{
cout<<"You're a genius!";
}
else if (score>2 && score<5)
{
cout<<"Sometime you too will have the perfect score!";
}
else
{
cout<<"Take out more time to do research in Chrome!";
}
cout<<endl;
cout<<endl;


cout<<"Did you enjoy playing game? (answer in y/n)"<<endl;
cin>>poll;
cout<<name<<" have voted for "<<poll;


return 0;
}
