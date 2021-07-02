#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];

void BSearch(int len, int target){
    int low = 0;
    int high = len - 1;
    int mid;
    
    while(low <= high){
        mid = (low + high) / 2;
        
        if(arr[mid] == target){
            cout << "1\n";
            return;
        }
        else if(arr[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    cout << "0\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, M, n, i;
    cin >> N;
    for(i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    cin >> M;
    for(i = 0; i < M; i++){
        cin >> n;
        BSearch(N, n);
    }
}
