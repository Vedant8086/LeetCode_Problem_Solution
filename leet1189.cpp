class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[5] = {0};
        for(int i =0;i < text.size();i++) {
            if(text[i]=='b') arr[0]+=1;
            else if(text[i]=='a') arr[1]+=1;
            else if(text[i]=='l') arr[2]+=1;
            else if(text[i]=='o') arr[3]+=1;
            else if(text[i]=='n') arr[4]+=1;
        }
        arr[2] = arr[2] / 2;
        arr[3] = arr[3] / 2;

        return min({arr[0],arr[1],arr[2],arr[3],arr[4]});
    }
};