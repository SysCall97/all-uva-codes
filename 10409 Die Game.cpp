/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

class Die {
public:
    ll up, down, north, south, east, west;
    ll tempUp, tempDown, tempNorth, tempSouth, tempEast, tempWest;
    Die() {
        up=1, down=6, north=2, south=5, east=4, west=3;
    }
    void moveNorth() {
        tempUp=up, tempDown=down, tempNorth=north, tempSouth=south, tempEast=east, tempWest=west;
        up=tempSouth;
        down=tempNorth;
        north=tempUp;
        south=tempDown;
    }
    void moveSouth() {
        tempUp=up, tempDown=down, tempNorth=north, tempSouth=south, tempEast=east, tempWest=west;
        up=tempNorth;
        down=tempSouth;
        north=tempDown;
        south=tempUp;
    }
    void moveEast() {
        tempUp=up, tempDown=down, tempNorth=north, tempSouth=south, tempEast=east, tempWest=west;
        up=tempWest;
        down=tempEast;
        east=tempUp;
        west=tempDown;
    }
    void moveWest() {
        tempUp=up, tempDown=down, tempNorth=north, tempSouth=south, tempEast=east, tempWest=west;
        up=tempEast;
        down=tempWest;
        east=tempDown;
        west=tempUp;
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    while(cin>>n) {
        cin.ignore();
        if(n==0) break;
        string inp;
        Die d;
        for(ll i=0; i<n; ++i) {
            cin>>inp;
            if(inp=="north") d.moveNorth();
            else if(inp=="south") d.moveSouth();
            else if(inp=="east") d.moveEast();
            else if(inp=="west") d.moveWest();
        }
        cout<<d.up<<el;
    }
    return 0;
}
