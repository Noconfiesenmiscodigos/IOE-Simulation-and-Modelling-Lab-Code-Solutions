//Random Number Generator with mean, standard deviation calculation and frequency counter

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int freq[101]={0};
    int u=100,l=0;
    int r=0;
    double c_m=0.0,c_v=0.0,e_m=0.0,e_sd=0.0;
    double rn=0.0;
    double m = (1.0+0.0)/2.0;//50
    double v = (1.0-0.0)*(1.0-0.0)/12.0;//28.86
    int x=29;
    double s=x/100,sq=s*s;
    for (int n=2; n<=303; n++)
    {
        x = (181*x+101)%100;
        rn=((float)x)/100;
        r=round((l+(u-l+1)*rn));
        s = s + rn;
        sq = sq + rn*rn;
        c_m=s/n;
        c_v=sq/n-c_m*c_m;
        e_m=1-c_m/m;
        e_sd=1-sqrt(c_v/v);
        freq[r]++;
        cout<<endl<<" rn = "<<rn<<" | r = "<<r<<" | s = "<<s<<" | sum_sq = "<<sq<<" | c_m = "<<c_m<<" | c_sd = "<<sqrt(c_v)<<" | n = "<<n<<" | m = "<<m <<" | sd = "<<sqrt(v)<<"| e_m = "<<e_m*100<<"% | e_sd = "<<e_sd*100<<"%";
        cout<<"\n----------------------------------------------------------";
    }
    /*for (int n=0;n<101;n++)
    {
        cout<<endl<<endl<<"Freq of "<<n<<" = "<<freq[n];
    }*/
}
