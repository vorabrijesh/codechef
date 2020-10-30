#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define m 998244353

struct node{
    char value;
    ll zero,one,a,A;
};

ll modexp(ll x, ll n) 
{ 
	if (n == 0) { 
		return 1; 
	} 
	else if (n % 2 == 0) { 
		return modexp((x * x) % m, n / 2); 
	} 
	else { 
		return (x * modexp((x * x) % m, (n - 1) / 2) % m); 
	} 
} 
ll getFractionModulo(ll a, ll b) 
{ 
	ll c = __gcd(a, b); 

	a = a / c; 
	b = b / c; 

	// (b ^ m-2) % m 
	ll d = modexp(b, m - 2); 
	ll ans = ((a % m) * (d % m)) % m; 

	return ans; 
} 

ll mul(ll x,ll y)
{
    return ((x%m)*(y%m))%m;
}
void evaluatePostfix(string s)
{
    stack<node*> st;
    ll count=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='#')
        {
            count++;
            node *t = new node;
            t->value = '#';
            t->zero = 1;
            t->one = 1;
            t->a = 1;
            t->A = 1;
            st.push(t);
        }
        else{
            node *t2 = new node;
            node *t1 = new node;
            t1 = st.top();
            st.pop();
            t2 = st.top();
            st.pop();
            struct node *t = new node;
            if(s[i]=='&')
            {
                t->value = '&';
                t->zero = (mul(t1->zero,t2->zero) + mul(t1->zero,t2->one) + mul(t1->zero,t2->a)+ mul(t1->a,t2->zero) + mul(t1->zero,t2->A) + mul(t1->A,t2->zero) + mul(t1->one,t2->zero) + mul(t1->A,t2->a) + mul(t1->a,t2->A))%m; 
                
                t->one = mul(t1->one ,t2->one)%m;

                t->a = (mul(t1->one,t2->a) + mul(t1->a,t2->one) + mul(t1->a,t2->a))%m;

                t->A = (mul(t1->A , t2->A) + mul(t1->one,t2->A) + mul(t1->A,t2->one))%m;
                st.push(t);
            }
            else if(s[i]=='|')
            {
                t->value = '|';
                t->zero = mul(t1->zero ,t2->zero)%m;
                
                t->one = (mul(t1->one,t2->one) + mul(t1->zero,t2->one) + mul(t1->one,t2->a) + mul(t1->a,t2->one) + mul(t1->one,t2->A) + mul(t1->A,t2->one) + mul(t1->one,t2->zero) + mul(t1->A,t2->a) + mul(t1->a,t2->A))%m; 
               
                t->a = (mul(t1->zero,t2->a) + mul(t1->a,t2->zero) + mul(t1->a,t2->a))%m;

                t->A = (mul(t1->A , t2->A) + mul(t1->zero,t2->A) + mul(t1->A,t2->zero))%m;
                st.push(t);
            }
            else{
                t->value = '^';
                t->zero = (mul(t1->zero,t2->zero) + mul(t1->one ,t2->one) + mul(t1->a,t2->a )+ mul(t1->A,t2->A))%m;

                t->one = (mul(t1->zero,t2->one) + mul(t1->one,t2->zero) + mul(t1->a,t2->A) + mul(t1->A,t2->a))%m;

                t->a = (mul(t1->a,t2->zero) +  mul(t1->zero,t2->a) + mul(t1->one,t2->A) + mul(t1->A,t2->one) )%m;

                t->A = (mul(t1->one,t2->a) + mul(t1->a,t2->one) + mul(t1->zero,t2->A) + mul(t1->A,t2->zero))%m;
                st.push(t);
            }
        }
    }
    node *t = st.top();
    st.pop();
    //cout<<count<<" ";
    //cout<<t->zero<<" "<<t->one<<" "<<t->a<<" "<<t->A<<endl;
    ll total = modexp(4,count);
    cout<<getFractionModulo(t->zero, total)<<" ";
    cout<<getFractionModulo(t->one, total)<<" ";
    cout<<getFractionModulo(t->a, total)<<" ";
    cout<<getFractionModulo(t->A, total)<<"\n";
}

string infixToPostfix(string s) 
{ 
	stack<char> st; 
	st.push('N'); 
	int l = s.length(); 
	string ns; 
	for(int i = 0; i < l; i++) 
	{  
		if(s[i]=='#') 
        {
		    ns+=s[i]; 
        }
		else if(s[i] == '(') 
		{
		    st.push('('); 
        }
		else if(s[i] == ')') 
		{ 
			while(st.top() != 'N' && st.top() != '(') 
			{ 
				char c = st.top(); 
				st.pop(); 
			ns += c; 
			} 
			if(st.top() == '(') 
			{ 
				char c = st.top(); 
				st.pop(); 
			} 
		}
		else{
			st.push(s[i]); 
		} 

	}  
	while(st.top() != 'N') 
	{ 
		char c = st.top(); 
		st.pop(); 
		ns += c; 
	} 
    return ns;
    
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string p = infixToPostfix(s);
        evaluatePostfix(p);
    }
}