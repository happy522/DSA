class Solution 
{
    public int wiggleMaxLength(int[] nums) 
    {
        if (nums.length <= 1) 
            return nums.length;
    
        int ans = nums.length;//by default we assume that the whole array is wiggle
        
        //Java boolean allows values of true and false while Boolean allows true, false, and null
        //since by default we don't know whether the sequence is -,+,-... or +,-,+,...
        //we use Boolean so that we can store null by default
        Boolean sign = null;
    
        for (int i = 0; i < nums.length-1; i++)
        {
            int temp = nums[i+1] - nums[i];
            if (temp == 0) 
                ans--;//when we encounter a diff of 0, we decrement the ans i.e we don't consider that element in our answer sequence
            
            else if (sign == null) //this means we havent encountered any difference yet
                sign = temp > 0;
            
            //if the current diff and prev diff both are positive or
            //the current diff and prev diff both are negative
            //we remove the current element from our resultant sequence
            else if ((temp > 0 && sign) || (temp < 0 && !sign))
                ans--;
            
            else
                sign = !sign;//else just toggle the sign
        }
        return ans;
    }
}
