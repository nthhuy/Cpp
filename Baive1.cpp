void sapxep( int m[], int n) {
    int a;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if (m[j]<m[i]){
                a = m[i];
                m[i] = m[j];
                m[j] = a;
            }
        }
        cout<<m[i];
    }
}
void tinhtongle(int m[], int n)
{
    int sum=0, j;
    for(int i=0; i<n; i++)
    {
        if((m[i]%2==1) && (i%2==0))
            sum+=m[i];
    }

}
int sodaonguoc(int N)
{
    int sdn = 0;
    while (n > 0)
    {
        int a = n % 10;
        sdn = sdn * 10 + a;
        n = n / 10;
    }
bool songuyento(int n) {
    if (n < 2)
		return false;
	for (int i = 2; i <= (int)sqrt(n); i++)
    {
		if (n % i == 0)
			return false;
}
	return true;
