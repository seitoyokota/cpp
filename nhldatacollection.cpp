#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class teamInfo
{
    private:
        string teamName,location,division,conference;
    public:
        teamInfo()
        {
            teamName = " ";
            location = " ";
            division = " ";
            conference = " ";
        }
        teamInfo(string t, string l, string d, string c)
        {
            teamName = t;
            location = l;
            division = d;
            conference = c;
        }
        void printTeam()
        {
            cout <<teamName << endl;
            cout << "Location: " << location << endl;
            cout << "Division: " << division << endl;
            cout << "Conference: " << conference << endl;
        }
        ~teamInfo()
        {
           // cout << "Team Info Destructor Called" << endl;
        }
};

class teamRegStats: public teamInfo
{
    private:
        int wins,losses,otLosses,points;
    public:
        teamRegStats()
        {
            wins = 0;
            losses = 0;
            otLosses = 0;
            points = 0;
        }
        teamRegStats(int w, int l, int ot)
        { 
            wins = w;
            losses = l;
            otLosses = ot;
            points = w*2 + ot;
        }
        ~teamRegStats()
        {
           // cout << "Team Stats Destructor Called" << endl;
        }
        void printTeamStats()
        {
            cout << "Wins: " << wins << endl;
            cout << "Losses: " << losses << endl;
            cout << "OT Losses: " << otLosses << endl;
            cout << "Points: " << wins*2 + otLosses << endl;
        }
};
class playerInfo
{
    private:
        string name,position;
    public:
        playerInfo()
        {
            name = " ";
            position = " ";
        }
        playerInfo(string n, string p)
        {
            name = n;
            position = p;
        }
        ~playerInfo()
        {
           // cout << "Player Info Destructor Called" << endl;
        }
        void printPlayerInfo()
        {
            cout << "Player Name: " << name << endl;
            cout << "Player Position: " << position << endl;
        }
        string getPosition()
        {
            return position;
        }
};

class playerStats: public playerInfo
{
    private:
        int goals,assists,points,plusMinus;
    public:
        playerStats()
        {
            goals = 0;
            assists = 0;
            points = 0;
            plusMinus = 0;
        }
        playerStats(int g, int a, int pm)
        {
            goals = g;
            assists = a;
            points = g + a;
            plusMinus = pm;
        }
        ~playerStats()
        {
          //  cout << "Player Stats Destructor Called" << endl;
        }
        void printPlayerStats()
        {
            cout << "Goals: " << goals << endl;
            cout << "Assists: " << assists << endl;
            cout << "Points: " << points << endl;
            cout << "Plus/Minus: " << plusMinus << endl;
        }      
};

class teamPlayoffStats: public teamInfo
{
  private:
    int seed,round;
    string winner;
  public:
    teamPlayoffStats()
    {
        seed = 0;
        round = 0;
        winner = " ";
    }
    teamPlayoffStats(int s, int r, string w)
    {
        seed = s;
        round = r;
        winner = w;
    }
    ~teamPlayoffStats()
    {
       // cout << "Team Playoff Stats Destructor Called" << endl;
    }
    void printTeamPlayoffStats()
    {
        cout << "Seed: " << seed << endl;
        cout << "Round: " << round << endl;
        cout << "Winner: " << winner << endl;
    }
};

class goalie: public playerInfo
{
    private:
        float goalsAllowed,shotsAllowed,savePercentage;
    public:
        goalie()
        {
            goalsAllowed = 0;
            shotsAllowed = 0;
            savePercentage = 0;
        }
        goalie(int sa, int ga)
        {
            goalsAllowed = ga;
            shotsAllowed = sa;
            if(shotsAllowed==0)
                savePercentage = 0;
            else
                savePercentage = ((shotsAllowed-goalsAllowed)/shotsAllowed)*100;
        }
        ~goalie()
        {
           // cout << "Goalie Destructor Called" << endl;
        }
        void printGoalie()
        {
            cout << "Shots Allowed: " << shotsAllowed << endl;
            cout << "Goals Allowed: " << goalsAllowed << endl;
            cout << "Save Percentage: " << savePercentage<<"%" << endl;
        }
};

