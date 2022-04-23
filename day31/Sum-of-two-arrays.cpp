//author: Geetesh Mandaogade
//question link: https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?leftPanelTab=0
//submission link: https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?leftPanelTab=1

void reverse(vector<int> &arr)
{
	int lo=0;
	int hi=arr.size()-1;
	while (lo<hi)
	{
		swap(arr[lo], arr[hi]);
		lo++;
		hi--;
	}
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	vector<int> ans;
	int i=n-1;
	int j=m-1;
	int carry=0;
	
	while (i>=0 and j>=0)
	{
		int sum=a[i]+b[j]+carry;
		carry=sum/10;
		ans.push_back(sum%10);
		i--;
		j--;
	}
	
	//if array a is larger than b
	while (i>=0)
	{
		int sum=carry+a[i];
		carry=sum/10;
		ans.push_back(sum%10);
		i--;
	}
	
	//if array b is larger than a
	while (j>=0)
	{
		int sum=carry+b[j];
		carry=sum/10;
		ans.push_back(sum%10);
		j--;
	}
	
	//carry still exists
	while (carry!=0)
	{
		int sum=carry;
		carry=sum/10;
		ans.push_back(sum%10);
	}
	reverse(ans);			//because we did adition in rev ans should be reversed
	return ans;
}
