// 函数名称: sub_5c7020
// 虚拟地址: 0x5c7020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c7020(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 s>= 0 && arg1 s< j_sub_5cf300())
    if (arg1 s>= 0 && arg1 s< j_sub_5cf300())
        for (int32_t* i = data_bed354; i != 0; i = i[0xd])
            if (sub_5cf7c0(arg1) == *i)
                i[0xb] += 1
                return i
        
        int32_t var_10_2 = 0x38
        int32_t* eax_3 = sub_5d0ac0()
        
        if (eax_3 == 0)
            sub_5cd050(eax_3)
            return 0
        
        int32_t var_10_4 = 0x38
        int32_t var_14 = 0
        int32_t* var_18 = eax_3
        sub_5cd100()
        
        if (sub_5d03c0(eax_3, arg1) s< 0)
            int32_t* var_10_5 = eax_3
            sub_5d0af0()
            return 0
        
        char* eax_8 = sub_5cf790(arg1)
        
        if (eax_8 == 0)
            eax_3[1] = 0
        else
            eax_3[1] = sub_5cd390(eax_8)
        
        int32_t eax_10 = eax_3[2]
        
        if (eax_10 s> 0)
            int32_t var_10_8 = eax_10 * 2
            eax_3[3] = sub_5d0ac0()
        
        int32_t eax_13 = eax_3[4]
        
        if (eax_13 s> 0)
            int32_t var_10_9 = eax_13
            eax_3[5] = sub_5d0ac0()
        
        int32_t eax_15 = eax_3[6]
        
        if (eax_15 s> 0)
            int32_t var_10_10 = eax_15 << 3
            eax_3[7] = sub_5d0ac0()
        
        int32_t eax_17 = eax_3[8]
        
        if (eax_17 s> 0)
            int32_t var_10_11 = eax_17
            eax_3[9] = sub_5d0ac0()
        
        int32_t ecx_2 = eax_3[2]
        
        if ((ecx_2 s> 0 && eax_3[3] == 0) || (eax_3[4] s> 0 && eax_3[5] == 0)
            || (eax_3[6] s> 0 && eax_3[7] == 0))
        label_5c7154:
            sub_5cd050(0)
            sub_5c6b50(eax_3)
            return 0
        
        if (eax_3[8] s> 0 && eax_3[9] == 0)
            goto label_5c7154
        
        int32_t eax_20 = eax_3[3]
        
        if (eax_20 != 0)
            int32_t var_10_12 = ecx_2 * 2
            int32_t var_14_2 = 0
            int32_t var_18_1 = eax_20
            sub_5cd100()
        
        int32_t eax_21 = eax_3[5]
        
        if (eax_21 != 0)
            int32_t var_10_13 = eax_3[4]
            int32_t var_14_3 = 0
            int32_t var_18_2 = eax_21
            sub_5cd100()
        
        int32_t eax_22 = eax_3[7]
        
        if (eax_22 != 0)
            int32_t var_10_14 = eax_3[6] * 8
            int32_t var_14_4 = 0
            int32_t var_18_3 = eax_22
            sub_5cd100()
        
        int32_t eax_23 = eax_3[9]
        
        if (eax_23 != 0)
            int32_t var_10_15 = eax_3[8]
            int32_t var_14_5 = 0
            int32_t var_18_4 = eax_23
            sub_5cd100()
        
        int32_t edx_6 = data_bed354
        eax_3[0xb] += 1
        eax_3[0xd] = edx_6
        data_bed354 = eax_3
        sub_5d0a30(eax_3)
        return eax_3
    
    int32_t __saved_esi = j_sub_5cf300()
    sub_5cce60("There are %d joysticks available")
    return 0
}