int main()
{
    string teamName,location,division,conference,playerName,playerPosition,win;
    int wins,losses,otLosses,goals,assists,plusMinus,shotsAllowed,goalsAllowed,choice,round,seed,num;
    vector<teamInfo>Tinfo;
    vector<teamRegStats>TRstats;
    vector<playerStats>Pstats;
    vector<playerInfo>Pinfo;
    vector<goalie>sp;
    vector<teamPlayoffStats>TPstats;
    vector<int>count;
    while(1)
    {
        num=0;
        cout<<"Enter 1 to continue or -1 to quit: ";
        cin>>choice;
        if(choice == -1)
            break;
        cout<<"Team Info"<<endl;
        cout<<endl<<"Enter Team Name: ";
        getline(cin,teamName);
        getline(cin,teamName);
        cout<<endl<<"Enter Location: ";
        getline(cin,location);
        cout<<endl<<"Enter Division: ";
        getline(cin,division);
        cout<<endl<<"Enter Conference: ";
        getline(cin,conference);
        Tinfo.push_back(teamInfo(teamName,location,division,conference));
        cout<<endl<<"Enter Wins: ";
        cin>>wins;
        cout<<endl<<"Enter Losses: ";
        cin>>losses;
        cout<<endl<<"Enter OT Losses: ";
        cin>>otLosses;
        TRstats.push_back(teamRegStats(wins,losses,otLosses));
        cout<<endl<<"Enter the round of playoffs the team reached: ";
        cin>>round;
        cout<<endl<<"Enter the seed of the team: ";
        cin>>seed;
        cout<<endl<<"Did this team win the cup? Enter Yes or No: ";
        cin>>win;
        TPstats.push_back(teamPlayoffStats(seed,round,win));
        cout<<endl;
        cout<<endl<<"Player Info"<<endl;
        while(1)
            {
                cout<<endl<<"Enter Player Name(first or last name only): ";
                cin>>playerName;
                cout<<endl<<"Enter Player Position: ";
                getline(cin,playerPosition);
                getline(cin,playerPosition);
                Pinfo.push_back(playerInfo(playerName,playerPosition));
                if(playerPosition == "goalie" || playerPosition == "Goalie")
                {
                    cout<<endl<<"Enter Shots Allowed: ";
                    cin>>shotsAllowed;
                    cout<<endl<<"Enter Goals Allowed: ";
                    cin>>goalsAllowed;
                    sp.push_back(goalie(shotsAllowed,goalsAllowed));
                }
                else
                {
                    cout<<endl<<"Enter Goals: ";
                    cin>>goals;
                    cout<<endl<<"Enter Assists: ";
                    cin>>assists;
                    cout<<endl<<"Enter Plus/Minus: ";
                    cin>>plusMinus;
                    Pstats.push_back(playerStats(goals,assists,plusMinus));
                }
                num++;
                cout<<endl<<"Enter 1 to continue or -1 to quit: ";
                cin>>choice;
                if(choice == -1)
                {
                    count.push_back(num);
                    break;
                }
            }
    }
    for(int i=0;i<Tinfo.size();i++)
        {
            Tinfo[i].printTeam();
            TRstats[i].printTeamStats();
            TPstats[i].printTeamPlayoffStats();
            cout<<endl;
            for(int j=0;j<count[i];j++)
                {
                    Pinfo[j].printPlayerInfo();
                    if(Pinfo[j].getPosition() == "Goalie" || Pinfo[j].getPosition() == "goalie")
                        sp[j].printGoalie();
                    else
                        Pstats[i].printPlayerStats();
                }
            for(int k=0;k<count[i];k++)
            {
                Pinfo.erase(Pinfo.begin());
                Pstats.erase(Pstats.begin());
            }
            cout<<endl;
            cout<<endl;
        }
}