class Solution {
public:
    bool isPossible(string answerKey,int mid,int k,int n)
    {
        int i = 0;
        unordered_map<char,int> hash;
        int final = 0;
        for (int j = 0;j<n;j++)
        {
            hash[answerKey[j]]++;
            if ((j-i+1) == mid)
            {
                int numberOfOnes = 0;
                if (hash.find('T') != hash.end())
                {
                    numberOfOnes = hash['T'];
                }

                int numberOfZeros = 0;
                if (hash.find('F') != hash.end())
                {
                    numberOfZeros =  hash['F'];
                }

                int n1 = mid - numberOfOnes;
                int n2 = mid - numberOfZeros;
                if ((n1<=k) || (n2<=k))
                {
                    final++;
                }
                hash[answerKey[i]]--;
                i++;
            }
        }

        return final>=1;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        int low = 1;
        int n = answerKey.size();
        int high = n;

        int ans = n;
        while (low<=high)
        {
            int mid = low + (high-low)/2;

            if (isPossible(answerKey,mid,k,n))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid -1;
            }
        }

        return ans;
    }
};