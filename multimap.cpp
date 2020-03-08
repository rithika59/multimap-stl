#include<iostream>
#include<map>

int main()
{
	std::multimap<int,std::string> m;
	std::multimap<int,std::string>::iterator it;
	std::string name;
	int score;
	int n;
	std::cout<<"Enter the number of students in group: \n";
	std::cin>>n;

	for(int i=0; i<n; i++)
	{
		std::cout<<"Enter student "<<i+1<<" name and marks: \n";
		std::cin>>name>>score;
		m.insert(std::pair<int,std::string>(score,name));
	}

	for(it = m.begin(); it != m.end(); it++)
	{
		std::string status;
		((*it).first>40)?status = "Pass":status = "Fail";
		std::cout<<(*it).second<<" - "<<(*it).first<<" - "<<status<<std::endl;
	}
	std::cout<<std::endl;



	return 0;
}
