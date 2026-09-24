void main()
{
    //INIT ECONOMY--------------------------------------
    Hive ce = CreateHive();
    if (ce)
        ce.InitOffline();

    //DATE RESET AFTER ECONOMY INIT-------------------------
    int year, month, day, hour, minute;
    int reset_month = 9, reset_day = 20;
    GetGame().GetWorld().GetDate(year, month, day, hour, minute);

    if ((month == reset_month) && (day < reset_day))
    {
        GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
    }
    else
    {
        if ((month == reset_month + 1) && (day > reset_day))
        {
            GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
        }
        else
        {
            if ((month < reset_month) || (month > reset_month + 1))
            {
                GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
            }
        }
    }
}

class CustomMission: MissionServer
{
    void SetRandomHealth(EntityAI itemEnt)
    {
        if ( itemEnt )
        {
            float rndHlt = Math.RandomFloat( 0.95, 1.0 );
            itemEnt.SetHealth01( "", "", rndHlt );
        }
    }


    void SetLowHealth(EntityAI itemEnt)
    {
        if (itemEnt)
        {
            float lowHealth = Math.RandomFloat(0.95, 1.0);
            itemEnt.SetHealth01("", "", lowHealth);
        }
    }

    override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
    {
        Entity playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");
        Class.CastTo(m_player, playerEnt);
        GetGame().SelectPlayer(identity, m_player);
        return m_player;
    }

   //* Orignal method
override Dogtag_Base EquipDogtag(PlayerBase player)
{
	if (!player.HasDogtag()) // check if the player has a tag already
	{
		// create a new tag is the player doesn't have one
		int slotId = InventorySlots.GetSlotIdFromString("Dogtag");
		return Dogtag_Base.Cast(player.GetInventory().CreateAttachmentEx("VortexdogtagSteel", slotId));
	}

	return null;
}
   //* Update dogtag dynamically on kills per life
override void UpdatePlayersStats()
{
    super.UpdatePlayersStats();

    array<Man> players = {};
    GetGame().GetPlayers(players);

    for (int i = 0; i < players.Count(); i++)
    {
        PlayerBase player;
        if (!PlayerBase.CastTo(player, players.Get(i)))
            continue;

        // update player's dogtag base on player kills
        float kills = player.StatGet("players_killed");

        if (kills >= 5 && kills < 10)
        {
            player.ReplaceDogtag("Dogtag_Granite");
        }
        else if (kills >= 10)
        {
            player.ReplaceDogtag("Dogtag_Cobalt");
        }
    }
}

    override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
    {
        EntityAI itemClothing;
        EntityAI itemEnt;

        itemClothing = player.FindAttachmentBySlotName("Body");
        if (itemClothing)
        {
            SetRandomHealth(itemClothing);

            itemEnt = itemClothing.GetInventory().CreateInInventory("BandageDressing");
            player.SetQuickBarEntityShortcut(itemEnt, 2);

            itemEnt = itemClothing.GetInventory().CreateInInventory("BoneKnife");
            SetLowHealth(itemEnt);

            itemEnt = itemClothing.GetInventory().CreateInInventory("Apple");
            SetLowHealth(itemEnt);
        }

        itemClothing = player.FindAttachmentBySlotName("Legs");
        if (itemClothing)
            SetRandomHealth(itemClothing);

        itemClothing = player.FindAttachmentBySlotName("Feet");
        if (itemClothing)
            SetRandomHealth(itemClothing);

        player.GetStatWater().Set(1000);
        player.GetStatEnergy().Set(1000);
    }
};

Mission CreateCustomMission(string path)
{
    return new CustomMission();
}
