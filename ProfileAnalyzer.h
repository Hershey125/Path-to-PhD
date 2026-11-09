#include "Student.h"
#include "Recommendation.h"

// Analyzes studen'ts overall profile weaknesses/strengths
class ProfileAnalyzer {
private:
static const int size = 20;
Recommendation recommendations[size];

public:
void analyzeProfile(Student student);

void checkExperiences(Student student);
void checkSkills(Student student);
void checkDeadlines(Student student);


void displayRecommendations();
void clearRecommendations();
};