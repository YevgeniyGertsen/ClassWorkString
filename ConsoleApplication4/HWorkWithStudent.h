struct Subject
{
	char * nameSubject;
	int bal;
};

struct Stydent
{
	char * fName;
	char * group;
	Subject * subject;
};

void generateName(char * name);
void generateGroup(char * groupName);
void generateSubject(Subject *sub);
