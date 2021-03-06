#include <stdio.h>
# define NUMBER_OF_TEAMS 2

int main() {
    /*
     * 1. read an integer for the number of members per team
     * 2. read player weights alternating by team (integer representing kilograms)
     * 3. calculate total weight for each team then display "Team X has an advantage" 
     *    where x is 1 or 2 whichever has greater weight
     * 4. display "Total weight for team 1: " and then "Total weight for team 2: "
     *    teams will not have the same weight
     */

    int playersPerTeam = 0;
    int teamOneWeight = 0;
    int teamTwoWeight = 0;
    int playerWeight = 0;
    int totalNumberOfPlayers = 0;
    int i = 0;
    int isTeamOne = 0;

    scanf("%d", &playersPerTeam);
    totalNumberOfPlayers = playersPerTeam * NUMBER_OF_TEAMS;
    
    for (i=0; i<totalNumberOfPlayers; i++) {
        isTeamOne = i % 2 == 0;
        
        if (isTeamOne) {
            scanf("%d", &playerWeight);
            teamOneWeight = teamOneWeight + playerWeight;
        } else {
            scanf("%d", &playerWeight);
            teamTwoWeight = teamTwoWeight + playerWeight;
        }
    }

    if (teamOneWeight > teamTwoWeight) {
        printf("Team 1 has an advantage\n");
    } else {
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", teamOneWeight);
    printf("Total weight for team 2: %d\n", teamTwoWeight);

    return 0;
}
