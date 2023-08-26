class Solution {
public:
    const int mod = 1e9 + 7;
    long long int solve(int count_songs, int count_uniques,int n, int goal, int k){
        //base case
        if(count_songs==goal){//we can create playlist
            if(count_uniques==n){//but playlist must have unique song
                return 1;//we can create 1 playlist
            }
            return 0;//can't create playlist.
        }
        //we have two option to create playlist
        long long int result = 0;
        //1. by playing unique song
        if(count_uniques<n)
            result += (n-count_uniques)*solve(count_songs+1,count_uniques+1,n,goal,k);
        //2. by repeat a song
        if(count_uniques>k)
            result +=(count_uniques-k)*solve(count_songs+1,count_uniques,n,goal,k);
        return result%mod;
    }
    long long int solveMemo(int count_songs, int count_uniques,int n, int goal, int k,
    vector<vector<int>>&dp){
        //base case
        if(count_songs==goal){//we can create playlist
            if(count_uniques==n){//but playlist must have unique song
                return 1;//we can create 1 playlist
            }
            return 0;//can't create playlist.
        }
        if(dp[count_songs][count_uniques] != -1){
            return dp[count_songs][count_uniques];
        }
        //we have two option to create playlist
        long long int result = 0;
        //1. by playing unique song
        if(count_uniques<n)
            result += (n-count_uniques)*solveMemo(count_songs+1,count_uniques+1,n,goal,k,dp);
        //2. by repeat a song
        if(count_uniques>k)
            result +=(count_uniques-k)*solveMemo(count_songs+1,count_uniques,n,goal,k,dp);
        return dp[count_songs][count_uniques]= result%mod;
    }
    int numMusicPlaylists(int n, int goal, int k) {
        //we have to create a playlist with goal numbers of songs
        //to track number of song
        int count_songs = 0;
        //we have to play all song at least 1 time
        //to track unique plays
        int count_uniques = 0;
        // return solve(count_songs,count_uniques,n,goal,k);
        vector<vector<int>>dp(goal+1,vector<int>(n+1,-1));
        return solveMemo(count_songs,count_uniques,n,goal,k,dp);
    }
};