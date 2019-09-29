#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'commonPrefix' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY inputs as parameter.
 */

vector<int> commonPrefix(vector<string> inputs) 
{
    vector<int>v;
    string str;
    for(int i=0; i<inputs.size(); i++)
    {   
        str=inputs[i];
        int cnt = str.length();
        int p, flag=0;
        for(int i=0; i<str.length()-1; i++)
        {
            /*
            if(str[i]==str[0])
            {
                cnt++;
                for(int k=1; k<i && i+k<str.length(); k++)
                {

                    if(str[k]==str[i+k])
                    {
                        cnt++;
                        if(str[i+k]==str[0] && flag==0)
                        {
                            flag=1;
                            p=i+k;
                        }
                    }
                }
                if(flag==1)
                {
                    i=p-1;
                    flag=0;
                }
            }
        }
        */

            string sub1 = str.substr(0, i+1);
            string sub2 = str.substr(i+1, str.length()-i+1);
            cout<<sub1<<" "<<sub2<<endl;
            for(int ia=0, ib=0; ib<sub2.length() ;ia++, ib++)
            {
                if(sub1[ia]==sub2[ib])
                    cnt++;
                else
                    break;
                if(ia==sub1.length()-1)
                    ia=-1;
            }
            /*
            string sub1 = str.substr(0, i+1);
            string sub2 = str.substr(i+1, i+1);
            cout<<sub1<<" "<<sub2<<endl;
            for(int ia=0, ib=0; ia<sub1.length() && ib<sub2.length() ;ia++, ib++)
            {
                if(sub1[ia]==sub2[ib])
                    cnt++;
                else
                    break;
            }
            */

        }
        //*/
        v.push_back(cnt);

    }   


    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string inputs_count_temp;
    getline(cin, inputs_count_temp);

    int inputs_count = stoi(ltrim(rtrim(inputs_count_temp)));

    vector<string> inputs(inputs_count);

    for (int i = 0; i < inputs_count; i++) {
        string inputs_item;
        getline(cin, inputs_item);

        inputs[i] = inputs_item;
    }

    vector<int> result = commonPrefix(inputs);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
