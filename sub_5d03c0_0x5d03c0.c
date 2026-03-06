// 函数名称: sub_5d03c0
// 虚拟地址: 0x5d03c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d03c0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* i = arg2
    int32_t* i = arg2
    int32_t* esi = data_bedd20
    
    for (; i s> 0; i -= 1)
        esi = esi[0x11c]
    
    int32_t var_28 = 0xc7c
    *arg1 = esi[0x119]
    arg1[0xc].b = 0
    int32_t eax_1 = sub_5d0ac0()
    arg1[0xa] = eax_1
    
    if (eax_1 == 0)
        sub_5cd050(0)
        return 0xffffffff
    
    int32_t var_28_1 = 0xc7c
    int32_t var_2c = 0
    int32_t var_30 = eax_1
    sub_5cd100()
    int32_t var_18
    
    if (esi[0x11a] == 0)
        *(arg1[0xa] + 0x30) = 1
        *(arg1[0xa] + 0xc4c) = 0
        *(arg1[0xa] + 4) = 0x2c
        void* eax_7 = arg1[0xa]
        *(eax_7 + 0x34) = *esi
        *(eax_7 + 0x38) = esi[1]
        *(eax_7 + 0x3c) = esi[2]
        int32_t var_28_4 = 0x14
        *(eax_7 + 0x40) = esi[3]
        int32_t var_2c_1 = 0
        int32_t* var_30_2 = &var_18
        sub_5cd100()
        int32_t* eax_8 = data_bedd28
        var_18 = 0x14
        int32_t var_14_1 = 0x10
        
        if ((*(*eax_8 + 0xc))(eax_8, &esi[5], &arg2, 0) s< 0)
            sub_5cee80()
            return 0xffffffff
        
        int32_t* eax_11 = arg2
        int32_t eax_13 = (**eax_11)(eax_11, 0x6b4418, arg1[0xa])
        int32_t* eax_14 = arg2
        (*(*eax_14 + 8))(eax_14)
        
        if (eax_13 s< 0)
            sub_5cee80()
            return 0xffffffff
        
        int32_t* eax_17 = *arg1[0xa]
        
        if ((*(*eax_17 + 0x34))(eax_17, data_bed8f0, 0xa) s< 0)
            sub_5cee80()
            return 0xffffffff
        
        int32_t* eax_20 = *arg1[0xa]
        
        if ((*(*eax_20 + 0x2c))(eax_20, 0x6b44b8) s< 0)
            sub_5cee80()
            return 0xffffffff
        
        int32_t* eax_23 = arg1[0xa]
        int32_t* ecx_15 = *eax_23
        
        if ((*(*ecx_15 + 0xc))(ecx_15, &eax_23[1]) s< 0)
            sub_5cee80()
            return 0xffffffff
        
        int32_t* eax_27 = arg1[0xa]
        
        if ((eax_27[2] & 0x100) != 0)
            int32_t* eax_28 = *eax_27
            
            if ((*(*eax_28 + 0x1c))(eax_28) s< 0)
                sub_5cee80()
                return 0xffffffff
            
            int32_t* eax_31 = *arg1[0xa]
            (*(*eax_31 + 0x58))(eax_31, 1)
            int32_t* eax_33 = *arg1[0xa]
            
            if ((*(*eax_33 + 0x20))(eax_33) s< 0)
                sub_5cee80()
                return 0xffffffff
            
            int32_t var_10_1 = 0
            int32_t var_c_1 = 0
            int32_t var_8_1 = 1
            int32_t* eax_36 = *arg1[0xa]
            (*(*eax_36 + 0x18))(eax_36, 9, &var_18)
        
        int32_t* eax_38 = *arg1[0xa]
        (*(*eax_38 + 0x10))(eax_38, sub_5cf890, arg1, 0x1f)
        sub_5cf810(arg1)
        int32_t var_10_2 = 0
        int32_t var_c_2 = 0
        int32_t var_8_2 = 0x20
        int32_t* eax_40 = *arg1[0xa]
        int32_t eax_41 = (*(*eax_40 + 0x18))(eax_40, 1, &var_18)
        
        if (eax_41 == 2)
            *(arg1[0xa] + 0x30) = 0
            return 0
        
        if (eax_41 s< 0)
            sub_5cee80()
            return 0xffffffff
    else
        char eax_2 = esi[0x11b].b
        arg2:3.b = eax_2
        int32_t ebx_2 = sbb.d(0, 0, data_bedd50 u< 0x10004) + 1
        *(arg1[0xa] + 0xc4e) = 1
        int32_t eax_4
        void* edx
        eax_4, edx = data_bedd4c(zx.d(eax_2), 1, &var_18)
        
        if (eax_4 != 0)
            int32_t var_28_3 = arg1[0xa]
            sub_5d0af0()
            arg1[0xa] = 0
            sub_5cce60("Failed to obtain XInput device capabilities. Device disconnected?")
            return 0xffffffff
        
        if (ebx_2 == 0 || (var_18:2.b & 1) != 0)
            *(arg1[0xa] + 0xc4f) = 1
        
        edx.b = arg2:3.b
        *(arg1[0xa] + 0xc50) = edx.b
        arg1[2] = 6
        arg1[8] = 0xf
        arg1[6] = 0
        arg1[4] = 0
    return 0
}
