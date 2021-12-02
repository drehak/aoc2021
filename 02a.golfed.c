main(){int h=0,d=0,n;char*s;while(scanf("%s%u",s,&n)==2)if(s[0]=='f')h+=n;else d=(s[0]=='d')?d+n:((d>n)?(d-n):0);printf("%u",h*d);}
