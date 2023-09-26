//GFG :- https://practice.geeksforgeeks.org/problems/common-elements1132/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>ans;
            set<int>s;
            int num = 0;
            int i,j,k;
            i=j=k=0;
            while(i<n1 && j<n2 && k<n3){
                
                if(A[i] == B[j] && B[j] == C[k]){
                    
                    s.insert(A[i]);
                    i++,j++,k++;
                }
                else if(A[i] < B[j]){
                    i++;
                }
                
                else if(B[j] < C[k]){
                    j++;
                }
                
                else{
                    k++;
                }
                
        }
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
        }
