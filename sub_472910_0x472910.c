// 函数名称: sub_472910
// 虚拟地址: 0x472910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_472910(void* arg1, char arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* eax = data_26a44ac
    int32_t* eax = data_26a44ac
    int32_t* edi = arg3
    int32_t var_20
    char const* const var_1c
    int32_t* var_c
    
    if (eax == 0)
    label_47295f:
        var_20 = 0
        sub_5abfc0(&data_2691ca8, 0, 0x12800)
        bool cond:0_1 = *(arg1 + 0x88) == 0
        data_26a44ac = 0
        
        if (cond:0_1)
            var_1c = "# cards.txt\n# \n# N:card name\n# T:type:cost:vp\n#   Type is 1: world, 2: "
            "development \n# E:base:exp1:exp2:exp3\n#   Number of this card appearing at"
            
            if (sub_4b26b0("# cards.txt\n# \n# N:card name\n# T:type:cost:vp\n#   Type is 1: world, 2: "
            "development \n# E:base:exp1:exp2:exp3\n#   Number of this card appearing at") s< 0)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x1485, "RFTGGameStart")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else
            var_1c = "# cards.txt\n# \n# N:card name\n# T:type:cost:vp\n#   Type is 1: world, 2: "
            "development \n# E:base:exp1:exp2:exp3\n#   Number of this card appearing at each expansion "
            "level\n# G:goodtype\n#   Only valid for worlds, and optional there\n# F:flags\n#   START "
            "world, MILITARY, WINDFALL, REBEL, ALIEN, IMPERIUM, etc\n# P:phase:code:value:times\n#   "
            "Times is only relevant for certain consume powers\n# V"
            
            if (sub_4b26b0("# cards.txt\n# \n# N:card name\n# T:type:cost:vp\n#   Type is 1: world, 2: "
            "development \n# E:base:exp1:exp2:exp3\n#   Number of this card appearing at each expansion "
            "level\n# G:goodtype\n#   Only valid for worlds, and optional there\n# F:flags\n#   START "
            "world, MILITARY, WINDFALL, REBEL, ALIEN, IMPERIUM, etc\n# P:phase:code:value:times\n#   "
            "Times is only relevant for certain consume powers\n# V") s< 0)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x147e, "RFTGGameStart")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        int32_t eax_1
        eax_1.b = *(arg1 + 0x88)
        data_26a44a8 = eax_1.b
        sub_4b2c00()
    else
        arg3.b = data_26a44a8
        
        if (arg3.b != *(arg1 + 0x88))
            if (eax s> 0)
                void* ebx_1 = &data_2691ca8
                var_c = eax
                int32_t* i
                
                do
                    __free_base(*ebx_1)
                    ebx_1 += 0x128
                    i = var_c
                    var_c -= 1
                while (i != 1)
            
            goto label_47295f
    
    edi[0x116].b = arg4.b
    *(edi + 0x45a) = *(arg1 + 0x4c)
    *(edi + 0x45d) = *(arg1 + 0x87)
    *(edi + 0x45e) = *(arg1 + 0x88)
    int32_t eax_4
    
    if (*(arg1 + 0x84) != 0 || arg4 != 2)
        eax_4.b = 0
    else
        eax_4.b = 1
    
    *(edi + 0x459) = eax_4.b
    edi[3] = *(arg1 + 0x80)
    eax_4.b = *(arg1 + 0x85)
    *(edi + 0x45b) = eax_4.b
    edi[0x117].b = *(arg1 + 0x86)
    int32_t esi_1 = *(arg1 + 0x44)
    
    if (esi_1 == 0)
        *edi = 0
    else if (esi_1 == 1)
        int32_t eax_8 = *(data_27e7a54 + 0x204)
        
        if (eax_8 == 0)
            var_1c = "Tutorial"
        else if (eax_8 == 1)
            var_1c = "Tutorial2"
        else
            if (eax_8 != 2)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x14a8, "RFTGGameStart")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            var_1c = "Tutorial3"
        
        int32_t* eax_13 = sub_472870(var_1c)
        *edi = eax_13
        
        if (eax_13 != 0)
            if (*eax_13 != 0xffffffff)
                *(edi + 0x45a) = *eax_13
            
            edi[0x116].b = eax_13[1].b
            *(edi + 0x459) = eax_13[2].b
            
            if (eax_13[3] != 0xffffffff)
                *(edi + 0x45b) = eax_13[3].b
            
            eax_13.b = eax_13[4].b
            edi[0x117].b = eax_13.b
    else
        if (esi_1 != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x14b1, "RFTGGameStart")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_1c = "Rebel vs Imperium"
        int32_t* eax_6 = sub_472870("Rebel vs Imperium")
        *edi = eax_6
        
        if (eax_6 != 0)
            if (*eax_6 != 0xffffffff)
                *(edi + 0x45a) = *eax_6
            
            edi[0x116].b = eax_6[1].b
            *(edi + 0x459) = eax_6[2].b
            
            if (eax_6[3] != 0xffffffff)
                *(edi + 0x45b) = eax_6[3].b
            
            edi[0x117].b = eax_6[4].b
    
    int32_t i_1 = 0
    
    if (edi[0x116].b s> 0)
        void* ebx_2 = &edi[0xa]
        
        do
            int32_t* eax_14 = *ebx_2
            
            if (*eax_14 != 0)
                var_20.q = fconvert.d(float.t(0))
                (*eax_14)(edi, i_1, var_20, var_1c)
            
            i_1 += 1
            ebx_2 += 0xb4
        while (i_1 s< sx.d(edi[0x116].b))
    
    sub_4b3660(edi)
    int32_t esi_5 = sx.d(edi[0x781].b)
    int32_t ebx_3 = sx.d(edi[0x118].w)
    int32_t edx_5 = sub_5abfc0(&data_c020d0, 0, 0x54)
    data_c020d0 = ebx_3
    data_c02118 = esi_5
    int32_t esi_6 = 0
    
    if (arg4 s> 0)
        do
            edx_5 = sub_4727d0(esi_6, edx_5, edi)
            esi_6 += 1
        while (esi_6 s< arg4)
    
    void* ebx_5 = data_27e7a40
    *(*(ebx_5 + 0x548) + 0x2c068) = edi[0x31] s> 0
    int32_t i_3 = 0x13
    var_c = &edi[0x795]
    int32_t i_2
    
    do
        if (*var_c != 0)
            void* eax_18 = *(ebx_5 + 0x548)
            int32_t ecx_8 = *(eax_18 + 0x2c024)
            
            if (ecx_8 s>= 0x800)
                sub_4c5870("gui->numUIActions < MAX_UIACTIONS", &data_83f3d3, "..\code\RFTGClient.cpp", 
                    0x2c21, "UIActionQueueAlloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            *(eax_18 + 0x2c024) = ecx_8 + 1
            sub_5abfc0((ecx_8 << 6) + eax_18 + 0xc024, 0, 0x40)
            *((ecx_8 << 6) + eax_18 + 0xc04c) = 0xffffffff
            *((ecx_8 << 6) + eax_18 + 0xc050) = 0xffffffff
            *((ecx_8 << 6) + eax_18 + 0xc024) = 0xc
            *((ecx_8 << 6) + eax_18 + 0xc060) = 0
            void* eax_19 = *(ebx_5 + 0x548)
            
            if (eax_19 == 0)
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_23
            
            switch (sx.d(*(*(eax_19 + 0x45844) + 0x1ec0)) + 0xa)
                case 0
                    eax_23 = 0xfffffff6
                label_472d3a:
                    *((ecx_8 << 6) + eax_18 + 0xc054) = eax_23
                    *((ecx_8 << 6) + eax_18 + 0xc028) = 0xffffffff
                    *((ecx_8 << 6) + eax_18 + 0xc02c) = 1
                    bool cond:2_1 = *(*(ebx_5 + 0x548) + 0x2c068) != 0
                    *((ecx_8 << 6) + eax_18 + 0xc040) = i_3
                    int32_t eax_24
                    eax_24.b = cond:2_1
                    *((ecx_8 << 6) + eax_18 + 0xc05c) = zx.d(eax_24.b)
                    *((ecx_8 << 6) + eax_18 + 0xc058) = 0
                case 9, 0xa, 0x14
                    eax_23 = 0
                    goto label_472d3a
                case 0xb, 0xc
                    eax_23 = 1
                    goto label_472d3a
                case 0xd
                    eax_23 = 2
                    goto label_472d3a
                case 0xe
                    eax_23 = 8
                    goto label_472d3a
                case 0xf
                    eax_23 = 3
                    goto label_472d3a
                case 0x10
                    eax_23 = 9
                    goto label_472d3a
                case 0x11, 0x12
                    eax_23 = 4
                    goto label_472d3a
                case 0x13
                    eax_23 = 5
                    goto label_472d3a
                default
                    sub_49b2a0()
                    noreturn
        
        var_c -= 2
        i_2 = i_3 - 1
        i_3 = i_2
    while (i_2 s>= 0)
    var_c = sub_406ba0(edi)
    sub_406e20(&var_c)
    int32_t* result = var_c
    *(*(data_27e7a40 + 0x548) + 0x2c068) = 0
    return result
}
