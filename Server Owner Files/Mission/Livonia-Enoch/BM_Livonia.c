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
SpawnObject("CS_Fence_2", "2973.092529 449.310760 1115.578613", "-74.493095 0.000000 0.000000", 1);
SpawnObject("CS_Fence_2", "2973.553467 449.183350 1117.587036", "-80.756767 0.000000 0.000000", 1);
SpawnObject("CS_Fence_2", "2981.929443 448.492279 1117.107666", "41.859531 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2980.533691 448.554077 1118.636353", "55.486275 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2974.664551 449.020325 1119.102539", "-27.348846 0.000000 0.000000", 1);
SpawnObject("CS_Fence_2", "2981.763916 448.653961 1112.882813", "147.069077 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2982.752441 448.519562 1114.360229", "93.021683 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_1", "2982.716797 448.460236 1115.965088", "83.110901 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_1", "2979.979736 448.732391 1118.356323", "-48.484100 0.000000 0.000000", 1);
SpawnObject("CS_Fence_1", "2975.981445 448.887329 1119.785767", "-26.426334 0.000000 0.000000", 1);
SpawnObject("ExpansionTraderMirek", "2985.430664 447.963776 1132.159424", "26.131716 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2989.649170 449.845154 1081.030884", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2976.494629 450.504089 1085.810303", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2957.733643 456.642059 1194.221069", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2962.760010 453.497498 1182.676392", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2979.068604 454.257721 1192.555786", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "3026.209229 457.887909 1222.193726", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "3049.403809 455.216644 1214.841187", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "3031.027588 454.218903 1202.656250", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "3038.007813 451.043610 1184.001221", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "3015.563965 448.686707 1085.644287", "1.194224 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2970.680908 450.885834 1071.676270", "0.000000 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5_D", "2969.809570 449.819458 1127.985229", "-66.866951 0.000000 0.000000", 0.999999);
SpawnObject("dz/structures/military/misc/misc_barbedwire.p3d", "2940.125244 453.285950 1160.331787", "1.256636 -0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_antenna.p3d", "2968.740723 448.513306 1146.307373", "-0.471239 0.000000 0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_supplybox1.p3d", "2967.280518 449.169891 1130.734863", "0.000000 -0.000000 -0.000000", 1);
SpawnObject("dz/structures_bliss/military/bunkers/bunker1_left.p3d", "2984.249512 445.748993 1035.945435", "1.884953 0.000000 -0.000000", 1);
SpawnObject("dz/structures_sakhal/military/radar/mil_radome_small.p3d", "2976.969971 449.119507 1110.120117", "1.155831 0.000000 -0.000000", 0.999998);
SpawnObject("StaticObj_Tank_Small_Gas", "2988.799561 448.693726 1120.400024", "62.999973 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Tank_Small_Gas", "2990.201172 448.730591 1117.147949", "62.999973 -0.000000 -0.000000", 1);
SpawnObject("Land_FuelStation_Feed", "2974.906250 449.593445 1113.767212", "-49.263290 0.000000 0.000000", 1);
SpawnObject("Land_Wreck_offroad02_aban1", "2971.342529 450.371490 1138.276978", "-89.999901 0.000000 0.000000", 1);
SpawnObject("Land_Wreck_offroad02_aban1", "2977.934570 450.230988 1127.588623", "-64.300255 0.000000 0.000000", 1);
SpawnObject("Land_Wreck_V3S", "2985.811768 449.844177 1117.286621", "144.000031 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_truck01_aban2_orange", "2988.950439 448.194275 1108.615723", "-135.000122 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5_D", "2988.665771 449.249573 1102.475952", "-13.356311 0.000000 0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_piceaabies_3s_summer.p3d", "2963.556641 441.119568 1103.118286", "-0.743924 0.000000 0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_piceaabies_3s_summer.p3d", "2952.520020 437.457672 1113.258301", "-0.181781 0.000000 0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_piceaabies_3s_summer.p3d", "3010.646973 438.461243 1119.672974", "-2.948017 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_piceaabies_3s_summer.p3d", "3032.434570 440.044495 1083.680054", "-2.675849 0.000000 -0.000000", 1.00001);
SpawnObject("dz/plants_bliss/tree/t_piceaabies_3s_summer.p3d", "3034.587646 443.360901 1067.476563", "-2.675849 0.000000 -0.000000", 1.00001);
SpawnObject("dz/plants_bliss/tree/t_piceaabies_3s_summer.p3d", "3041.865723 439.685333 1098.663208", "-2.675849 0.000000 -0.000000", 1.00001);
SpawnObject("dz/plants_bliss/tree/t_piceaabies_3s_summer.p3d", "3048.902100 437.670227 1083.283569", "-2.583792 0.000000 -0.000000", 1);
SpawnObject("Land_Mil_CamoNet_Roof_east", "3019.161133 448.644043 1143.313354", "134.999741 0.000000 -0.000000", 1);
SpawnObject("Land_Mil_CamoNet_Roof_east", "3000.192139 449.066132 1139.682861", "-36.000214 0.000000 0.000000", 1);
SpawnObject("Land_Mil_CamoNet_Roof_east", "2966.146484 450.776062 1120.710571", "17.999790 -0.000000 -0.000000", 1);
SpawnObject("Land_Mil_CamoNet_Roof_east", "2979.548828 449.922882 1126.486328", "56.154270 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderMirek", "2985.547852 448.354218 1153.265869", "151.103180 0.000000 -0.000000", 0.999999);
SpawnObject("ExpansionTraderMirek", "2977.160645 448.911194 1115.235474", "-1.957932 0.000000 0.000000", 1);
SpawnObject("Land_Wall_BackAlley_01_l_gate_F", "2980.745117 449.999146 1137.988281", "60.274864 0.000000 -0.000000", 0.999999);
SpawnObject("dz/plants_bliss/tree/t_juglansregia_2s_summer.p3d", "2995.631104 447.492706 1129.122925", "-2.412070 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_Pole", "2979.391357 448.676941 1139.497803", "149.207489 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5", "2976.708496 448.625122 1137.578491", "-37.082550 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5", "2972.793945 448.674622 1133.067139", "-64.055809 2.509676 1.220450", 1);
SpawnObject("StaticObj_Wall_IndVar1_5", "2982.808105 449.086090 1100.870117", "-19.082542 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5", "2965.620361 449.810730 1126.289063", "16.551819 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Ruin_Wall", "2975.986572 450.161438 1099.068604", "-8.999933 0.000000 0.000000", 1);
SpawnObject("StaticObj_Ruin_DoorWall", "2966.809814 451.295380 1097.613770", "-9.000000 0.000000 0.000000", 1);
SpawnObject("Land_Wall_Gate_FenG_Big_R", "2999.395508 449.136688 1147.555908", "158.331924 0.000000 -0.000000", 1.00001);
SpawnObject("StaticObj_Wall_IndVar1_5", "2997.262939 449.026245 1144.572144", "-30.626905 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_Pole", "3000.139404 449.027039 1146.237305", "151.913361 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5", "2997.338867 449.022034 1151.231689", "-119.951096 0.000000 -0.000000", 0.999999);
SpawnObject("StaticObj_Wall_IndVar1_5_D", "2993.794189 449.010101 1156.223633", "-130.807098 0.000000 -0.000000", 0.999999);
SpawnObject("StaticObj_Wall_IndVar1_5", "2993.568604 448.669220 1163.197510", "50.373085 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5", "2985.363770 448.647583 1158.377075", "-119.897957 0.000000 -0.000000", 0.999999);
SpawnObject("StaticObj_Wall_IndVar1_5_D", "2982.292969 448.726654 1163.565552", "-121.110588 0.000000 -0.000000", 0.999999);
SpawnObject("StaticObj_Wall_IndVar1_5_D", "2962.544434 449.784637 1127.244385", "13.193361 0.000000 -0.000000", 1.00001);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2965.941895 448.713348 1136.197388", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2959.938965 449.711945 1152.427856", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2973.760986 450.176331 1174.238525", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2965.092529 449.797089 1167.007935", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dz/plants_bliss/tree/t_betulapendulae_3s_summer.p3d", "2953.494141 451.398041 1165.711182", "0.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5", "2991.990479 449.017700 1141.370361", "-29.863857 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_IndVar1_5", "2986.705566 449.030029 1138.502319", "-29.384212 0.000000 0.000000", 1);
SpawnObject("ExpansionTraderMirek", "2989.725586 448.354218 1148.713501", "-117.672119 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderMirek", "3001.602051 448.232941 1113.758423", "-27.868284 0.000000 0.000000", 1);
SpawnObject("CS_Fence_2", "3001.751221 448.229034 1117.621826", "-50.174431 0.000000 0.000000", 1);
SpawnObject("CS_Fence_2", "2998.335938 448.229034 1115.844238", "0.375155 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2997.544678 448.229034 1118.244019", "-26.781981 0.000000 0.000000", 1);
SpawnObject("CS_Fence_1", "2998.895020 448.229034 1118.936646", "-27.075735 0.000000 0.000000", 1);
SpawnObject("CS_Fence_1", "2976.370117 448.924133 1117.639771", "18.573668 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2977.465576 448.732239 1120.514038", "-19.781113 0.000000 0.000000", 1);
SpawnObject("CS_Barrier_Large", "2989.949707 448.030090 1122.892700", "161.999954 0.000000 -0.000000", 1);
SpawnObject("CS_Barrier_Large", "2991.985840 448.026886 1123.565186", "161.999954 0.000000 -0.000000", 1);
SpawnObject("CS_Barrier_Large_Stripes", "2985.607910 447.973633 1130.411621", "-34.539364 0.000000 0.000000", 1);
SpawnObject("CS_Barrier_Large", "2986.510986 447.968750 1131.070435", "-35.189552 0.000000 0.000000", 1);
SpawnObject("CS_Barrier_Large_Stripes", "2987.342041 447.966125 1131.794678", "-47.067249 0.000000 0.000000", 1);
SpawnObject("CS_Barrier_Large_Stripes", "2990.948730 448.028687 1123.186523", "161.999969 0.000000 -0.000000", 1);
SpawnObject("Land_sp_dz_gate_3", "2951.430420 456.203461 1128.972046", "135.893799 0.000000 -0.000000", 1);
SpawnObject("CS_Tower", "2942.683594 452.758698 1091.818848", "53.999996 0.000000 -0.000000", 1);
SpawnObject("CS_Tower", "3035.751221 456.307526 1216.264771", "53.999996 0.000000 -0.000000", 1);
SpawnObject("CS_Tower", "2866.803223 469.473511 1228.093140", "17.999987 0.000000 -0.000000", 1);
SpawnObject("CS_Tower", "2877.404053 470.164734 1244.884888", "-18.000010 0.000000 0.000000", 1);
SpawnObject("Land_sp_dz_wall_gu_5", "2936.338623 456.735229 1109.397583", "117.275421 0.000000 -0.000000", 1);
SpawnObject("Land_sp_dz_wall_ent_3", "2959.019531 455.337128 1141.019775", "90.000000 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2979.187012 448.602570 1120.189453", "42.078686 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2972.706055 449.430267 1113.554688", "-89.103531 0.000000 0.000000", 1);
SpawnObject("CS_Barrier_Large_Stripes", "2987.921875 447.965485 1132.724243", "-66.034126 0.000000 0.000000", 1);
SpawnObject("CS_Fence_2", "2987.722412 447.959503 1134.156982", "67.988632 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2986.220947 447.945129 1136.820923", "55.947895 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_1", "2987.030029 447.951569 1135.601685", "59.744324 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_1", "2973.234619 449.457581 1112.352783", "-171.956177 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2975.218018 449.057892 1117.100586", "-42.559326 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Barbedwire", "2983.506348 450.758942 1132.831909", "62.978207 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Barbedwire", "2990.965088 451.119476 1119.551270", "64.068245 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Barbedwire", "2993.743408 451.169586 1114.362427", "63.327019 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_1", "2973.879639 449.224884 1116.621338", "19.685547 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Barbedwire", "2996.394775 451.228546 1109.213257", "59.708050 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3000.336182 448.229034 1119.662354", "-26.502359 0.000000 0.000000", 1);
SpawnObject("CS_Fence_2", "2975.127686 449.134705 1115.714233", "38.440666 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2977.772217 448.827972 1116.856079", "34.979160 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3001.772461 448.229034 1119.253174", "-122.341225 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2996.938477 448.229034 1116.774048", "69.387672 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_1", "2978.575928 448.803925 1115.766357", "96.031265 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_1", "2999.717773 448.229034 1116.091187", "-28.364037 0.000000 0.000000", 1);
SpawnObject("CS_Fence_1", "3000.596924 448.229034 1116.583252", "-30.082481 0.000000 0.000000", 1);
SpawnObject("CS_Fence_2", "2999.666504 448.229034 1114.915405", "-108.837555 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3001.662598 448.229034 1115.880981", "57.474953 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "2979.111572 448.743530 1117.114014", "120.193741 0.000000 -0.000000", 1);


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
