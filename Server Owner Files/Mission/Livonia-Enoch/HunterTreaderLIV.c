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
SpawnObject("bldr_plnt_d_piceaabies_fallenc", "3204.017090 400.777618 3707.612061", "38.716602 3.604863 -3.612024", 1);
SpawnObject("StaticObj_Wreck_PowGen", "3194.551025 392.780151 3772.462158", "-35.999996 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_BoxWooden", "3204.567139 398.168579 3731.709717", "-45.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_BoxWooden", "3204.621094 399.112122 3732.443115", "-27.000002 0.000000 0.000000", 1);
SpawnObject("dz/vehicles/wheeled/truck_01/proxy/truck_01_wheel_ruined.p3d", "3187.349121 398.768341 3717.358154", "0.000000 0.000000 1.566878", 1);
SpawnObject("bldr_prop_PileOfWoodenPlanks", "3192.292725 394.968292 3746.438965", "-27.000002 0.000000 -0.000000", 1);
SpawnObject("dz/vehicles/wheeled/truck_01/proxy/truck_01_wheeldouble_ruined.p3d", "3187.557373 397.868347 3717.654053", "0.000000 0.000000 1.508472", 1);
SpawnObject("bldr_plnt_d_quercusRobur_fallenc", "3208.950684 400.472229 3701.601318", "124.666466 4.181413 2.886721", 1);
SpawnObject("bldr_plnt_d_piceaabies_fallenc", "3209.848877 400.280609 3706.161621", "38.635605 4.517694 -4.755208", 1);
SpawnObject("StaticObj_Rubble_Wood2", "3166.184570 394.851624 3729.331787", "-36.000004 0.000000 -0.000000", 1);
SpawnObject("dz/structures/wrecks/vehicles/wreck_uaz.p3d", "3223.563721 396.035797 3746.275635", "1.256637 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wreck_Bulldozer", "3206.175537 395.631165 3756.059814", "17.192598 -5.561036 -2.960778", 1);
SpawnObject("bldr_prop_PileOfWoodenPlanks", "3184.100098 394.438324 3749.623047", "18.000000 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_d_piceaabies_fallenc", "3204.378662 400.509918 3708.372803", "35.380085 2.325105 -3.269693", 1);
SpawnObject("StaticObj_Misc_WoodReserve", "3202.894287 397.430176 3735.983154", "-117.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3192.324219 404.190369 3646.862793", "135.082291 -0.111705 2.094813", 1);
SpawnObject("bldr_misc_woodpile_forest3", "3195.947510 394.523743 3755.476563", "18.000004 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_truck01_aban1_blue", "3169.299805 392.827911 3747.032959", "72.000015 0.000000 -0.000000", 1);
SpawnObject("bldr_Misc_WoodBlock", "3188.081055 395.675049 3742.832031", "0.000000 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_truck01_aban1_orange", "3171.710938 395.234375 3729.876221", "-134.744034 0.000000 -0.000000", 1);
SpawnObject("bldr_Misc_WoodBlock", "3186.057861 395.918610 3740.510010", "0.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_BoxWooden", "3185.038574 398.168640 3721.888916", "-27.000002 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_truck01_aban2_green", "3207.672119 396.019745 3739.215820", "116.413696 7.802588 1.919427", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3189.722412 404.049377 3644.276611", "136.002289 -0.145341 2.092749", 1);
SpawnObject("dz/plants/tree/d_piceaabies_fallenc.p3d", "3203.812744 400.017731 3707.771729", "-2.461883 -0.003720 -0.004338", 1);
SpawnObject("bldr_Misc_WoodBlock", "3184.771729 395.671478 3742.432129", "0.000000 0.000000 -0.000000", 1);
SpawnObject("bldr_Misc_WoodBlock", "3192.483887 396.857605 3731.619873", "0.000000 0.000000 -0.000000", 1);
SpawnObject("Land_Wreck_Caravan_MRust", "3189.186035 402.818268 3686.686768", "-72.000015 0.000000 -0.000000", 1);
SpawnObject("bldr_Misc_WoodBlock", "3187.740967 396.419434 3735.950439", "0.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_BoxWooden", "3184.554443 399.141998 3722.167480", "-45.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3187.117432 403.917450 3641.721680", "135.446640 -0.125031 2.094060", 1);
SpawnObject("Land_Wreck_Trailer_Closed", "3172.672607 395.388184 3740.692871", "127.666710 8.299931 -4.976631", 1);
SpawnObject("StaticObj_Furniture_ladder_A_wood", "3201.964600 397.681915 3734.455322", "152.999954 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Furniture_ladder_A_wood", "3197.056396 397.681915 3732.275879", "152.999954 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wreck_Digger", "3171.125000 399.787842 3717.119629", "-18.000002 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wreck_Decal_Small1_DE", "3242.490479 408.740997 3663.577881", "-144.999023 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wreck_Digger", "3131.399902 391.845825 3771.221191", "8.999993 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wreck_Trailer_Cistern", "3161.650635 390.164001 3785.065674", "179.999939 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wreck_Trailer_Flat", "3204.778564 400.301178 3709.393799", "27.000002 0.000000 -0.000000", 1);
SpawnObject("dz/weapons/melee/blade/woodaxe.p3d", "3207.771484 398.270294 3726.418701", "1.121635 -1.509402 -0.694547", 1);
SpawnObject("bldr_plnt_d_quercusRobur_fallenc", "3209.160156 399.619904 3706.901611", "-144.403473 0.388050 -0.190709", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3184.523438 403.791016 3639.131592", "134.611603 -0.094484 2.095660", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3181.904053 403.665314 3636.552002", "136.541992 -0.165055 2.091288", 1);
SpawnObject("dz/structures_sakhal/industrial/powerplant/proxy/geoplant_coolingstack_generator.p3d", "3189.894531 397.626373 3724.595215", "-0.479888 0.000000 0.000000", 1);
SpawnObject("bldr_prop_PileOfWoodenPlanks", "3191.440674 394.789124 3747.732666", "-26.999990 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_WoodPile_Forest2", "3173.090576 396.193573 3740.454346", "33.819897 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3194.853516 404.326050 3649.523193", "-47.968708 -0.000000 -2.097787", 1);
SpawnObject("bldr_misc_woodpile_forest1", "3170.441406 394.688385 3742.114258", "-146.921356 0.000000 17.374329", 0.999999);
SpawnObject("bldr_plnt_d_FagusSylvatica_fallen", "3168.559326 398.686523 3698.875488", "61.707729 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3197.317139 404.466949 3652.261719", "-47.968708 0.000000 -2.097787", 1);
SpawnObject("StaticObj_Misc_WoodPile_Forest2", "3206.052979 400.794525 3711.785645", "114.847893 2.631505 1.217982", 1);
SpawnObject("bldr_plnt_d_quercusRobur_fallenc", "3203.758789 400.022552 3707.646484", "-61.870953 -4.125252 -3.003737", 1);
SpawnObject("bldr_misc_woodpile_forest1", "3204.983154 400.691376 3709.520264", "113.344154 1.341142 0.578741", 1);
SpawnObject("bldr_plnt_d_quercusRobur_fallenc", "3204.224365 400.059784 3707.797852", "124.561104 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3211.669678 404.841522 3663.696045", "-37.189007 0.066173 -1.240788", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3214.598633 404.914276 3665.910889", "-36.268555 0.086102 -1.239567", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3208.803223 404.763092 3661.398193", "139.758606 -0.000000 1.242551", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3217.524902 404.994843 3668.094727", "-36.824474 0.074068 -1.240343", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3220.439697 405.081604 3670.310303", "-37.659866 0.055975 -1.241288", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3223.385010 405.170013 3672.514404", "-35.728729 0.097775 -1.238700", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3205.993652 404.689209 3659.015625", "139.758606 0.000000 1.242539", 1);
SpawnObject("dz/plants/tree/d_piceaabies_fallenc.p3d", "3205.180664 400.172028 3700.956299", "-2.487781 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3232.689697 405.397522 3678.422119", "-29.209845 0.066173 -1.240787", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3235.899902 405.470276 3680.210938", "-28.289383 0.086102 -1.239566", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3229.533447 405.319092 3676.544434", "147.737747 -0.000000 1.242551", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3239.099365 405.550842 3681.965576", "-28.845322 0.074068 -1.240342", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3242.293945 405.637604 3683.755127", "-29.680704 0.055975 -1.241287", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3245.515869 405.726013 3685.529297", "-27.749588 0.097775 -1.238701", 1);
SpawnObject("StaticObj_Wall_Wood3_4_End", "3226.419434 405.245209 3674.574707", "147.737732 0.000000 1.242538", 1);
SpawnObject("bldr_plnt_d_piceaabies_fallenc", "3204.233643 400.679657 3708.733154", "37.460670 0.000000 -0.000000", 1);
SpawnObject("Land_Wreck_Tractor", "3222.295654 400.607269 3713.417969", "9.000000 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3682.779785 365.857941 4440.875977", "-1.476792 -5.052759 -2.336308", 1);
SpawnObject("bldr_tent_boxwooden", "3699.771973 364.904602 4463.680176", "-9.000002 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_StoneD", "3675.405029 363.590363 4458.804688", "-166.593903 0.207676 -0.013136", 1);
SpawnObject("bldr_tent_boxwooden", "3700.869385 364.950043 4463.320801", "-9.000002 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_WoodVil_4", "3672.619873 365.677551 4459.390137", "85.032990 0.000000 -3.385479", 1);
SpawnObject("StaticObj_Wall_StoneD", "3673.803467 363.422058 4456.523926", "-87.151184 0.207676 -0.013136", 1);
SpawnObject("bldr_tent_boxwooden", "3701.174805 364.961761 4464.377930", "-9.000002 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_boxwooden", "3700.386475 365.923401 4463.958008", "-16.840740 0.000000 0.000000", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3677.288086 364.753510 4451.456543", "-8.374353 -1.906749 2.520257", 1);
SpawnObject("bldr_tent_boxwooden", "3700.968750 364.946289 4462.303711", "1.159258 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_WoodVil_4", "3671.937988 365.014740 4467.240723", "84.640442 0.000000 -4.680265", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3680.955811 364.849548 4450.749023", "-142.715408 1.791762 2.103144", 1);
SpawnObject("StaticObj_Wall_WoodVil_4", "3672.274658 365.391327 4463.343750", "85.032852 -0.369227 -2.258404", 1);
SpawnObject("bldr_tent_boxwooden", "3701.010010 365.919647 4462.780762", "19.159254 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_gunrack", "3690.009033 366.366608 4465.949219", "-96.415146 -2.892089 0.407438", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3682.448242 365.048462 4447.617676", "-85.825676 -3.935489 3.486269", 1);
SpawnObject("StaticObj_Wall_StoneD", "3681.550293 363.989136 4448.724121", "-129.529800 3.798744 1.075975", 1);
SpawnObject("dz/structures_bliss/industrial/sheds/shed_closed_small1.p3d", "3687.981934 365.386322 4465.344727", "3.072027 0.000000 0.047994", 1);
SpawnObject("StaticObj_Misc_Table_Camp_Small", "3689.909180 366.336609 4466.968262", "80.999977 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Chair_Camp1", "3685.933594 366.220642 4466.702148", "134.735016 -1.301105 -1.288798", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3679.225586 364.688599 4451.884277", "-78.843147 -1.104614 2.532393", 0.999999);
SpawnObject("StaticObj_Misc_Chair_Camp1", "3684.824707 366.122192 4467.459473", "-53.999985 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Table_Camp", "3685.269043 366.033844 4466.992188", "-45.000000 0.000000 -0.000000", 1);
SpawnObject("dz/structures/ruins/ruin_wall.p3d", "3686.339600 365.805603 4471.056641", "-0.095442 -0.002516 -0.057012", 1);
SpawnObject("bldr_tent_pallets", "3693.725342 364.733643 4455.854004", "21.676979 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_pallets", "3694.822510 364.648010 4457.407715", "48.676960 0.000000 -0.000000", 1);
SpawnObject("dz/gear/camping/mediumtentplacing.p3d", "3712.862793 366.510284 4445.997559", "-0.540478 -0.033120 -0.067300", 1);
SpawnObject("bldr_tent_pallets", "3694.272217 366.076172 4456.810059", "21.676970 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_ltable", "3680.041748 365.835571 4467.271484", "144.121857 3.966433 1.081757", 1);
SpawnObject("StaticObj_Mil_CamoNet_Tent2", "3685.498291 373.017609 4455.528320", "-171.928223 1.076091 1.070664", 3);
SpawnObject("dz/gear/food/human_meat.p3d", "3694.475098 365.407318 4457.840332", "1.540723 0.000000 -0.000000", 1);
SpawnObject("bldr_prop_HumanSteakMeat", "3694.734375 365.407318 4457.738770", "16.276974 0.000000 -0.000000", 1);
SpawnObject("bldr_prop_HumanSteakMeat", "3694.572266 365.407318 4458.041016", "-19.723003 0.000000 0.000000", 1);
SpawnObject("StaticObj_Forest_DeerSkeleton_Skull", "3699.651123 365.864105 4463.388184", "161.999969 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Forest_DeerSkeleton_Dam", "3696.181152 364.359650 4459.837402", "-107.999992 0.000000 -0.000000", 1);
SpawnObject("bldr_Forest_DeerSkeleton_Pile", "3686.405518 366.011780 4465.466797", "87.725945 2.512815 -3.295564", 1);
SpawnObject("Land_Castle_WallS_10_nolc", "3687.576416 367.002258 4440.687500", "-178.561111 -0.000001 3.618944", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3690.440674 365.199219 4448.764160", "8.974369 0.681442 -4.306713", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3689.031250 365.108368 4451.101074", "107.831230 4.456893 1.758461", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3691.943604 365.217682 4454.098145", "-153.214737 1.632604 -3.230215", 1);
SpawnObject("StaticObj_Bridge_Wood_25", "3687.866455 363.345215 4467.295410", "176.369934 4.603289 2.762315", 1);
SpawnObject("StaticObj_Mil_BlastCover2", "3687.686768 363.394043 4471.282227", "-3.147729 -4.480256 -2.747852", 1);
SpawnObject("StaticObj_Mil_BlastCover2", "3682.545166 367.034821 4436.475098", "176.182755 5.742728 2.556629", 1);
SpawnObject("StaticObj_Furniture_table_DZ", "3692.448730 366.261780 4468.936523", "-4.555137 -0.976112 0.306740", 0.999999);
SpawnObject("StaticObj_Mil_BlastCover4", "3672.926025 364.137268 4452.883789", "-95.328026 -4.779295 5.147173", 0.999998);
SpawnObject("StaticObj_Ruin_DoorWall", "3677.068115 365.921997 4470.471680", "-2.130016 -0.255515 -2.888249", 1);
SpawnObject("StaticObj_Ruin_DoorWall", "3692.783691 366.259674 4449.448242", "106.962784 -1.021782 -0.311645", 1);
SpawnObject("StaticObj_Misc_DragonTeeth_Multiple", "3697.855957 369.921814 4420.208008", "-45.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_DragonTeeth_Multiple", "3682.696045 368.936676 4417.704102", "17.827789 2.525246 -7.801027", 1);
SpawnObject("Land_Castle_WallS_End_nolc", "3696.181396 364.656708 4462.057129", "-89.811386 0.000000 0.000000", 1);
SpawnObject("StaticObj_Decal_Heli_Army", "3748.394531 372.730347 4390.066895", "-72.000015 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Shed_Open_SideRoof", "3682.076904 368.241028 4440.451172", "-93.868233 -2.449615 0.230331", 1);
SpawnObject("ExpansionTraderSeth", "3673.134521 363.378906 4456.822266", "85.243111 0.000000 -0.000000", 1);
SpawnObject("Land_Shed_M4", "3675.930664 365.749451 4443.479980", "-6.522747 -4.586478 0.073865", 1);
SpawnObject("StaticObj_Ruin_Wall", "3693.671387 366.168243 4471.653320", "175.952881 -0.185443 -3.199342", 1);
SpawnObject("StaticObj_Wall_StoneD", "3679.981934 363.952179 4452.515625", "-14.234954 -0.310275 0.589400", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3690.716309 365.281555 4456.788574", "-76.323891 1.242547 1.232940", 1);
SpawnObject("StaticObj_Wall_WoodVil_4", "3673.962646 366.966522 4443.587402", "83.921143 -0.366054 -3.691996", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3679.563965 364.608612 4456.861328", "-86.603745 0.213320 -0.369178", 1);
SpawnObject("StaticObj_Wall_WoodVil_4", "3673.595703 366.624084 4447.529297", "85.032990 0.000000 -3.815420", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3679.253906 364.626007 4460.743164", "-102.618919 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_WoodVil_4", "3673.317139 366.277374 4451.484375", "86.864273 0.000000 -4.461757", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3674.882324 364.495453 4458.947754", "-178.575409 -0.000574 4.360181", 1);
SpawnObject("StaticObj_Wall_WoodVil_4", "3672.991211 365.963135 4455.450684", "83.572342 -0.000000 -2.677993", 1);
SpawnObject("ExpansionTraderSeth", "3676.778076 365.178894 4441.163086", "175.243103 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Tin_4_2", "3686.575439 364.929535 4448.670898", "-12.613463 0.505120 -3.253002", 1);
SpawnObject("CS_Fence_2", "3675.878418 368.634430 4436.497559", "173.899521 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3677.893066 368.730011 4436.655762", "173.899521 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3679.917480 368.816467 4436.837891", "173.899521 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3683.098145 368.957550 4437.038086", "174.989563 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_1", "3681.571289 368.892822 4436.939453", "177.449295 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3685.119629 369.044983 4437.219727", "174.945953 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3687.175049 369.138062 4437.372070", "174.945923 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3689.174316 369.227386 4437.511230", "174.945908 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3690.108154 369.170258 4438.591797", "84.945892 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3689.938721 368.972260 4440.556641", "90.675751 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3674.636230 368.478668 4437.493164", "-96.100464 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3674.514893 368.277344 4439.497070", "-96.100464 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "3695.336426 366.475800 4464.408691", "174.971802 0.216247 2.147440", 1);
SpawnObject("CS_Fence_2", "3693.290527 366.397064 4464.243652", "174.971802 0.216248 2.147440", 1);
SpawnObject("CS_Fence_2", "3691.250977 366.311066 4464.051270", "174.252579 0.222799 2.212512", 1);
SpawnObject("CS_Fence_2", "3689.207031 366.230011 4463.859863", "174.252579 0.222799 2.212512", 1);
SpawnObject("CS_Fence_2", "3686.152588 366.120209 4463.632324", "175.691223 0.216247 2.147404", 1);
SpawnObject("CS_Fence_2", "3684.104736 366.041473 4463.492676", "175.691208 0.216248 2.147440", 1);
SpawnObject("CS_Fence_2", "3682.062988 365.955475 4463.326660", "174.972015 0.222799 2.212512", 1);
SpawnObject("CS_Fence_2", "3680.016846 365.874420 4463.160645", "174.972015 0.222799 2.212512", 1);
SpawnObject("CS_Fence_1", "3687.727295 366.143158 4463.751465", "178.126801 0.118237 2.721874", 1);
SpawnObject("bldr_tent_pallets", "3686.734131 365.217621 4462.729492", "-5.323031 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_pallets", "3688.342041 365.182587 4462.899902", "-5.323031 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_pallets", "3689.991943 364.222443 4462.937500", "-5.323040 0.000000 0.000000", 1);
SpawnObject("bldr_tent_pallets", "3691.687500 364.256470 4463.102539", "-17.313559 0.000000 0.000000", 1);
SpawnObject("bldr_tent_pallets", "3693.608887 364.293610 4463.137207", "16.271700 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_pallets", "3695.422607 364.184753 4463.247559", "2.572042 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_pallets", "3685.246582 364.483429 4462.390625", "-6.064271 0.000000 0.000000", 1);
SpawnObject("bldr_tent_pallets", "3683.633545 364.617340 4462.070801", "-1.467195 0.000000 0.000000", 1);
SpawnObject("bldr_tent_pallets", "3682.027344 364.666992 4461.752930", "-7.594136 0.000000 0.000000", 1);
SpawnObject("bldr_tent_pallets", "3680.151611 364.580597 4461.631836", "-47.863323 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_pallets", "3688.471924 363.688812 4462.952637", "-3.491762 0.000000 0.000000", 1);
SpawnObject("bldr_tent_pallets", "3686.796387 363.595703 4462.595703", "-5.323038 0.000000 0.000000", 1);
SpawnObject("bldr_tent_pallets", "3688.590820 364.280792 4461.591309", "-95.323021 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_pallets", "3687.036621 364.401031 4461.317383", "-95.323021 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_pallets", "3695.304443 364.451630 4461.833496", "2.329916 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_boxwooden", "3695.565430 365.697601 4461.821289", "-16.840750 0.000000 -0.000000", 1);
SpawnObject("bldr_tent_boxwooden", "3695.666748 364.585785 4460.554688", "-7.840751 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_StoneD", "3683.766846 365.456909 4441.208496", "0.625614 -0.057654 -1.811393", 1);
SpawnObject("CS_Fence_2", "3678.710205 365.436218 4441.036133", "13.097154 -5.052759 -2.336308", 1);
SpawnObject("CS_Fence_2", "3680.733154 365.664764 4440.776855", "4.452337 -4.982452 -2.701594", 1);
SpawnObject("Land_Sawmill_Building", "3198.904785 402.762024 3723.645020", "-115.591888 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Shed_Open_Sawmill", "3181.489990 397.678558 3747.511475", "72.000015 0.000000 -0.000000", 1);
SpawnObject("dz/structures/industrial/construction/proxy/koz.p3d", "3186.843994 397.681915 3718.589844", "1.099557 0.000000 -0.000000", 1);
SpawnObject("Land_Sawmill_Illuminanttower", "3258.361328 409.452362 3745.616211", "-36.203899 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_BoxWooden", "3184.068359 398.168640 3722.558105", "-27.000002 0.000000 0.000000", 1);
SpawnObject("StaticObj_Misc_BoxWooden", "3204.807373 398.168579 3732.929688", "0.000000 0.000000 -0.000000", 1);


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
