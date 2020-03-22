#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cont=0,cond=0,aux;
    cin>>n;
	aux=n;
    int vet[10000];
    for(int i=0;i<=cont;i++){
    	n+=1;
	    while(n%10==0){
	        n = n/10;
	    }
	    vet[cont]=n;
	    for(int j=0;j<cont;j++){
    		if(vet[j]==vet[cont] && cont!=j)
	    		cond=1;
	    }
	    if(cond==1)
	    	break;
        cont++;
    }
	for(int k=0;k<cont;k++){
		if(vet[k]==aux)
			cond=1;
		else
			cond=0;
	}
	if(cond==1)
    	cout<<cont<<endl;
	else
		cout<<cont+1<<endl;
    return 0;
}