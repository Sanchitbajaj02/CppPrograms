#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int> > arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int sum = 0, i, temp = INT_MIN, k;

    for (k=0; k<4; ++k) {
        for (i=0; i<4; ++i) {
            sum = 0;
            sum = arr[k][i] + arr[k][i+1]+ arr[k][i+2] + arr[k+1][i+1] + arr[k+2][i] + arr[k+2][i+1] + arr[k+2][i+2];
            cout<<sum<<" ";
            if (sum>=temp)
                temp = sum;
        }
    }

    cout<<temp;
    return 0;
}
