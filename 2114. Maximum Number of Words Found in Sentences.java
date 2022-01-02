class Solution {
    public int mostWordsFound(String[] sentences) {
        int ans = 0;
        for(int i = 0; i < sentences.length; i++)
        {
            String[] arrOfStr = sentences[i].split(" ");
            ans = Math.max(ans, arrOfStr.length);
        }
        return ans;
    }
}
