void registernewbase()
{
	char rank[50], officialname[50], baselocation[50], rankoption;
	printf("enter your rank: ");
	printf("(1)colonel --> c\n(2)lieutenant --> l\n(3)major --> m");
	fgets(rank, sizeof(rank), stdin);
	if(rankoption != 'c' || rankoption != 'l' || rankoption != 'm' )
	{
		printf("wrong ranked entered or you are not eligible for base registration");
		//apply delay functioon here of 5 seconds and then go back to menu//
		menu();
	}
	printf("enter your name: ");
	fgets(officialname, sizeof(officialname), stdin);
	printf("location of base: ");
	fgets(baselocation, sizeof(baselocation), stdin);
	//have to apply filing function in this which will store name,tank,id,password,
	printf("your bease has been registered");
	
	
}
