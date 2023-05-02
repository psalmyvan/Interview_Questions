### Game Segments

A video game developer is developing a game in which the character makes their way through several segments of a level. In each segment, if the character collects a coin, the player scores a point. However, if a segment does not contain a coin, the player loses a point. Player 1 always begins the level, and, at some point, game play is turned over to Player 2 to complete the level. Player 1's goal is to achieve a higher score than Player 2 once the level is completed. Given the status of game segments(whether they contain a coin or not), determine the minimum number of segments Player 1 should play so that, in the end, their score is greater than Player 2's score.  


**Example**

*segments = [1, 1, 0, 1]*  

Player 1 has the following options:

- *Play 0 segments.* This would give them a score of 0. Player 2 would have a score of 3 - 1 = 2(because they gain a point for each of the 3 segments with a coin, and lose 1 point for the segment without a coin).  
  
- *Play 1 segment.*  This would give them a score of 1. Player would have a score of 2 - 1 = 1

- *Play 2 segments.* This would give them a score of 2. Player 2 would have a score of 1 - 1 = 0.  
  
  
Only in this last case, by playing 2 segments, would Player 1's score be greater than Player2's. Therefore, return answer 2.

Returns:
  *int:* the minimum number of segments Player 1 must play so that their score is greater than Player 2's score.  
  

**Constraints**  
  
- 1 <= n <= 10<sup>5</sup>  
- *coins[i]* is either 1 or 0  
  
 ________________________________________________________________________________________
 
 ## Solution  
   
   
   
 1. Get the total score if you play all the segments, by iterating through *coins* array, with the condition of <br><br>*coins[i] == 0 ? sum-=1 : sum += 1* <br><br>
 2. Initialize a new sum for Player 1's score. Iterate again through the array, and once Player 1's score(newSum) is greater than Player 2's score(sum  - newSum), return i+1.  
 <br>*coins[i] == 0 ? newSum-=1 : newSum += 1* <br>
 *newSum > sum - newSum ? return i+1 :*<br>

