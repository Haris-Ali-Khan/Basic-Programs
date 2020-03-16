#include<stdio.h>
#include<string.h>
using namespace std;

int isFeet(string);

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(){
            feet = 0;  inches = 0.0;
        }
        Distance(int ft, float inc){
            feet = ft;  inches = inc;
        }
        void showdist(){
            printf("%d\'.%f",&feet,&inches);
        }
        void getdist();
};
