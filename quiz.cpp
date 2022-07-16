#include<bits/stdc++.h>
#include<cctype> //toupper, tolower
#include<string>
//test
using namespace std;

int question=1,score=0,wrong=0;
string option;
string sol;
  
void quiz()
{ 
  gg:cout<<"Answer:";
  cin>>option;
  transform(option.begin(), option.end(), option.begin(),::tolower);
  while(option.length()!=1 || option!="a"&& option!="b"&& option!="c"&& option!="d")
  {
  cout<<"Please choose option from (a,b,c,d).\n"; 
  goto gg;
  } 
}

void check()
{
  if(option==sol)
  {
    score+=1;
  }
  else
  {
    wrong+=1;
  }
  question+=1;
}


void display()           
{   system("cls");   //clear screen
    char u;
    cout<<"\t\t\tWelcome to the Quiz game"<<endl;
    cout<<"\n----------------------------------RULES-----------------------------------"<<endl;
    cout<<"\nThere are 5 questions in the game."<<endl;
    cout<<"1 point each for correct answer.\n";
    cout<<"Each question has four options(a,b,c,d)."<<endl;
    cout<<"Please choose any one option."<<endl;
    cout<<"\n---------------------------------------------------------------------------"<<endl;
    cout<<"\n";
    cout<<"Please press s to start the game:";
    cin>>u;
    while(tolower(u)!='s')
    {
        cout<<"Please Enter the correct key:";
        cin>>u;

    }
    cout<<"\n";
    cout<<"Let's start the game.\n";
    cout<<"\n";
}

//game questions

void game()
{
  char ans;
  //q1
  cout<<question<<"."<<"Identify the correct extension of the user-defined header file in C++.\n";
  cout<<"(a).cpp\n(b).hg\n(c).h\n(d).hf"<<endl;
  quiz();
  sol="c";
  check();
  

  //q2                           
  cout<<endl<<question<<"."<<"C++ uses which approach?\n";
  cout<<"(a)Right-Left\n(b)Bottom-Up\n(c)Top-Down\n(d)Left-Right"<<endl;
  quiz();
  sol="b";
  check();

  //q3
  cout<<endl<<question<<"."<<"Which of the following data type is supported in C++ but not in C?\n";
  cout<<"(a)int\n(b)bool\n(c)float\n(d)double"<<endl;
  quiz();
  sol="b";
  check();
  
  //q4
  cout<<endl<<question<<"."<<"Which of the following loops is best when we know the number of iterations?\n";
  cout<<"(a)while\n(b)for\n(c)do-while\n(d)All of the above"<<endl;
  quiz();
  sol="b";
  check();

  //q5
  cout<<endl<<question<<"."<<"Identify the correct function from which the execution of C++ program starts?\n";
  cout<<"(a)new\n(b)start\n(c)pow\n(d)main"<<endl;
  quiz();
  sol="d";
  check();
  

  cout<<endl<<"Your score is: "<<score<<endl;
  cout<<"Wrong answers: "<<wrong<<endl;
  if(score==5)
    {
      cout<<"\n";
      cout<<"Congratulations!! You have aced the game...";
      cout<<"\n";
    }

  cout<<"\n"<<"Do you want to play again (y or n):  ";
  cin>>ans;
  tolower(ans);
  cout<<"\n";
  if(ans =='y')
  {
    question=1;
    score=0;
    wrong=0;
    game();
    if(score==5)
    {
      cout<<"\n";
      cout<<"Congratulations!! You have aced the game...";
    }
  }
  else{
    cout<<"Thank you for your participation.";
    cout<<"\n";
    exit(0);
  }  
}

int main()
{  
  display();
  game();
  return 0; 
}

