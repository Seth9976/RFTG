// 函数名称: sub_428e00
// 虚拟地址: 0x428e00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_428e00(int32_t arg1 @ esi, int32_t* arg2 @ edi, void* arg3)
{
    // 第一条实际指令: int32_t var_c = arg1 + 8
    int32_t var_c = arg1 + 8
    int32_t var_10 = arg1 + 0xc
    int32_t var_8 = arg1 + 4
    sub_4c4510(sub_4c4510(sub_4c4510(sub_4c4590(&data_83f3d3))))
    int32_t* eax_5 = arg3 - 0x2d
    *arg2 = 7
    
    switch (eax_5)
        case nullptr
            sub_4c4590("{vp}{2vp/}{genesproductionworld}{geneswindfallworld}")
            sub_4c4590("{vp}{1vp/}{militaryworld}")
            int32_t* eax_6 = sub_4c4590("{vp}{3vp/}{developmentspecific}")
            *arg2 = 8
            return eax_6
        case 1
            sub_4c4590("{vp}{2vp/}{rareproductionworld}")
            sub_4c4590("{vp}{1vp/}{rarewindfallworld}")
            sub_4c4590("{vp}{2vp/}{developmentspecific}")
            int32_t* eax_7 = sub_4c4590("{vp}{developmentspecific}")
            *arg2 = 0xc
            return eax_7
        case 2
            sub_4c4590("{vp}{2vp/}{noveltyproductionworld}")
            sub_4c4590("{vp}{1vp/}{noveltywindfallworld}")
            sub_4c4590("{vp}{2vp/}{developmentspecific}")
            int32_t* eax_8 = sub_4c4590("{vp}{greynonmilitaryworldspecific}")
            *arg2 = 0xc
            return eax_8
        case 3
            sub_4c4590("{vp}{3vp/}{alienproductionworld}")
            sub_4c4590("{vp}{2vp/}{alienwindfallworld}")
            int32_t* eax_9 = sub_4c4590("{vp}{2vp/}{alien}ALIEN{vp}\r")
            *arg2 = 9
            return eax_9
        case 4
            sub_4c4590("{vp}{1vp/}{developmentexplore}")
            sub_4c4590("{vp}{2vp/}{worldexplore}")
            return sub_4c4590("{vp}{1vp/}{otherworld}\r")
        case 5
            sub_4c4590("{vp}{2vp/}{6costdevelopment}")
            int32_t* eax_11 = sub_4c4590("{vp}{1vp/}{development}\r")
            *arg2 = 2
            return eax_11
        case 0x1d
            sub_4c4590("{vp}{vpquestion/}")
            int32_t* eax_12 = sub_4c4590("{vp}{militaryquestion}")
            *arg2 = 0
            return eax_12
        case 0x1f
            sub_4c4590("{vp}{2vp/}{noveltyproductionworld}{rareproductionworld}")
            int32_t* eax_13 = sub_4c4590("{vp}{genesproductionworld}{alienproductionworld}")
            
            if (data_26a44a8 == 0)
                *arg2 = 3
                return eax_13
            
            int32_t* eax_14 = sub_4c4590("{vp}{1vp/}{anygood}")
            *arg2 = 0xb
            return eax_14
        case 0x26
            sub_4c4590("{vp}{2vp/}{developmentconsume}")
            int32_t* eax_15 = sub_4c4590("{vp}{1vp/}{worldconsume}")
            *arg2 = 2
            return eax_15
        case 0x2d
            sub_4c4590("{vp}{1vp/}{3vpchips}")
            sub_4c4590("{vp}{3vp/} {} {developmentspecific}")
            sub_4c4590("{vp}{greynonmilitaryworldspecific}")
            int32_t* eax_16 = sub_4c4590("{vp}{noveltynonmilitaryworldspecific}")
            *arg2 = 0xe
            return eax_16
        case 0x35
            sub_4c4590("{vp}{2vp/}{rebelmilitaryworld}")
            int32_t* eax_17 = sub_4c4590("{vp}{1vp/}{militaryworld}")
            *arg2 = 2
            return eax_17
        case 0x36
            sub_4c4590("{vp}{2vp/}{developmenttrade}")
            int32_t* eax_18 = sub_4c4590("{vp}{1vp/}{worldtrade}")
            *arg2 = 2
            return eax_18
        case 0x39
            int32_t* eax_28 = sub_4c4590("{vp}{handsize3}")
            *arg2 = 0x12
            return eax_28
        case 0x3c
            sub_4c4590("{vp}{2vp/}{windfallworld}")
            int32_t* eax_19 = sub_4c4590("{vp}{2vp/}{terraforming}TERRA")
            *arg2 = 4
            return eax_19
        case 0x3d
            sub_4c4590("{vp}{2vp/}{genesproductionworld}{geneswindfallworld}")
            int32_t* eax_20 = sub_4c4590("{vp}{3vp/} {} {developmentspecific}")
            *arg2 = 5
            return eax_20
        case 0x43
            sub_4c4590("{vp}{2vp/}{imperium}IMPERIUM{vp}")
            int32_t* eax_21 = sub_4c4590("{vp}{1vp/}{militaryworld}")
            *arg2 = 5
            return eax_21
        case 0x53
            sub_4c4590("{vp}{2vp/}{imperium}IMPERIUM{vp}")
            int32_t* eax_22 = sub_4c4590("{vp}{2vp/}{rebelmilitaryworld}")
            *arg2 = 5
            return eax_22
        case 0x54
            sub_4c4590("{vp}{2vp/}{rebel}REBEL{vp}")
            int32_t* eax_23 = sub_4c4590("{vp}{1vp/}{militaryworld}")
            *arg2 = 4
            return eax_23
        case 0x55
            sub_4c4590("{vp}{3vp/}{chromosome}")
            int32_t* eax_24 = sub_4c4590("{vp}{2vp/}{uplift}UPLIFT")
            *arg2 = 4
            return eax_24
        case 0x56
            sub_4c4590("{vp}{vpquestion2}1/3/6/10")
            sub_4c4590("{vp}{worldkinds}")
            int32_t* eax_25 = sub_4c4590("{vp}{3vp/} {developmentspecific}")
            *arg2 = 0xa
            return eax_25
        case 0x57
            sub_4c4590("{vp}{2vp/}{developmentspecific}")
            sub_4c4590("{vp}{developmentspecific}")
            sub_4c4590("{vp}{greynonmilitaryworldspecific}")
            int32_t* eax_26 = sub_4c4590("{vp}{1vp/}{development}")
            *arg2 = 0xf
            return eax_26
        case 0x58
            sub_4c4590("{vp}{2vp/}{rareproductionworld}{rarewindfallworld}")
            sub_4c4590("{vp}{1vp/}{otherworld}")
            int32_t* eax_27 = sub_4c4590("{vp}{1vp/}{terraforming}TERRA")
            *arg2 = 8
            return eax_27
        case 0x59, 0x97
            eax_5 = sub_4c4590("{vp}{handsize12}")
            *arg2 = 0x11
        case 0x6f
            int32_t* eax_29 = sub_4c4590("{vp}{tableau14}")
            *arg2 = 0x13
            return eax_29
        case 0x70
            int32_t* eax_35 = sub_4c4590("{vp}{card_under_world}")
            *arg2 = 0x15
            return eax_35
        case 0x76
            sub_4c4590("{vp}{2vp/}{terraforming}TERRA")
            sub_4c4590("{vp}{1vp/}{6costdevelopment}")
            sub_4c4590("{vp}{1vp/}{noveltyproductionworld}{rareproductionworld}")
            int32_t* eax_30 = sub_4c4590("{vp}{genesproductionworld}{alienproductionworld}")
            *arg2 = 0x10
            return eax_30
        case 0x77
            sub_4c4590("{vp}{vpquestion/}{militaryquestionneg}")
            sub_4c4590("{vp}{1vp/}{militaryworld}")
            int32_t* eax_31 = sub_4c4590("{vp}{2vp/}{developmentspecific}")
            *arg2 = 7
            return eax_31
        case 0x7e
            int32_t* eax_34 = sub_4c4590("{vp}{1vp/}{prestige_scaled}")
            *arg2 = 1
            return eax_34
        case 0x83
            int32_t* eax_36 = sub_4c4590("{vp} {}{handdiscard}")
            *arg2 = 0x11
            return eax_36
        case 0x8c
            sub_4c4590("{vp}{2vp/}{noveltyproductionworld}{noveltywindfallworld}")
            sub_4c4590("{vp}{2vp/}{greynonmilitaryworldspecific}")
            int32_t* eax_32 = sub_4c4590("{vp}{1vp/}{otherworld}")
            *arg2 = 8
            return eax_32
        case 0x8e
            sub_4c4590("{vp}{1vp/}{prestige_scaled}")
            sub_4c4590("{vp}{2vp/}{developmentspecific}")
            sub_4c4590("{vp}{developmentspecific}")
            int32_t* eax_33 = sub_4c4590("{vp}{greynonmilitaryworldspecific}")
            *arg2 = 0xd
            return eax_33
        case 0x90
            int32_t* eax_37 = sub_4c4590("{vp}{role_circle}")
            *arg2 = 0x14
            return eax_37
        case 0x93
            sub_4c4590("{vp}{2vp/}{alien}ALIEN{vp}\r")
            int32_t* eax_38 = sub_4c4590("
                {vp}{1vp/}{noveltyproductionworld}{rareproductionworld}{genesproductionworld}")
            *arg2 = 6
            return eax_38
    
    return eax_5
}
