int solution(vector<int> nums){
  int n = nums.size();
  vector<vector<int>> dp (n,vector<int>(1001));
  int maxlen = 0;
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
      int d = nums[i]-nums[j]+500;
      dp[i][d]=dp[j][d]+1;
      maxlen = max(maxlen,dp[i][d]);
    }
  }
  return maxlen;
}
