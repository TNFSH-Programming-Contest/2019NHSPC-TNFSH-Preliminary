#include <iostream>
#include <vector>
#include <cassert>
#define MOD 1000000007
using namespace std;
class mat
{
    vector<vector<int>> v;
public:
    mat(int n, int m): v(n, vector<int>(m)) {}
    mat(vector<vector<int>> _v): v(_v) {}
    inline int n() const { return (int)v.size(); }
    inline int m() const { return (int)v.front().size(); }
    int &operator()(int x, int y) { return v.at(x).at(y); }
    mat operator*(const mat &b) const
    {
        assert(m() == b.n());
        mat res(n(), b.m());
        for (int i = 0; i < res.n(); ++i)
            for (int j = 0; j < res.m(); ++j)
                for (int k = 0; k < m(); ++k)
                    res(i, j) += (int)((long long)v[i][k] * b.v[k][j] % MOD), res(i, j) %= MOD;
        return res;
    }
};
mat mpow(mat a, int b)
{
    if (b == 1) return a;
    mat p = mpow(a, b / 2);
    if (b % 2 == 0) return p * p;
    else return p * p * a;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    mat trans({{1, 2}, {1, 3}});
    mat init(vector<vector<int>>{{1}, {1}});
    mat res = mpow(trans, n) * init;
    cout << res(0, 0) << endl;
}
