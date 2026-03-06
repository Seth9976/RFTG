// 函数名称: sub_67dfd0
// 虚拟地址: 0x67dfd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67dfd0(void* arg1 @ edi)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1ac)
    void* esi = *(arg1 + 0x1ac)
    int32_t result = 0
    
    if (*(arg1 + 0xdc) == 0 || *(arg1 + 0xa0) == 0)
        return 0
    
    if (*(esi + 0x70) == 0)
        *(esi + 0x70) = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) * 0x18)
    
    void* edx_5 = *(esi + 0x70)
    int32_t i = 0
    
    if (*(arg1 + 0x24) s> 0)
        int32_t* eax_5 = *(arg1 + 0xd8) + 0x4c
        int32_t var_c_1 = 0
        int32_t* var_10_1 = eax_5
        
        do
            int16_t* eax_6 = *eax_5
            int32_t* eax_8
            
            if (eax_6 != 0 && *eax_6 != 0 && eax_6[1] != 0 && eax_6[8] != 0 && eax_6[0x10] != 0
                    && eax_6[9] != 0 && eax_6[2] != 0)
                eax_8 = *(arg1 + 0xa0) + var_c_1
            
            if (eax_6 == 0 || *eax_6 == 0 || eax_6[1] == 0 || eax_6[8] == 0 || eax_6[0x10] == 0
                    || eax_6[9] == 0 || eax_6[2] == 0 || *eax_8 s< 0)
                return 0
            
            *(edx_5 + 4) = eax_8[1]
            
            if (eax_8[1] != 0)
                result = 1
            
            *(8 + edx_5) = *(8 + eax_8)
            
            if (*(8 + eax_8) != 0)
                result = 1
            
            *(edx_5 + 0xc) = eax_8[3]
            
            if (eax_8[3] != 0)
                result = 1
            
            *(edx_5 + 0x10) = eax_8[4]
            
            if (eax_8[4] != 0)
                result = 1
            
            *(edx_5 + 0x14) = eax_8[5]
            
            if (eax_8[5] != 0)
                result = 1
            
            var_c_1 += 0x100
            i += 1
            eax_5 = &var_10_1[0x15]
            edx_5 += 0x18
            var_10_1 = eax_5
        while (i s< *(arg1 + 0x24))
    
    return result
}
