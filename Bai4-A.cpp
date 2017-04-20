#include <iostream>
using namespace std;
void dayafterplus(int ,int ,int ,int);
int main()
{
	int day,month,year,dayplus,run=0,arrayofday[100],count;
	cin >> day >> month >> year;
	do
	{
		cin >> dayplus;
		arrayofday[run++]=dayplus;
	} while (dayplus!=0);
	for (count=0;count<run-1;count++)
		{
			dayafterplus(day,month,year,arrayofday[count]);
		}

}

void dayafterplus(int day,int month, int year, int dayplus)
{
	if (dayplus>0)
	{
		int sum=day+dayplus;
		do
		{
			if ((year%4==0 && year%100!=0) || (year%400==0))
			{
				if (month==1)
				{
					if (sum>31)
					{
						while (sum>29)
						{
							month++;
							if (month==2)
								sum-=31;
							else if (month==3)
								sum-=29;
							else if (month==4 || month==6 || month==9 || month==11)
								sum-=31;
							else if (month==5 || month==7 || month==8 || month==10 || month==12)
								sum-=30;
							else if (month>12 && sum<=31)
							{
								month=12;
								break;
							}
							else if (month>12 && sum>31)
							{
								year++;
								month-=12;
								sum-=31;
								break;
							}

						}
					}
					if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
				else if (month==2)
				{
					if (sum>29)
					{
						while (sum>29 )
						{
							month++;
							if (month==3)
								sum-=29;
							else if (month==4 || month==6 || month==9 || month==11)
								sum-=31;
							else if (month==5 || month==7 || month==8 || month==10 || month==12)
								sum-=30;
							else if (month>12 && sum<=31)
							{
								month=12;
								break;
							}
							else if (month>12 && sum>31)
							{
								year++;
								month-=12;
								sum-=31;
								break;
							}
						}
					}
					if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
				else if (month==3 || month==5 || month==7 || month==8 || month==10)
				{
					if (sum>31)
					{
						while (sum>30 )
						{
							month++;
							if (month==4 || month==6 || month==9 || month==11)
								sum-=31;
							else if (month==5 || month==7 || month==8 || month==10 || month==12)
								sum-=30;
							else if (month>12 && sum<=31)
							{
								month=12;
								break;
							}
							else if (month>12 && sum>31)
							{
								year++;
								month-=12;
								sum-=31;
								break;
							}
						}
					}
					if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
				else if (month==4 || month==6 || month==9 || month==11)
				{
					if (sum>30)
					{
						while (sum>=30 )
						{
							month++;
							if (month==5 || month==7 || month==8 || month==10 || month==12)
								sum-=30;
							else if (month==6 || month==9 || month==11)
								sum-=31;
							else if (month>12 && sum<=31)
							{
								month=12;
								break;
							}
							else if (month>12 && sum>31)
							{
								year++;
								month-=12;
								sum-=31;
								break;
							}
						}
					}
					if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
				else if (month==12)
				{
					if (sum>31)
					{
						year++;
						month=1;
						sum-=31;
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
					}
					else if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
			}
			else
			{
				if (month==1)
				{
					if (sum>31)
					{
						while (sum>28 )
						{
							month++;
							if (month==2)
								sum-=31;
							else if (month==3)
								sum-=28;
							else if (month==4 || month==6 || month==9 || month==11)
								sum-=31;
							else if (month==5 || month==7 || month==8 || month==10 || month==12)
								sum-=30;
							else if (month>12 && sum<=31)
							{
								month=12;
								break;
							}
							else if (month>12 && sum>31)
							{
								year++;
								month-=12;
								sum-=31;
								break;
							}
						}
					}
					if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
				else if (month==2)
				{
					if (sum>28)
					{
						while (sum>28 )
						{
							month++;
							if (month==3)
								sum-=28;
							else if (month==4 || month==6 || month==9 || month==11)
								sum-=31;
							else if (month==5 || month==7 || month==8 || month==10 || month==12)
								sum-=30;
							else if (month>12 && sum<=31)
							{
								month=12;
								break;
							}
							else if (month>12 && sum>31)
							{
								year++;
								month-=12;
								sum-=31;
								break;
							}
						}
					}
					if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
				else if (month==3 || month==5 || month==7 || month==8 || month==10)
				{
					if (sum>31)
					{
						while (sum>30 )
						{
							month++;
							if (month==4 || month==6 || month==9 || month==11)
								sum-=31;
							else if (month==5 || month==7 || month==8 || month==10 || month==12)
								sum-=30;
							else if (month>12 && sum<=31)
							{
								month=12;
								break;
							}
							else if (month>12 && sum>31)
							{
								year++;
								month-=12;
								sum-=31;
								break;
							}
						}
					}
					if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
				else if (month==4 || month==6 || month==9 || month==11)
				{
					if (sum>30)
					{
						while (sum>=30 )
						{
							month++;
							if (month==5 || month==7 || month==8 || month==10 || month==12)
								sum-=30;
							else if (month==6 || month==9 || month==11)
								sum-=31;
							else if (month>12 && sum<=31)
							{
								month=12;
								break;
							}
							else if (month>12 && sum>31)
							{
								year++;
								month-=12;
								sum-=31;
								break;
							}
						}
					}
					if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
				else if (month==12)
				{
					if (sum>31)
					{
						year++;
						month=1;
						sum-=31;
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
					}
					else if (sum<=31)
						cout<<sum<<"-"<<month<<"-"<<year<<endl;
				}
			}
			if (sum<=31)
				break;
		} while (sum>29);
	}
	else if (dayplus<0)
	{
		int sum=day+dayplus;
		do
		{
			if ((year%4==0 && year%100!=0) || (year%400==0))
			{
				if (sum<=0)
				{
					while (sum<0)
					{
						month--;
						if (month==10 || month==8 || month==7 || month==5 || month==3 || month==1)
							sum+=31;
						else if (month==11 || month==9 || month==6 || month==4)
							sum+=30;
						else if (month==2)
							sum+=29;
						else if (month<1)
						{
							year--;
							month=12;
							sum+=31;
							break;
						}
					}
				}
				if (sum>0)
					cout<<sum<<"-"<<month<<"-"<<year<<endl;
			}
			else
			{
				if (sum<=0)
				{
					while (sum<0)
					{
						month--;
						if (month==10 || month==8 || month==7 || month==5 || month==3 || month==1)
							sum+=31;
						else if (month==11 || month==9 || month==6 || month==4)
							sum+=30;
						else if (month==2)
							sum+=29;
						else if (month<1)
						{
							year--;
							month=12;
							sum+=31;
							break;
						}
					}
				}
				if (sum>0)
					cout<<sum<<"-"<<month<<"-"<<year<<endl;
			}
		} while (sum<=0);
	}
}
