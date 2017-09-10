import java.util.*;
class main()
{
static void printFirstReprating(int arr[])
{
//initialize index of first repeating element
int min = -1;
// creates an empty HaShset
HashSet<Integer> set = new HashSet<>();
//Traverse the input array from right to left
for (int i=arr.length-1; i>0; i--)
{
if (set.contains(arr[i]))
   min = i;
else
   set.add(arr[i]);
}
//print the result
if (min != -1)
   system.out.println("the first printing element is " + arr[min]);
else
   system.out.println("there are no repeating elements");
}
public static void main (string[] args) throws java.lang.Exception
{
int arr[] = {10, 5, 3, 4, 3, 5, 6};
printFirstRepeating(arr);
}
}
