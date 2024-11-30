#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define minn 1e-9
#define maxx 1e9
#define pi 3.14159265358979323846
#define P pair<double, double>

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<P> arr(n);
    for (int i=0; i<n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    double minArea = INT_MAX;
    double reqAngle = 0;
    for(int i=0; i<360; ++i) {
        double currAngle = (i*pi) / (180.0);
        double coss = cos(currAngle), sinn = sin(currAngle);
        double min_x = maxx, max_x = minn, min_y = maxx, max_y = minn;
        for(int j=0; j<n; ++j) {
            double x = arr[j].first;
            double y = arr[j].second;
            double rotated_x = x*coss + y*sinn;
            double rotated_y = -x*sinn + y*coss;
            min_x = min(min_x, rotated_x);
            min_y = min(min_y, rotated_y);
            max_x = max(max_x, rotated_x);
            max_y = max(max_y, rotated_y);
        }
        double currArea = (max_x-min_x) * (max_y-min_y);
        if(currArea < minArea) {
            minArea = currArea;
            reqAngle = currAngle;
        }
    }
    double coss = cos(reqAngle), sinn = sin(reqAngle);
    double min_x = maxx, max_x = minn, min_y = maxx, max_y = minn;
    for (int j=0; j<n; ++j) {
        double x = arr[j].first;
        double y = arr[j].second;
        double rotated_x = x*coss + y*sinn;
        double rotated_y = -x*sinn + y*coss;
        min_x = min(min_x, rotated_x);
        min_y = min(min_y, rotated_y);
        max_x = max(max_x, rotated_x);
        max_y = max(max_y, rotated_y);
    }
    int width = (max_x-min_x+1) / 1;
    int height = (max_y-min_y+1) / 1;
    cout << min(width, height) << " " << max(width, height);
    return 0;
}