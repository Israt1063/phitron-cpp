#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
	int arr[t]; 
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
	int n = sizeof(arr) / sizeof(arr[0]);
int flag = 0;

	
	for (int i = 0; i <= n / 2 && n != 0; i++) {

		
		if (arr[i] != arr[n - i - 1]) {
			flag = 1;
			break;
		}
	}

	if (flag == 1)
		cout << "NO";
	else
    cout << "YES";

	
	return 0;
}