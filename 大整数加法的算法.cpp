# include<stdio.h>
# include<string.h>
 int main(void)
 {
 	int MAXLEN =210;
 	int a[MAXLEN],b[MAXLEN],c[MAXLEN];
 	char s1[MAXLEN],s2[MAXLEN];
 	int l1,l2;//��ʾ�ַ����ĳ���
	int na,nb,nc;//��ʾa,b,c��ʾ��������λ��
	int i,j,k;
	//�����ַ���s1��s2��ת����a��b����
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0;i<l1;i++){
		a[i]=s1[l1-i-1]-'0';
	}
	na=l1;
	for(i=0;i<l2;i++){
		b[i]=s2[l2-i-1]-'0';
	}
	nb=l2;
	//����c=a+b
	if(na>nb){
		nc=na; 
	} 
	else{
		nc=nb;
	}
	for(i=0;i<nc;i++){
		c[i]=c[i]+a[i]+b[i];
		c[i+1]+=c[i]/10;//��һ 
		c[i]=c[i]%10;
	}
	nc++;
	while(c[nc-1]==0){
		if(nc==1){
			break;
		}
		else{
			nc--;
		}
    //���c��ֵ
	for(i=nc-1;i>=0;i--){
		printf("%d",c[i]);
	} 
	printf("\n");
	return 0;
	} 
 }
