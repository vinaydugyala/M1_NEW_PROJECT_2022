int isValid(char userID[15])
{
    if(strlen(userID)!=14)
        return 0;
    
    int inputedYear=extractYear(userID);
    int inputedRollNo = extractRollNo(userID);
    
    if(inputedYear!=currentValidID.year || checkBranchCode(userID)!=1 || inputedRollNo>currentValidID.totalVoters)
        return 0;

    return 1;
}

int isVoted(char userID[15])
{
    int location=extractRollNo(userID);
    if(studentVotes[location-1]=='0')
        return 0;
    else
        return 1;
}

int isBanned(char userID[15]){
    int location=extractRollNo(userID);
    if(studentVotes[location-1]=='$')
        return 1;
    else
        return 0;
}

void saveVote(char userID[15],char voteInput)
{
    char filename[20];
    sprintf(filename,"candidate%d.txt",voteInput-48);
    FILE *fp = fopen(filename,"r+");
    int location=extractRollNo(userID);
    studentVotes[location-1]=voteInput;
    candidateArray[voteInput-49].votes++;
    fseek(fp, 0, SEEK_SET);
    fprintf(fp,"%d\n",candidateArray[voteInput-49].votes);
    fseek(fp, 0, SEEK_END);
    fprintf(fp,"\n%d",location);
    fclose(fp);
}
