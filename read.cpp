void read(int &x){
    char ch=getchar(); x=0; 
    while(!isdigit(ch)&&ch^'0') ch=getchar();
    while(isdigit(ch)) x=(x<<1)+(x<<3)+ch-'0',ch=getchar();
}
int main(){
    read(a);
    read(b);
    printf("%d",a+b);
}
