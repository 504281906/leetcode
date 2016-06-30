#include <iostream>
#include <vector>
#include <stack>
#include <set>
using namespace std;
class Twitter {
public:
    /** Initialize your data structure here. */
    Twitter() {
        
    }
	int Atime;
	struct go{
		int tweetId;
		int time;
		go(int a=0,int b=0){
			tweetId=a;
			time=b;
		}
	};
    struct user{
			stack<go> Id;
			set<int> follower;
		};
	struct temp{
		int userId;
		int tweetId;
		int time;
	};
	Twitter::user a[505];
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
		go t(tweetId,Atime);
		Atime++;
		a[userId].Id.push(t);
	}
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
		vector<int> num;
		num.push_back(userId);
		for (set<int>::iterator i=a[userId].follower.begin();i!=a[userId].follower.end();i++)
			num.push_back(*i);
		int k=0;
		stack<temp>Goback;
		vector<int>ans;
		while (k<10){
			++k;
			int flag=0;
			int mintime=-1;
			temp tt;
			for (int i=0;i<num.size();i++){
				if (!a[num[i]].Id.empty()){
					flag=1;
					go gg;
					gg=a[num[i]].Id.top();
					if (mintime<gg.time){
						mintime=gg.time;
						tt.userId=num[i];
						tt.tweetId=gg.tweetId;
						tt.time=gg.time;
					}
				}
			}
			if (flag==0) break;
			ans.push_back(tt.tweetId);
			a[tt.userId].Id.pop();
			Goback.push(tt);
		}
		while (!Goback.empty()){
			temp tt=Goback.top();
			Goback.pop();
			go gg(tt.tweetId,tt.time);
			a[tt.userId].Id.push(gg);
		}
		return ans;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
		a[followerId].follower.insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
		set<int>::iterator it;
		it = a[followerId].follower.find(followeeId);
		if (it!=a[followerId].follower.end())
			a[followerId].follower.erase(it);
    }
}HH;

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter obj = new Twitter();
 * obj.postTweet(userId,tweetId);
 * vector<int> param_2 = obj.getNewsFeed(userId);
 * obj.follow(followerId,followeeId);
 * obj.unfollow(followerId,followeeId);
 */
int main(){
	HH.postTweet(1,5);
	HH.follow(1,1);
	HH.unfollow(1,1);
	vector<int> h=HH.getNewsFeed(1);
	for (int i=0;i<h.size();i++)
		cout<<h[i]<<endl;
	system("pause");
	return 0;
}