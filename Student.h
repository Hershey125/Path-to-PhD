#include "Experience.h"
#include "Skill.h"
#include "Opportunities.h"
using namespace std;
// Stores a student's academic history 
class Student {
private:

string name;
string major;
string education;

static const int size = 10;
Experience experiences[size];
Skill skills[size];
Opportunities opportunity[size];


public:
Student(string name, string major, string educationlevel);

string getName();
string getMajor();
string getEducationLevel();

void addExperience( Experience experience);
void addSkill( Skill skill);
void addOpportunity(Opportunities  opportunity);

void displayProfile() const;

};