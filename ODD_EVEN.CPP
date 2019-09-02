#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  clrscr();
  srand((unsigned)time(0));
  int select,toss,choise,bat=0,ball;
  cout<<"\t\t\tWelcome to the game of odd-even\n";
  cout<<"Are you ready for the game\n";
  cout<<"Make your selection of odd or even\n";
  cout<<"1 for odd and 2 for even\n";
  cin>>select;
  if (select==1)
    {
      cout<<"You choose odd\n";
      cout<<"Take out a number for toss\n";
      cin>>toss;
      int opptoss=rand()%10+1;
      cout<<"Comuter takes out the number\n";
      cout<<opptoss<<"\n";
      if ((toss+opptoss)%2!=0)
	{
	  cout<<"You won the toss\n";
	  cout<<"Make a selection for batting and bowling\n";
	  cout<<"1 for batting and 0 for bowling\n";
	  cin>>choise;
	  if (choise==1)
	    {
	      cout<<"You chose batting\n";
	      while(bat!=ball)
		{
		  cout<<"You take out-";
		  cin>>bat;
		  bat++;
		  cout<<"\n";
		  ball=rand()%10+1;
		  cout<<"Comp takes out-";
		  cout<<ball<<"\n";
		}

	      //if (bat==ball)
		//{
		  cout<<"Your final score is "<<bat<<"\n";
		//}
	    }
	  if (choise==2)
	    {
	      cout<<"You chose balling\n";
	      while(bat!=ball)
		{
		  cout<<"You take out-";
		  cin>>ball;
		  cout<<"\n";
		  bat=rand()%10+1;
		  cout<<"Comp takes out-";
		  cout<<bat;
		  bat++;
		}

	      //if (bat==ball)
		//{
		  cout<<"Comp final score is "<<bat<<"\n";
		//}
	      }
	}
      if ((toss+opptoss)%2==0)
	{
	  cout<<"You lost the toss\n";
	  cout<<"Comp makes a choise between batting and balling\n";
	  choise=rand()%2+1;
	  if (choise==1)
	    {
	      cout<<"Comp chose batting\n";
	      while (bat!=ball)
		{
		   cout<<"You take out-";
		   cin>>ball;
		   cout<<"\n";
		   bat=rand()%10+1;
		   cout<<"Comp takes out-";
		   cout<<bat;
		   bat++;
		}

	      //if (bat==ball)
		//{
		  cout<<"Comp final score is "<<bat;
		//}
	    }
	  if (choise==2)
	    {
	      cout<<"Comp chose balling\n";
	      while (bat!=ball)
		{
		  cout<<"You take out-";
		  cin>>bat;
		  bat++;
		  cout<<"\n";
		  ball=rand()%10+1;
		  cout<<"Comp takes out-";
		  cout<<ball<<"\n";
		}

	      //if (bat==ball)
		//{
		  cout<<"Your final score is "<<bat<<"\n";
		//}
	    }
	}
    }
  if (select==2)
    {
      cout<<"You choose even\n";
      cout<<"Take out a number for toss\n";
      cin>>toss;
      int opptoss=rand()%10+1;
      cout<<"Comuter takes out the number\n";
      cout<<opptoss<<"\n";
      if ((toss+opptoss)%2==0)
	{
	  cout<<"You won the toss\n";
	  cout<<"Make a selection for batting and bowling\n";
	  cout<<"1 for batting and 0 for bowling\n";
	  cin>>choise;
	  if (choise==1)
	    {
	      cout<<"You chose batting\n";
	      while(bat!=ball)
		{
		  cout<<"\nYou take out-";
		  cin>>bat;
		  bat++;
		  cout<<"\n";
		  ball=rand()%10+1;
		  cout<<"Comp takes out-";
		  cout<<ball<<"\n";
		}

	      //if (bat==ball)
		//{
		  cout<<"Your final score is "<<bat<<"\n";
		//}
	    }
	  if (choise==2)
	    {
	      cout<<"You chose balling\n";
	      while(bat!=ball)
		{
		  cout<<"\nYou take out-";
		  cin>>ball;
		  cout<<"\n";
		  bat=rand()%10+1;
		  cout<<"Comp takes out-";
		  cout<<bat;
		  bat++;
		}

	      //if (bat==ball)
		//{
		  cout<<"Comp final score is "<<bat<<"\n";
		//}
	      }
	}
      if ((toss+opptoss)%2!=0)
	{
	  cout<<"You lost the toss\n";
	  cout<<"Comp makes a choise between batting and balling\n";
	  choise=rand()%2+1;
	  if (choise==1)
	    {
	      cout<<"Comp chose batting\n";
	      while (bat!=ball)
		{
		   cout<<"You take out-";
		   cin>>ball;
		   cout<<"\n";
		   bat=rand()%10+1;
		   cout<<"Comp takes out-";
		   cout<<bat;
		   bat++;
		}

	      //if (bat==ball)
		//{
		  cout<<"Comp final score is "<<bat;
		//}
	    }
	  if (choise==2)
	    {
	      cout<<"Comp chose balling\n";
	      while (bat!=ball)
		{
		  cout<<"You take out-";
		  cin>>bat;
		  bat++;
		  cout<<"\n";
		  ball=rand()%10+1;
		  cout<<"Comp takes out-";
		  cout<<ball<<"\n";
		}

	      //if (bat==ball)
		//{
		  cout<<"Your final score is "<<bat<<"\n";
		//}
	    }
	}
    }

  getch();
}