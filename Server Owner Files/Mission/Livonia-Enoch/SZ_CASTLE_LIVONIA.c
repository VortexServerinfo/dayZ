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
SpawnObject("Land_Misc_Well_Pump_Yellow", "1027.933350 437.591980 11385.242188", "162.000092 0.000000 -0.000000", 1);
SpawnObject("rf_helipad2_Static", "835.094849 435.729858 11427.236328", "26.999958 -0.000000 -0.000000", 1);
SpawnObject("Bonfire", "1019.446350 437.822723 11404.668945", "-126.990433 0.000000 -0.000000", 1);
SpawnObject("rf_helipad2_Static", "892.580811 435.822754 11403.762695", "26.720331 0.000000 -0.000000", 1);
SpawnObject("rf_helipad2_Static", "792.498413 433.790131 11460.250977", "62.999973 -0.000000 -0.000000", 1);
SpawnObject("Land_Bilboard_Livonia_1", "1011.972778 438.430176 11394.081055", "89.999931 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Furniture_anatomy_poster_2", "1103.072144 449.474945 11412.779297", "1.849285 0.000000 -0.000000", 0.999999);
SpawnObject("Land_Bilboard_Livonia_2", "757.156006 429.538818 11521.066406", "125.999870 0.000000 -0.000000", 1);
SpawnObject("Land_Workshop_FuelStation", "900.708618 440.371826 11448.606445", "38.921314 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Bridge_Wood_25", "876.451050 435.225830 11451.408203", "22.548801 0.000000 -0.000000", 1);
SpawnObject("Land_Castle_Wall1_20_Turn", "886.102173 432.061707 11454.584961", "-155.661148 0.000000 -0.000000", 1);
SpawnObject("Land_Castle_Wall1_20_Turn", "915.573059 433.984863 11443.772461", "55.242054 -2.652484 1.913319", 1);
SpawnObject("ExpansionTraderJose", "881.314453 444.540527 11449.490234", "-70.190468 0.000000 0.000000", 1);
SpawnObject("Land_Castle_WallS_5_D_nolc", "905.204529 438.285706 11423.444336", "39.967773 0.000000 -0.000000", 1);
SpawnObject("Land_Castle_WallS_5_D_nolc", "916.728821 438.259003 11412.472656", "-135.000000 0.000000 -0.000000", 1);
SpawnObject("Land_Castle_WallS_10_nolc", "927.906799 438.948792 11409.619141", "-63.000031 0.000000 0.000000", 1);
SpawnObject("ExpansionTraderJose", "901.225281 438.947418 11445.440430", "-141.052872 0.000000 -0.000000", 1);
SpawnObject("Land_Castle_Wall1_20_Turn", "881.094421 432.378754 11442.474609", "36.957695 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_deadbody5", "1100.207764 447.712219 11408.339844", "-89.999947 0.000000 0.000000", 1);
SpawnObject("Land_City_Stand_Grocery", "1079.862549 447.208801 11421.595703", "-84.113510 0.000000 0.000000", 1);
SpawnObject("StaticObj_Platform1_Block", "866.231140 431.333313 11484.202148", "36.996815 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Angle", "870.049316 431.348633 11489.856445", "105.147789 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Angle", "869.524292 431.348755 11493.577148", "59.943958 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_skull_pile", "1106.508301 447.564178 11411.987305", "-13.773564 0.000000 0.000000", 1);
SpawnObject("StaticObj_Platform1_Block", "864.328491 431.350006 11498.050781", "37.738052 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderDenis", "1036.238159 436.122406 11364.884766", "31.738966 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Angle", "850.784546 431.370728 11508.025391", "14.904111 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Angle", "847.066895 431.370850 11507.484375", "-30.299707 0.000000 0.000000", 1);
SpawnObject("ExpansionTraderDenis", "1034.617920 436.163361 11365.819336", "32.624638 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderDenis", "1033.222168 436.263123 11366.736328", "31.992393 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Block", "856.447449 431.361572 11504.136719", "37.738045 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Block", "850.511902 431.341187 11496.221680", "36.996819 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderIndar", "1027.181519 436.671478 11371.299805", "35.999977 -0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderIndar", "1025.560547 436.698456 11372.754883", "44.999981 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Block", "842.573120 431.365631 11502.213867", "36.996819 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Castle_Wall3", "1009.917664 435.541809 11383.544922", "27.278442 -0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderRolf", "1100.187256 451.334442 11408.885742", "90.949547 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Block", "860.321777 431.344513 11476.382813", "36.996815 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_bone_pile3a", "1106.595093 447.384521 11411.046875", "79.091705 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Block", "844.602539 431.352386 11488.402344", "36.996819 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Block", "852.498291 431.348236 11482.296875", "36.996822 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_garland_small_anim", "1104.947632 450.106781 11411.427734", "-171.451614 0.000000 -0.000000", 1);
SpawnObject("Land_City_Stand_News2", "1102.557251 448.771973 11403.659180", "-83.376343 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_DeconShower_Large", "885.342163 440.990692 11447.454102", "-66.335510 0.000000 0.000000", 1);
SpawnObject("StaticObj_Platform1_Ramp", "831.609680 431.342896 11476.220703", "127.133545 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Ramp", "836.876770 431.319519 11471.989258", "127.111771 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_spike_corpse6", "1097.929199 448.320160 11408.241211", "89.999954 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Ramp", "842.457642 431.309387 11467.728516", "127.831192 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Ramp", "848.487061 431.314362 11463.211914", "127.111771 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_cross_corpse1", "1099.730103 452.756348 11410.346680", "-89.999947 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_Sandbox", "852.958252 434.278503 11486.721680", "37.831280 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderRolf", "1100.342651 451.334442 11411.928711", "95.309776 0.000000 -0.000000", 1);
SpawnObject("ExpansionP2PTraderMirek", "1105.905640 447.313965 11408.424805", "-88.190475 0.000000 0.000000", 1);
SpawnObject("StaticObj_Platform1_Angle", "838.872498 431.381866 11496.697266", "-75.713882 0.000000 0.000000", 1);
SpawnObject("ExpansionTraderJose", "902.088501 439.104340 11456.924805", "-144.697479 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Angle", "839.387451 431.400421 11492.898438", "-119.994385 0.000000 -0.000000", 1);
SpawnObject("dz/rocks_bliss/rock_wallh5.p3d", "1060.805908 439.313446 11392.543945", "-1.869720 0.000000 -0.000000", 1);
SpawnObject("dz/structures/furniture/school_equipment/periodic_table.p3d", "1102.754517 448.147827 11407.474609", "-3.126073 0.000000 -0.000000", 1.00001);
SpawnObject("StaticObj_Platform1_Block", "858.407715 431.337036 11490.116211", "36.996822 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Stairs_30", "832.019958 432.441803 11485.269531", "40.381981 0.000000 -0.000000", 1);
SpawnObject("dz/structures/furniture/medical/medical_table/medical_table.p3d", "1106.207275 447.274933 11409.951172", "3.107724 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Stairs_30_WallR", "834.501587 432.910278 11486.512695", "38.550694 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Stairs_30_WallR", "832.744263 432.919647 11487.989258", "42.169662 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderJose", "902.437744 438.954437 11444.530273", "-140.704041 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Platform1_Stairs_Block", "836.537842 431.314911 11490.514648", "41.010399 0.000000 -0.000000", 1);
SpawnObject("dz/rocks_bliss/stone6.p3d", "1069.274902 445.039703 11402.563477", "-3.067944 0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "835.051697 434.789368 11492.591797", "-1.727875 0.000000 -0.000000", 1);
SpawnObject("dz/rocks_bliss/stone6.p3d", "1068.461060 445.077240 11402.078125", "1.487364 -0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "834.788513 434.770813 11495.926758", "-1.570795 0.000000 0.000000", 1);
SpawnObject("dz/rocks_bliss/stone6.p3d", "1067.915283 445.120575 11407.057617", "2.115681 0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "835.289063 434.770813 11499.050781", "-1.256636 0.000000 0.000000", 1);
SpawnObject("AP_static_gore_garland_big_anim", "1096.253174 447.949097 11412.465820", "71.999947 -0.000000 -0.000000", 1);
SpawnObject("dz/rocks_bliss/stone6.p3d", "1066.591064 445.255188 11407.075195", "1.487362 -0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "836.985779 434.754578 11502.176758", "-0.942476 0.000000 0.000000", 1);
SpawnObject("Land_Medical_Tent_Shower", "1065.554565 446.917084 11404.079102", "171.451462 -1.176649 -5.210384", 1);
SpawnObject("AP_static_gore_skull3", "1104.957642 448.223328 11409.675781", "-18.000000 0.000000 0.000000", 1);
SpawnObject("dz/rocks_bliss/stone6.p3d", "1065.632813 445.351746 11407.075195", "1.487362 -0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "839.186584 434.754578 11505.084961", "-0.942476 0.000000 0.000000", 1);
SpawnObject("AP_static_gore_sleepbag1_green", "1103.088989 447.560669 11412.448242", "85.643639 0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "840.979126 434.754578 11507.563477", "-0.942476 0.000000 0.000000", 1);
SpawnObject("dz/rocks_bliss/stone6.p3d", "1063.139160 445.554688 11406.278320", "-2.282548 0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "843.321716 434.759796 11510.205078", "-0.736378 0.000000 0.000000", 1);
SpawnObject("dz/structures/furniture/tables/table_umakart/table_umakart.p3d", "1105.184448 447.229675 11408.610352", "-3.140833 0.000000 -0.000000", 1);
SpawnObject("dz/rocks_bliss/stone6.p3d", "1063.690918 445.510284 11406.462891", "-0.711752 0.000000 0.000000", 1);
SpawnObject("StaticObj_Castle_Wall3_D_L", "1055.352051 446.559326 11401.440430", "73.492210 0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "846.255554 434.759796 11511.825195", "-0.345739 0.000000 0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "849.912109 434.759674 11512.413086", "0.000002 0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "853.098083 434.759674 11511.805664", "0.339274 0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "856.095703 434.750519 11510.083984", "0.679307 0.000000 -0.000000", 1);
SpawnObject("dz/structures/military/misc/misc_concreteblock2_stripes.p3d", "858.955444 434.750519 11507.739258", "0.666369 0.000000 -0.000000", 1);
SpawnObject("dz/gear/tools/candle.p3d", "1102.373901 448.250763 11412.702148", "0.628317 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "861.642395 435.136200 11505.634766", "37.718555 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "864.354919 435.124634 11503.573242", "37.718548 -0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderHassan", "1069.530151 444.949097 11405.466797", "98.999931 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "867.236023 435.124634 11501.313477", "37.718548 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "870.058411 435.124634 11499.023438", "37.718548 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "872.281738 435.123383 11496.681641", "55.718555 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "873.798096 435.123383 11493.742188", "73.718536 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "874.219482 435.123260 11490.686523", "91.718513 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "873.850403 435.123260 11487.526367", "109.718491 0.000000 -0.000000", 1);
SpawnObject("Land_Misc_Table_Market_Spawn", "1103.296143 447.741211 11412.436523", "-0.000144 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "872.235779 435.107941 11484.782227", "127.718506 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock1_End", "857.991943 434.852966 11493.199219", "-143.258774 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "870.066833 435.107941 11482.016602", "127.718506 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "868.162231 435.107941 11479.399414", "127.718506 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "866.062317 435.119141 11476.717773", "127.718506 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "864.036865 435.119141 11473.774414", "127.718506 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "854.582092 435.111664 11491.127930", "37.718548 -0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_deadbody_leg1", "1103.455933 447.597321 11412.484375", "-94.970284 -13.630869 -2.903012", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "856.930786 435.111664 11489.347656", "37.718548 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_skull4a", "1103.991089 448.289154 11412.334961", "-126.000061 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "856.781250 435.111664 11486.465820", "127.718506 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_hanged_corpse1_anim", "1100.119995 449.343781 11412.278320", "-28.746513 0.000000 0.000000", 1);
SpawnObject("AP_prop_skeleton_skull1_blood", "1106.312256 447.446838 11409.530273", "-41.100861 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "854.653809 435.122864 11483.700195", "127.718506 0.000000 -0.000000", 1);
SpawnObject("dz/rocks_bliss/stone6.p3d", "1064.644775 445.428802 11406.704102", "1.173203 -0.000000 -0.000000", 1);
SpawnObject("dz/gear/tools/candle.p3d", "1104.228149 448.250336 11412.535156", "0.628317 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "851.651794 435.115814 11491.098633", "127.718506 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "849.454895 435.127014 11488.181641", "127.718506 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "848.941895 435.122864 11485.676758", "-142.281433 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderJose", "903.198547 439.104340 11456.062500", "-140.947693 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2_Stripes", "851.996582 435.122864 11483.256836", "-142.281433 0.000000 -0.000000", 1);
SpawnObject("dz/gear/tools/candle.p3d", "1102.975586 448.250610 11412.695313", "-0.157081 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock1", "857.095947 434.848755 11492.007813", "36.741230 0.000000 -0.000000", 1);
SpawnObject("dz/gear/tools/candle.p3d", "1103.539307 448.250488 11412.567383", "-0.157081 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock1_End", "856.191223 434.852966 11490.802734", "36.741230 0.000000 -0.000000", 1);
SpawnObject("dz/gear/tools/candle.p3d", "1105.915894 448.338013 11409.894531", "-0.157081 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock1", "857.372742 434.734375 11483.797852", "-53.353561 0.000000 0.000000", 1);
SpawnObject("AP_static_gore_hanged_parts3_anim", "1100.668213 448.391907 11407.527344", "-0.000064 0.000000 0.000000", 1);
SpawnObject("AP_static_gore_skull4a", "1102.686157 448.289459 11412.360352", "107.999939 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock1", "848.902771 434.738525 11490.857422", "-52.214455 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock1_End", "850.091431 434.742737 11489.928711", "-52.214455 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock1_End", "847.727539 434.742737 11491.773438", "127.785500 0.000000 -0.000000", 1);
SpawnObject("AP_prop_skeleton_part8_blood", "1106.351074 448.354553 11409.908203", "-143.999893 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderIndar", "1028.763428 436.633301 11370.045898", "35.999996 -0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock1_End", "858.579102 434.738586 11482.891602", "-53.353554 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock1_End", "856.180176 434.738586 11484.689453", "126.646416 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Furniture_anatomy_poster_1", "1106.906250 449.389069 11411.365234", "92.310692 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Flagpole", "885.240295 439.082306 11447.524414", "-161.884811 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderRolf", "1083.849243 445.054840 11421.688477", "94.524933 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderRolf", "1103.481079 447.360992 11403.385742", "-85.475014 0.000000 0.000000", 1);
SpawnObject("ExpansionTraderRolf", "1089.198120 445.510315 11396.967773", "1.516209 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Furniture_wheel_cart_DZ", "1083.154175 445.247803 11399.155273", "166.118286 26.274895 63.807610", 1);
SpawnObject("dz/gear/tools/fireextinguisher.p3d", "1068.574829 445.841705 11405.925781", "-1.727875 0.000000 -0.000000", 1);
SpawnObject("dz/gear/tools/farming_hoe.p3d", "1086.141724 445.820465 11398.129883", "0.665727 1.206124 -2.667228", 1.00001);
SpawnObject("StaticObj_Furniture_tools_racking", "1085.412109 445.459473 11397.273438", "-175.560898 0.000000 -0.000000", 1);
SpawnObject("dz/gear/tools/broom_birch.p3d", "1086.043213 446.891602 11397.219727", "0.000000 0.000000 2.810714", 1);
SpawnObject("dz/gear/tools/alarmclock.p3d", "1085.839355 447.044464 11397.317383", "2.827431 0.000000 -0.000000", 1);
SpawnObject("dz/gear/tools/kitchentimer.p3d", "1085.030518 447.044464 11397.533203", "1.099557 -0.000000 -0.000000", 1);
SpawnObject("dz/gear/tools/whetstone.p3d", "1085.596558 447.044464 11397.396484", "-0.471239 0.000000 0.000000", 1);
SpawnObject("dz/gear/tools/hay_hook.p3d", "1085.828979 446.620331 11397.191406", "-2.317910 -0.055909 0.361166", 1);
SpawnObject("dz/gear/tools/lug_wrench.p3d", "1085.357300 446.596161 11397.247070", "-2.929359 -1.389987 -1.870821", 1);
SpawnObject("dz/gear/tools/hacksaw.p3d", "1085.339600 446.041046 11397.411133", "-2.071929 -1.537011 2.074259", 1);
SpawnObject("dz/gear/tools/screwdriver.p3d", "1085.738525 446.042969 11397.341797", "0.414612 0.000000 1.539602", 1);
SpawnObject("dz/gear/tools/hammer.p3d", "1085.512817 446.044464 11397.362305", "2.157001 -1.493112 1.037802", 1);
SpawnObject("ExpansionTraderRolf", "1087.339722 445.548279 11397.238281", "-1.226667 0.000000 0.000000", 1);
SpawnObject("ExpansionTraderRolf", "1025.116699 437.222626 11401.261719", "90.531342 0.000000 -0.000000", 1);


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
