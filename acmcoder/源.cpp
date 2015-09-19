#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int n;
	string str;
	
	vector<int> num_cnt;
	vector<string> vec_str;
	cin >> n;
	
	while (n--)
	{
		cin >> str;
		vec_str.push_back(str);
	}
	
	vector<string>::iterator iter = vec_str.begin();
	int j = 0;
	while (iter != vec_str.end())
	{
		int i = 0;
		int count = 0;
		num_cnt.push_back(0);
		while ((*iter)[i] != '\0')
		{
			if ((*iter)[i] >= '0' && (*iter)[i] <= '9')
			{
				count++;
			}
			
			i++;
		}
		num_cnt[j] = count;
		j++;
		iter++;
	}
	vector<int>::iterator iter_res = num_cnt.begin();
	while (iter_res != num_cnt.end())
	{
		cout << (*iter_res) << endl;
		iter_res++;
	}

	getchar();
	getchar();
		
}