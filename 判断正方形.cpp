struct node{
    double x,y;
};
double getdis(node a,node b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
bool isequal(double x,double y){
    if(x-y>=-1e-8&&x-y<=1e-8) return true;
    return false;
}
bool isSquare(node a,node b,node c,node d){
    vector<double> len;
    len.push_back(getdis(a,b));
    len.push_back(getdis(a,c));
    len.push_back(getdis(a,d));
    len.push_back(getdis(b,c));
    len.push_back(getdis(b,d));
    len.push_back(getdis(c,d));
    sort(len.begin(),len.end());
    if(isequal(len[0],len[1])&&isequal(len[1]==len[2])&&isequal(len[2]==len[3])&&isequal(len[4],len[5])&&isequal(len[4],sqrt(2)*len[0])) return true;
    return false;
}
