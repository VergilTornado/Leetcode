int solution(string &s) {
    int ans = 0, status = 0, n = s.length();
        vector<int> pos(1 << 26, -1);//2^26 status
        pos[0] = 0;
        for (int i = 0; i < n; ++i) {
            status ^=1<<(s[i]-'a');

            if (~pos[status]) {
                ans = max(ans, i + 1 - pos[status]); //last position exist, calculate
            } else {
                pos[status] = i + 1;//remeneber last status position
            }
        }
        return ans;
}
