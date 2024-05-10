/*
Free electricity calculations! 

Store last 12 month electricity usage of a consumer in an array. 
Input current month’s usage. 
Compute bill amount using the following logic 
     Bill is = 0, if current month's usage is less than average of last 12 months and current month's usage is < 200 units
     if current month's usage is more than 200, then excess units must be billed at Rs 7 per unit

After current month's usage calculation, save the current month as the last month's usage.  Drop the very first month's usage and move all usages one element to the left

When user enters END for usage, print the current values of the array
*/