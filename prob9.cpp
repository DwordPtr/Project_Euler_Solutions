#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int> > triplets;
    for(int a=1; a<1000; a++){
        for(int b=1;b<1000; b++){
            for(int c=1;c<1000; c++){
                if(c*c == a*a + b*b){
                    vector<int> tempTriple;
                    tempTriple.push_back(a);
                    tempTriple.push_back(b);
                    tempTriple.push_back(c);
                    triplets.push_back(tempTriple);
                }
            }
        }
    }
    for(int i=0; i<triplets.size();i++){
        if(triplets[i][0] + triplets[i][1] + triplets[i][2] == 1000){
            int product = triplets[i][0] * triplets[i][1] * triplets[i][2];
            cout << product << endl;
        }
    }

    return 0;
}
