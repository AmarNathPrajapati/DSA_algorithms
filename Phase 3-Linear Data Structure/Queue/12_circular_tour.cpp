class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int balance = 0;
       int deficit = 0;
       int start = 0;
       for(int i = 0; i<n; i++){
           balance += p[i].petrol-p[i].distance;//unit of balance petrol after covering the distance
           if(balance<0){
               deficit +=balance;//total kami for the particular range.
               start = i+1;
               balance = 0;// start with new place hence balance will be zero.
           }
       }
       if(balance+deficit >=0){
           return start;
       }else{
           return -1;
       }
    }
};