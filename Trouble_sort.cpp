#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> uservec;
    vector <int> veven , vodd;
    bool flag {true};
    int temp,i;
    long long n;
    cout<<"Enter the number of elements : \n";
    cin>>n;
    cout<<"Enter "<<n<<" elements\n";
    for(i=0;i<n;i++)
    {
        cin>>temp;
        uservec.push_back(temp);
    }
    for(i=0;i<n;i++)
    {
        if((i+1)%2==0)
        {
            veven.push_back(uservec[i]);
        }
        else
        {
            vodd.push_back(uservec[i]);
        }

    }
    sort(veven.begin(),veven.end());
    sort(vodd.begin(),vodd.end());

    int j {0};
    for(i=0 ; i < veven.size() ; i++ )
    {
        if(veven[i] == uservec[n-1])
        {
            if((veven[i] > vodd[j]) != true)
            {
                flag = false;
            }
            break;
        }
        if((veven[i]>=vodd[j]) == false || (veven[i]<= vodd[j+1]) == false)
        {
            flag = false;

            break;
        }
        j++;
    }

    if(flag)
    {
        cout<<"Trouble sort worked\n";
    }
    else
        cout <<"Trouble sort failed\n";
    return 0;
}