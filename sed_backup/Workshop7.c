// Machine learning ////////////////////////////
#include <profile.c>

function run()
{
	StartDate = 2004;
	EndDate = 2016;
	BarPeriod = 60; // 1 day = 1440 (earlier value)
	BarZone = WET; // Western European midnight
	Weekend = 1;	// don't merge Friday and Sunday bars
	LookBack = 3;	// only 3 bars needed
	NumWFOCycles = 10;

	set(RULES+TESTNOW);

	if(Train) Hedge = 2;	// for training, allow long + short	
	ExitTime = 48;  				// one week (6 candles = initial value)
	
	if(adviseLong(PATTERN+2,0,
		priceHigh(2),priceLow(2),priceClose(2),
		priceHigh(1),priceLow(1),priceClose(1),
		priceHigh(1),priceLow(1),priceClose(1),
		priceHigh(0),priceLow(0),priceClose(0)) > 40)
		reverseLong(1);
	
	if(adviseShort() > 40)
		reverseShort(1);

	PlotWidth = 600;
	PlotHeight1 = 300;
	//plotTradeProfile(40);
	//plotWFOCycle(Equity,0);
	//plotWFOProfit();
}
