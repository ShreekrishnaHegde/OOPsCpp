#include <iostream>
using namespace std;

#define MAX_C 10

int symbolTaken[11]={0};
int candidateCount = 0;
char symbols[10]= { '!', '@', '#', '$', '%', '^', '&', '*', '~', '+' };

class Candidate{    
    private:
        string name;
        int votes;
        char symbol;
    public:
        void fillCandidate(int);
        void display();
        void getVotes(int);
        friend void getResults(Candidate AllCandidates[]);
        
};

int main(){
    int choice;
    Candidate allCandidates[MAX_C];
    // getting the number of candidates
    cout<<"Enter the number of candidates: ";
    cin>>candidateCount;

    if (candidateCount >= MAX_C) {
        cout<<"Number of candidates cannot be greater "
               "than 10.\n Terminating the program\n\n";
        return 0;
    }
    for(int i=0;i<candidateCount;i++)
        allCandidates[i].fillCandidate(i+1);
    // getting the number of voters
    int numVoters;
    cout<<"Enter the number of voters: ";
    cin>>numVoters;

    // Collecting votes
    for (int i = 0; i < candidateCount; i++) {
        allCandidates[i].display();
    }
    for (int i = 0; i < numVoters; i++) {
        cout<<"Voter , please enter your choice (1-"<<candidateCount<<"): ";
        cin>>choice;
        allCandidates[choice-1].getVotes(choice);
    }

    // printing results
    getResults(allCandidates);
    return 0;
}
void getResults(Candidate allCandidates[])
{

    int maxVotes = 0;
    int winnerIndex = -1;
    int winnerFrequency = 0;
    for (int i = 0; i < candidateCount; i++) {
        if (allCandidates[i].votes > maxVotes) {
            maxVotes = allCandidates[i].votes;
            winnerIndex = i;
        }
    }

    for (int i = 0; i < candidateCount; i++) {
        if (allCandidates[i].votes == maxVotes) {
            winnerFrequency++;
        }
    }
    cout<<"\n-----RESULT-----\n";

    if (winnerFrequency > 1) {
        cout<<"No candidate has majority votes\n";
    }
    else if (winnerIndex != -1) {
        cout<<"The winner is: "<<allCandidates[winnerIndex].name<<"\nCandidate Symbol: "<<allCandidates[winnerIndex].symbol<<"\nwith "<<maxVotes<<" votes!\n";
    }
    else {
        cout<<"No winner\n";
    }
}
void Candidate :: getVotes(int choice){
    // checking for valid choice
    if (choice >= 1 && choice <= candidateCount) {
        votes++;
    }
    else {
        cout<<"Invalid choice! Please vote again.\n";
        getVotes(choice);
    }
    
    
}
void Candidate:: display()
{
        cout<<name<<"\t";
        cout<<symbol<<"\n";
}

void Candidate:: fillCandidate(int n){
    int num = 0;
    cout<<"Available Symbols: \n";
    for (int j = 0; j < 10; j++) {
        if (symbolTaken[j] == 1)
            continue;
        cout<<j + 1<<" "<<symbols[j]<<"\n";
    }

    cout<<"\nEnter the symbol number of candidate "<<n<<": ";
    cin>>num;

    if (num <= 0 || num > 10 || symbolTaken[num - 1] == 1) {
        cout<<"This Symbol is not available. Please choose from the available symbols\n";
        num = 0;
        fillCandidate(n);
    }
    else {
        symbolTaken[num - 1] = 1;
        symbol = symbols[num - 1];
        cout<<"Enter the name of candidate "<<n<<": ";
        cin>>name;
        votes = 0;
    }
}