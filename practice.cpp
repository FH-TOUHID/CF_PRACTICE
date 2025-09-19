//1537B - Bad Boy
// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//    long long t,n,m,i,j;
//    cin>>t;
//    while(t--)
//    {
//       cin>>n>>m>>i>>j;
//       cout<<"1 1"<<" "<<n<<" "<<m;
//    }
//    return 0;
// }

//1543A - Exciting Bets
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long t,a,b,moves;
//     cin>>t;
//     while(t--)
//     {
//         cin>>a>>b;
//         if(a==b) cout<<"0 0"<<endl;
//         else{
//             long long max_gcd=abs(a-b);
//             moves = min(a % max_gcd, max_gcd - (a % max_gcd)); 
//             cout << max_gcd << " " << moves << endl;
//         }
//     }
// }

// 1559A - Mocha and Math
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t,n;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n;
//         vector<int>a(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         int result=a[0];
//         for(int i=0;i<n;i++)
//         {
//             result &=a[i];
//         }
//         cout<<result<<endl;
//     }
//     return 0;
// }

//	1555A - PizzaForces
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(){
//     int t;
//     cin >>t;
//     while(t--){
//         ll int n;
//         cin >> n;
//         ll int ans = 0;
//         if(n<=6) ans = 15;
//         else {
//             if(n%2==0) ans = n*5/2;
//             else ans = (n+1)*5/2;
//         }
//         cout << ans << endl;
//     }
// }

// 	1535B - Array Reodering
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n;cin>>n;
//        vector<int>a(n),odd,even;
//        for (int i = 0; i < n; ++i)
//       {
//           cin >> a[i];
//             if (a[i] % 2 == 0)
//                 even.push_back(a[i]);
//             else
//                 odd.push_back(a[i]);
//       }
//       vector<int> reordered;
//       for (int x : even) reordered.push_back(x);
//       for (int x : odd) reordered.push_back(x);
//       int count = 0;
//       for (int i = 0; i < n; ++i)
//        {
//           for (int j = i + 1; j < n; ++j)
//            {
//               if (__gcd(reordered[i], 2 * reordered[j]) > 1)
//                {
//                   count++;
//                }
//             }
//        }
//       cout << count << "\n";
//    }
//   return 0;
// }

// 1475A - Odd Divisor
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     cin >> t;
//     while (t--) 
//     {
//        long long n;cin>>n;
//        if(__builtin_popcountll(n)==1) cout<<"NO"<<endl;
//        else cout<<"YES"<<endl;
//     }
//     return 0;
// }

// 	1475B - New Year's Number
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long t;cin>>t;
//     while(t--)
//     {
//         long long n;cin>>n;
//         long long temp=n/2020;
//         if(n%2020<=temp ) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }

// 1624B - Make AP
// #include<bits/stdc++.h>
// using namespace std;
// int solve(int a,int b,int c)
// {
//     if((2 * b - c) > 0 && (2 * b - c) % a == 0)  return true;
//     if ((a + c) % (2 * b) == 0) return true;
//     if ((2 * b - a) > 0 && (2 * b - a) % c == 0) return true;
//     return false;
// }
// int main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//        int a,b,c;
//        cin>>a>>b>>c;
//        if(solve(a,b,c))
//        {
//          cout<<"YES"<<endl;
//        }
//        else cout<<"NO"<<endl;
//     }
//     return 0;
// }

//1525B - Permutation Sort
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//         int n;cin>>n;
//         vector<int>arr(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         if(is_sorted(arr.begin(),arr.end())){
//             cout<<0<<endl;
//         }
//         else if(arr[0] == n && arr[n-1] == 1){
//             cout<<3<<endl;
//         }
//         else if(arr[0] == 1 || arr[n-1] == n){
//             cout<<1<<endl;
//         }
//         else {
//             cout<<2<<endl;
//         }
//     }
//     return 0;
// }

//  Dr. TC
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;cin>>t;   
//     while (t--) {
//         int n; cin >> n;
//         string s; cin >> s;
//         int one= 0,count=0;
//         for (int i=0;i<n;i++) {
//             if (s[i]=='1') one++;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]=='1') count+=one-1;
//             else count+=one+1;
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }

// 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s; 
//     int t;
//     cin>>t;
//     while(t--)
//     {
//        cin>>s;
//        int n=s.size();
//        int ans=n;
//        for(int i=0;i<n-1;i++)
//        {
//             for(int j=i+1;j<n;j++)
//             {
//                 int num=((s[i]-'0')*10)+(s[j]-'0');
//                 if(num%25==0)
//                 {
//                     ans=min(ans,((j-i-1)+(n-j-1)));
//                 }
//             }
//        } 
//        cout<<ans<<endl;
//     }
//     return 0;
// }

// A. Consecutive Sum Riddle
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         long long n;
//         cin>>n;
//         cout<<-n+1<<" "<<n<<endl;
//     }
//     return 0;
// }

