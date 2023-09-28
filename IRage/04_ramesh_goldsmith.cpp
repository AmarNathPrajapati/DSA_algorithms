#include <iostream>
using namespace std;
 
int findhcf(int a, int b){
	if(b==0)	return a;
	else		return findhcf(b,a%b);
}
int findlcm(int a, int b){
	int hcf=findhcf(a,b);
	return (a*b)/hcf;
}
 
int main()
{
	int t;
    cin>>t;
    while(t-->0){
        //cout<<"test case: "<<t<<"*********************************************************"<<endl;
    	int cityMin, villMin, Q, C;
    	int data[5][4];
    	cin>>cityMin>>villMin>>Q>>C;
    	for(int i=0;i<5;i++)
    		for(int j=0;j<4;j++)
    			cin>>data[i][j];
    	for(int i=0;i<5;i++){
    		for(int j=0;j<4;j++);
    			//cout<<data[i][j]<<"\t";
    		//cout<<endl;
    	}
    	
    	int lcm=findlcm(cityMin,villMin);
        //cout<<"lcm="<<lcm<<endl;
    	int spi=0, cpi=0, sp=0, cp=0, numsp=0, numcp=0, finalsp=0, finalcp=0, finalnum=0;
    	bool buy=true;
    	while(buy){
            //cout<<"\n\ninside buy++++++++++++++++++++++++++++++++"<<endl;
    		int amtleft=lcm/villMin, amt=0;
    		int cost=0;
    		while(amtleft!=0 && cpi<5){
                //cout<<"c amtleft="<<amtleft<<endl;
                
    			amt=(data[cpi][3]<=amtleft)?data[cpi][3]:amtleft;
    			//cout<<"c amt="<<amt<<"*"<<villMin<<endl;
    			if(amt==0){
    				cpi++;
    				continue;
    			}
    			cost+=(data[cpi][2]*villMin*amt)/10;
    			
    			data[cpi][3]-=amt;
    			amtleft-=amt;
    			
    			cp=data[cpi][2];
    			numcp+=amt*villMin;
    			
    			if(data[cpi][3]==0)	cpi++;
    		}
    		if(amtleft!=0)	break;
            for(int i=0;i<5;i++){
	    		for(int j=0;j<4;j++);
	    			//cout<<data[i][j]<<"\t";
	    		//cout<<endl;
    	    }
            //cout<<"cpi="<<cpi<<"!"<<endl;
            //cout<<"cost="<<cost<<endl;
            
    		amtleft=lcm/cityMin, amt=0;
    		int sell=0;
    		while(amtleft!=0 && spi<5){
                //cout<<"s amtleft="<<amtleft<<endl;
                
                
    			amt=(data[spi][0]<=amtleft)?data[spi][0]:amtleft;
                //cout<<"s amt="<<amt<<"*"<<cityMin<<endl;
                if(amt==0){
    				spi++;
    				continue;
    			}
    			sell+=(data[spi][1]*cityMin*amt)/10;
    			
    			data[spi][0]-=amt;
    			amtleft-=amt;
    			
    			sp=data[spi][1];
    			numsp+=amt*cityMin;
    			
    			if(data[spi][0]==0)	spi++;
    		}
    		if(amtleft!=0)	break;
            for(int i=0;i<5;i++){
	    		for(int j=0;j<4;j++);
	    			//cout<<data[i][j]<<"\t";
	    		//cout<<endl;
    	    }
            //cout<<"spi="<<spi<<"@"<<endl;
            //cout<<"sell="<<sell<<endl;
    		if(numcp==numsp && sell>(cost+C) && numcp<=Q){
    			finalsp=sp;
    			finalcp=cp;
    			finalnum=numcp;
                //cout<<"========================="<<finalsp<<" "<<finalcp<<" "<<finalnum<<endl;
    		}
    		else buy=false;
    	}
    	cout<<finalsp<<" "<<finalcp<<" "<<finalnum<<endl;
    }
    return 0;
}
//Language: C++ and partially accepted