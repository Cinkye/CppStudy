#include <iostream>
#include <string>
using namespace std;
void findPreorder(string in,string post)
{
	char root = post[post.length()-1];
    if(in.length() >= 1)
        cout << root;
	if(in.length() == 1)
		return;
	string inFront;
	string inEnd;
	string postFront;
	string postEnd;
	for(int i = 0;i < (int)(in.length());++i)
	{
		if(in[i] == root)
		{
			inFront = in.substr(0,i);
			inEnd = in.substr(i+1,in.length()-i-1);
			postFront = post.substr(0,i);
			postEnd = post.substr(i,post.length()-i-1);;
            //cout << inFront << " " << inEnd << " " << postFront << " " << postEnd << endl;
			findPreorder(inFront,postFront);
			findPreorder(inEnd,postEnd);
            break;
		}
	}
}
int main()
{
	string in,post;
	cin >> in >> post;
	findPreorder(in,post);
}