// 	1903A - Halloumi Boxes
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     int n,k;
//     while(t--)
//     {
//         cin>>n>>k;
//         int x=0;
//         long long arr[n];
//         for(int i=0;i<n;i++) cin>>arr[i];
//         if(k==1) 
//         {
//             for(int i=0;i<n-1;i++)
//             {
//                 if(arr[i]<=arr[i+1]) continue;
//                 else{
//                     x=1;
//                     break;
//                 }
//             }
//             if(x==1) cout<<"NO"<<endl;
//             else cout<<"YES"<<endl;
//         }
//         else  cout<<"YES"<<endl;
//     }
//     return 0;
// }

// 1901A - Line Trip
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     int n,x,i;
//     while(t--)
//     {
//         cin>>n>>x;
//         int arr[n];
//         for(i=0;i<n;i++)  cin>>arr[i];
//         int max=arr[0];
//         int last=(x-arr[n-1])*2;;
//         if(n==1)
//         {
//             if(max>last) cout<<max<<endl;
//             else cout<<last<<endl;
//         }
//         else
//         {
//             for(int i=0;i<n-1;i++)
//             {
//               if((arr[i+1]-arr[i])>max) max=arr[i+1]-arr[i];
//             }
//             if(max>last) cout<<max<<endl;
//             else cout<<last<<endl;
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);        
//     int t; cin >> t;
//     while(t--)
//     {
//         int n,count=0;cin>>n;
//         vector<int>v(n);
//         for(int i=0;i<n;i++) cin>>v[i];
//         for(int i=1;i<n;i++)
//         {
//             if(v[0]==v[i]) count++;
//         }
//         if(count==n-1) cout<<"NO"<<endl;
//         else
//         {
//             sort(v.begin(),v.end());
//             cout<<"YES"<<endl;
//             cout<<v[n-1]<<" ";
//             for(int i=0;i<n-1;i++)
//             {
//                 cout<<v[i];
//                 if(i<n-2)cout<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }
    
//1805A - We Need the Zero
//  #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);        
//     int t; cin >> t;
//     while(t--)
//     {
//         int n;cin>>n;int a[n];long long x=0;
//         for(int i=0;i<n;i++) 
//         {
//             cin>>a[i];
//             x^=a[i];
//         }
//         if(x==0) cout<<"0"<<endl;
//         else if(n%2==1)cout<<x<<endl;
//         else cout<<"-1"<<endl;
//     }
//     return 0;
// }

// 	1873C - Target Practice
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);        
//     int t; cin >> t;
//     while(t--)
//     {
//         int sum=0;
//         char a[10][10];
//         for(int i=0;i<10;i++)
//         {
//             for(int j=0;j<10;j++) 
//             {
//                  cin >> a[i][j];
//                 if(a[i][j]=='.') continue;
//                 else{
//                 if((i==0 || i==9 || j == 0 || j == 9)) sum += 1;
//                 else if(i==1 || i==8 || j == 1 || j == 8) sum += 2;
//                 else if(i==2 || i==7 || j == 2 || j == 7) sum += 3;
//                 else if(i==3 || i==6 || j == 3 || j == 6) sum += 4;
//                 else if(i==4 || i==5 || j == 4 || j == 5) sum += 5;
//                 }
//             }
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }

// 1859A - United We Stand
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);        
//     int t; cin >> t;
//     while(t--)
//     {
//         int n;cin>>n;
//         vector<int> a(n);
//         for(int i=0;i<n;i++) cin>>a[i];
//         sort(a.begin(),a.end());
//         if(a[n-1]==a[0]) cout <<"-1"<<endl;
//         else
//         {
//             int it=0;
//             while(a[it]==a[0]) it++;
//             cout << it << " " << n - it << "\n";
// 		    for (int i = 0; i < it; i++) cout << a[i] << " ";
//             cout<<endl;
// 		    for (int i = it; i < n; i++) cout << a[i] << " ";
//             cout<<endl;
//         }
//     }
//     return 0;
// }

// 1858A - Buttons
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);        
//     int t; cin >> t;
//     while(t--)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         if(a+c==b+c)
//         {
//             if(c%2==0) cout<<"Second"<<endl;
//             else cout<<"First"<<endl;
//         }
//         else{
//             if(a+c>b+c) cout<<"First"<<endl;
//             else cout<<"Second"<<endl;
//         }
//     }
//     return 0;
// }

// unit array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);        
//     int t; cin >> t;
//     while(t--)
//     {
//         int n,op=0;cin>>n;
//         int a[n],sum=0,mul=1;
//         for(int i=0;i<n;i++) 
//         {
//             cin>>a[i];
//             sum+=a[i];
//             mul*=a[i];
//         }
//         if(sum>=0 && mul==1) cout<<"0"<<endl;
//         else if(sum>=0 && mul==-1) cout<<"1"<<endl;
//         else{
//             while(sum<0 || mul!=1)
//             {
//                 sum+=2;
//                 mul*=-1;
//                 op++;
//             }
//             cout<<op<<endl;
//         }
//     }
//     return 0;
// }

