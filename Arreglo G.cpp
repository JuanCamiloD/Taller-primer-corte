#include <iostream>


int main() {
	int j=0;
   char v1[]={"j""u""a""n"}, v2[]={"c""a""m""i""l""o"},v3[11], v4[]={""};
	for(int i=0;i<11;i++){
		if(i<4){
			v3[i]=v1[i];
		}else if(i==4){
	         
			v3[i]=v4[0];
			
		}else{
			v3[i]=v2[j];
			j++;
		}
			printf("%c",v3[i]);
	}



	return 0;
}
