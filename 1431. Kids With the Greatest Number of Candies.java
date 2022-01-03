class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        ArrayList<Boolean> out =new ArrayList<Boolean>();
        int max_element = -1;
        for(int i = 0; i < candies.length; i++)
        {
            max_element = Math.max(max_element, candies[i]);
        }
        
        for(int j = 0; j < candies.length; j++)
        {
            if((candies[j] + extraCandies) >= max_element)
            {
                out.add(true);
            }
            else
            {
                out.add(false);
            }
        }
        return out;
    }
}