// walking master
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     while(t--) {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         if(b<=d)
//         {
//             int y=d-b;
//             int x=a+y;
//             if(c<=x)
//             {
//                 cout<<y+x-c<<endl;
//             }
//             else cout<<-1<<endl;
//         }
//         else cout<<-1<<endl;
//     }
//     return 0;
// }

// 1913B - Swap and Delete
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//         string s;
//         cin>>s;
//         int n=s.length();
//         int one=0,zero=0;
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]=='0') zero++;
//             else one++;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]=='0') 
//             {
//                 if(one!=0) one--;
//                 else break;
//             }
//             else
//             {
//                 if(zero!=0) zero--;
//                 else break;
//             }
//         }
//         cout<<max(zero,one)<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; 
//     cin >> t;
//     while (t--) {
//         int n, k,even_cnt=0;
//         cin >> n >> k;
//         int ans = INT_MAX,a[n];
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             if(a[i]%2==0) even_cnt++;
//             if(a[i]%k==0) ans=0;
            
//             ans=min(ans,k-a[i]%k);
//         }
//         if(k==4)
//         {
//             if(even_cnt>=2) ans=0;
//             else if(even_cnt==1) ans=min(ans,1);
//             else ans=min(ans,2);
//         }
//         cout << ans << '\n';
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // ios::sync_with_stdio(false);
//     // cin.tie(nullptr);
//     int t; 
//     cin >> t;
//     while (t--) {
//         int n, p;
//         cin >> n >> p;
//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; i++) cin >> a[i];
//         for (int i = 0; i < n; i++) cin >> b[i];
//         int cnt=0,index=-1,min=INT_MAX,ans1=n*p,ans2=p;
//         while(cnt<n)
//         {
//             for (int i = 0; i < n; i++) {
//               if (b[i] < min) {
//                 min= b[i];
//                 index = i;
//              } else if (b[i] == min) {
//                 if (a[i] < a[index]) {
//                     index = i;
//                 }
//               }
//                ans2+=(a[index]*b[index]);
//               if(cnt<n) cnt+=n;
//               a.erase(a.begin()+index);
//               b.erase(b.begin()+index);
//            }
//         }
//         cout<<ans2<<endl;     
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t; 
//     cin >> t;
//     while (t--)
//     {
//         int n,d;cin>>n>>d;
//         string s;cin>>s;
//         if(n-d==1) cout<<"YES"<<endl;
//         else
//         {
//             map<char,int>a;
//             for(int i=0;i<n;i++)
//             {
//                 a[s[i]]++;
//             }
//             int odd=0,even=0;
//             for(auto &i :a)
//             {
//                 if(i.second%2==0) even++;
//                 else odd++;
//             }
//             odd=odd-d;
//             if(odd<=1) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);        
//     int t; cin >> t;
//     while(t--)
//     {
//         int n;  cin>>n;
//         int arr[n],sum=0;
//         for(auto &i: arr)
//         {
//             cin>>i;
//             sum+=i;
//         }
//         if(sum%3!=0) cout<<"0 0"<<endl;
//         else cout<<"1 2"<<endl;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;  
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     string s;cin>>s;
//     map<char,int>a;
//     int n=s.size();
//     for(int i=0;i<n;i++) a[s[i]]++;
//     int even=0,odd=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[s[i]]%2==0) even++;
//         else odd++;
//     }
//     if(odd!=0)odd=odd-1;
//     if(odd%2==0) cout<<"First"<<endl;
//     else cout<<"Second"<<endl;
// }

// A. Lunch Rush
// #include <bits/stdc++.h>
// using namespace std;  
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n,k,f,t,max=INT_MIN,joy=0;cin>>n>>k;
//     for(int i=1;i<=n;i++)
//     {
//         cin>>f>>t;
//         if(t>k) joy=f-(t-k);
//         else joy=f;
//         if(joy>max) max=joy;
//     }
//     cout<<max<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;  
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;cin>>t;
//     while(t--)
//     {
//     int n,time;cin >> n >> time;
//     long long ans = 0;
//     vector <int> a(n);
//     for(int i = 0;i < n;i ++) cin >> a[i];
//     sort(a.begin(),a.end(),greater <int>());
//     for(int i = 0;i < n;i ++) ans +=1ll*a[i] * max(0,time - i);
//     cout << ans << endl;
//     }
// }

// A. Forked!
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         long long a, b;
//         long long xK, yK, xQ, yQ;
//         cin >> a >> b;
//         cin >> xK >> yK;
//         cin >> xQ >> yQ;
//         vector<pair<long long,long long>> moves = {
//             {a, b}, {a, -b}, {-a, b}, {-a, -b}, 
//             {b, a}, {-b, a}, {b, -a}, {-b, -a}
//         };
//         set<pair<long long, long long>> king, queen;
//         for (auto [dx, dy] : moves) {
//             king.insert({xK - dx, yK - dy});
//             queen.insert({xQ - dx, yQ - dy});
//         }
//         int count = 0;
//         for (auto &p : king) {
//             if (queen.count(p))  count++;
//         }
//         cout << count << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k,x;cin>>n>>k>>x;
        long long min=(k*(k+1))/2;
        long long max=(n*(n+1))/2-((n-k)*(n-k+1))/2;
        if(x>=min && x<=max) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}