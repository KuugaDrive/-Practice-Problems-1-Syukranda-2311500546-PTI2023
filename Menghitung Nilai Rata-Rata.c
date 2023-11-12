#include <stdio.h>

main ()
{
	int n,i;
	printf ("Nilai Akhir Matkul Pengantar Teknologi Inforamsi");
	printf ("\n -----------------------------------------------");
	printf ("\nMasukkan Jumlah Bobot Nilai Matkul Anda =");
	scanf ("%i", &n);
	float bil[n],total,rata;
	total=0;
	for (i=1;i<=n;i++)
	{
		printf ("Masukkan Bobot Nilai Yang Ke- %i = ",i);
		scanf ("%f", &bil[i]);
		total = total + bil[i];
		
	 } 
	 rata = total/n;
	 printf ("Rata-Rata Nilai Matkul Anda = %.2f", n,rata);
}
