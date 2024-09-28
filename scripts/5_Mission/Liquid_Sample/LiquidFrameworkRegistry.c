modded class LiquidFrameworkRegistry
{
	override void RegisterCustomLiquids()
	{
		super.RegisterCustomLiquids();
		
		RegisterLiquid(LIQUID_SAMPLEONE, "TEQUILA", Colors.SAMPLELIQUIDONE);
        RegisterLiquid(LIQUID_SAMPLETWO, "ORANGE JUICE", Colors.SAMPLELIQUIDTWO);
	}
};