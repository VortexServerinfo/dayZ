static Object SpawnObject(string type, vector position, vector orientation, float scale = 1.0)
{
    Object obj;
    if (type.Contains(".p3d")) {
        obj = GetGame().CreateStaticObjectUsingP3D(type, position, orientation, scale, false);
    } else {        
        obj = GetGame().CreateObjectEx(type, position, ECE_SETUP | ECE_CREATEPHYSICS | ECE_NOLIFETIME | ECE_NOPERSISTENCY_WORLD | ECE_NOPERSISTENCY_CHAR);
    }

    if (!obj) {
        Error("Failed to create object " + type);
        return null;
    }

    obj.SetPosition(position);
    obj.SetOrientation(orientation);
    obj.SetOrientation(obj.GetOrientation());
    obj.SetScale(scale);
    obj.Update();
	obj.SetAffectPathgraph(true, false);
	if (obj.CanAffectPathgraph()) {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
    } 

    return obj;
}

// Paste anything below this line into the bottom of your 'void main()' function


// Created Objects
SpawnObject("ExpansionTraderMirek", "8912.406250 476.207672 2034.185913", "-0.000032 0.000000 0.000000", 1);
SpawnObject("Land_Wall_Gate_FenR_Big_Open", "8900.754883 472.968048 2077.850830", "107.999908 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Roadblock_CncBlocks_short", "8898.860352 472.899872 2075.488770", "105.662613 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Garbage_Pile3", "8927.334961 472.415466 2077.910645", "-53.438011 0.000000 0.000000", 1);
SpawnObject("StaticObj_Roadblock_CncBlocks_short", "8902.214844 472.517395 2086.588379", "154.096741 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8908.736328 474.152618 2066.435059", "88.229324 2.272540 -9.498905", 0.999999);
SpawnObject("StaticObj_Wall_IndCnc_4", "8908.830078 475.034454 2060.748779", "88.229324 2.272542 -9.498907", 0.999999);
SpawnObject("StaticObj_Wall_IndCnc_4", "8909.024414 475.971130 2054.995605", "88.229324 2.272541 -9.498907", 0.999999);
SpawnObject("StaticObj_Wall_IndCnc_4", "8917.333008 475.129852 2056.000000", "89.647873 3.240082 -6.437513", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8917.293945 475.988983 2050.273438", "90.150383 2.790765 -9.659150", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8917.353516 476.795929 2044.481567", "89.647873 3.240080 -6.437508", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8908.861328 476.572906 2049.227783", "96.723625 0.104938 -2.483096", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8902.287109 477.013702 2043.225830", "179.838074 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8899.337891 476.980804 2046.073120", "-90.161804 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8899.362305 476.944214 2051.868164", "-90.161804 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8908.738281 476.454895 2046.389771", "-0.161810 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8917.317383 477.070282 2038.881958", "89.647873 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_End_2", "8912.648438 476.468048 2046.377075", "0.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_End_2", "8908.346680 476.664276 2045.354736", "95.973419 0.000000 -0.000000", 0.999999);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8911.910156 474.582855 2058.001709", "174.311890 8.764638 3.376511", 1);
SpawnObject("StaticObj_Wall_IndCnc_End_3", "8916.535156 473.381439 2058.460693", "161.999847 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_End_3", "8915.637695 473.434662 2058.307129", "-9.000043 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8917.883789 474.176605 2059.685791", "12.311938 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_End_2", "8921.707031 474.223083 2058.599121", "27.000000 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8914.219727 475.750031 2050.072998", "-0.408233 -7.299942 -1.080248", 1);
SpawnObject("StaticObj_Wall_IndCnc_End_2", "8917.222656 477.044037 2034.956665", "89.999954 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8916.918945 476.481476 2031.961426", "-0.408138 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_End_2", "8920.863281 476.519989 2032.099854", "-9.000051 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8904.924805 476.876038 2040.157837", "-90.408127 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8902.420898 476.601318 2051.996582", "179.591904 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8893.385742 476.797516 2054.277588", "-0.408002 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8890.512695 476.798431 2051.222412", "-90.407990 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8890.544922 476.769257 2045.221069", "-90.407990 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8890.437500 476.803009 2039.407959", "-88.352325 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8890.217773 476.889282 2033.452148", "-88.352325 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8893.135742 476.749054 2030.580566", "-178.352234 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8898.984375 476.781616 2030.518188", "179.592026 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8904.880859 476.823334 2030.567749", "179.591995 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8898.563477 476.863464 2033.755371", "89.591972 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8907.693359 476.702850 2033.580933", "89.591919 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "8913.753906 476.468872 2039.683960", "88.601395 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8910.806641 476.469177 2039.539551", "-0.408233 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "8893.578125 476.847870 2042.431763", "179.591980 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Tank_Small_Rusty", "8894.975586 475.247162 2059.733643", "5.446778 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Tank_Small_Rusty", "8892.700195 472.770996 2077.395752", "23.446789 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Garbage_Pile7", "8916.372070 476.293030 2046.029175", "87.466629 3.137059 -9.975788", 1);
SpawnObject("StaticObj_Tank_Small_Rusty", "8921.833984 476.897430 2038.568604", "67.147896 0.000000 -0.000000", 0.999999);
SpawnObject("StaticObj_Tank_Small_Rusty", "8903.209961 475.838501 2022.347046", "-30.553225 0.000000 0.000000", 1);
SpawnObject("Land_Ruin_Mil_GuardBox_Brown", "8897.776367 476.162384 2043.628784", "177.758011 0.000000 -0.000000", 1);
SpawnObject("Land_HA_Foot_Bridge_Ramp", "8924.816406 474.510193 2012.701050", "11.598289 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Garbage_Pile7", "8918.300781 476.732117 2037.556152", "-95.918259 0.000000 -0.000000", 1);
SpawnObject("Land_HA_Foot_Bridge_8m", "8924.203125 474.507446 2009.625610", "11.507110 0.000000 -0.000000", 1);
SpawnObject("dz/rocks_bliss/rock_wallh6.p3d", "8918.786133 469.981659 2003.518677", "1.072125 0.000000 -0.000000", 1);
SpawnObject("Land_HA_Foot_Bridge_Ramp", "8923.633789 474.507782 2006.777954", "-168.793945 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Pallets3", "8914.969727 476.348511 2034.153564", "142.315781 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Pallets3", "8919.160156 476.352295 2032.869385", "92.181412 0.000000 -0.000000", 1);
SpawnObject("Land_Ruin_Mil_GuardBox_Brown", "8906.223633 473.916016 2058.861572", "-2.242038 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_Pallets3", "8914.634766 476.348572 2040.321655", "92.181412 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Pipes", "8896.114258 472.000214 2086.806641", "-2.862749 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_Pipes", "8893.775391 472.860535 2072.593750", "-65.862755 0.000000 0.000000", 1);
SpawnObject("bldr_rock_wallh6", "8960.723633 439.020966 1949.781128", "172.580643 0.000000 -0.000000", 1.00001);
SpawnObject("bldr_rock_wallh6", "8965.249023 440.319611 1949.590698", "46.580513 0.000000 -0.000000", 1);
SpawnObject("bldr_rock_wallh6", "8969.914063 444.510254 1956.394287", "8.939173 0.000000 -0.000000", 1);
SpawnObject("bldr_rock_wallh5", "9008.799805 429.875610 1936.670288", "165.285248 0.000000 -0.000000", 1);
SpawnObject("bldr_rock_wallh5", "8961.664063 431.640381 1925.484619", "-167.714722 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Mil_Artilery_Rampart", "8973.645508 429.184631 1920.712280", "176.737015 -0.007432 -0.261506", 0.999998);
SpawnObject("StaticObj_Mil_Artilery_Rampart", "8982.369141 429.023895 1921.888550", "167.742798 0.667046 -2.063543", 1);
SpawnObject("StaticObj_Mil_Artilery_Rampart", "8990.833984 428.736694 1924.639282", "156.783890 -0.379377 -0.975262", 1);
SpawnObject("StaticObj_Mil_Artilery_Rampart", "8999.026367 428.599274 1928.450439", "153.099518 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_d_piceaabies_fallend", "8993.541016 429.507996 1927.023804", "22.135254 7.467158 -9.463593", 0.999999);
SpawnObject("bldr_plnt_d_piceaabies_fallend", "9007.803711 428.867706 1927.662720", "-8.818451 0.000000 0.000000", 1);
SpawnObject("bldr_plnt_d_piceaabies_fallend", "8997.430664 427.775452 1915.531616", "162.181717 0.046697 0.145287", 1);
SpawnObject("bldr_rock_wallh4", "8978.127930 433.601227 1940.302368", "8.488736 0.000000 -0.000000", 0.999999);
SpawnObject("bldr_rock_wallh6", "8931.783203 451.557220 1965.794922", "23.529783 15.561366 -3.022654", 1);


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
