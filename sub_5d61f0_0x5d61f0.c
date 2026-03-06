// 函数名称: sub_5d61f0
// 虚拟地址: 0x5d61f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d61f0(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t edx = arg4[1]
    int32_t edx = arg4[1]
    int32_t ebx = arg4[3]
    int32_t esi = arg4[2]
    int32_t var_34 = *arg4
    int32_t var_30 = edx
    int32_t edx_2 = arg2[1]
    int32_t var_14 = *arg2
    int32_t ecx_3 = arg2[2]
    int32_t var_10 = edx_2
    int32_t edx_3 = arg2[3]
    int32_t var_24 = 0
    int32_t var_20 = 0
    int32_t var_1c = arg3[2]
    int32_t var_18 = arg3[3]
    
    if (sub_5d4dd0(&var_34, &var_24, &var_34) != 0)
        if (esi != esi)
            int32_t var_c_1 = divs.dp.d(sx.q(arg3[0xb] * ecx_3), esi)
        
        if (ebx != ebx)
            int32_t var_8_1 = divs.dp.d(sx.q(arg3[0xc] * edx_3), ebx)
        
        int32_t var_1c_1 = arg1[2]
        int32_t var_18_1 = arg1[3]
        var_24 = 0
        int32_t var_20_1 = 0
        
        if (sub_5d4dd0(&var_14, &var_24, &var_14) != 0)
            void* edx_9 = arg1[0xd]
            
            if ((*(edx_9 + 0x44) & 0x200) == 0)
                *(edx_9 + 0x44) |= 0x200
                sub_5d8400(arg1[0xd])
            
            if ((*(arg1[0xd] + 0x44) & 0x173) == 0)
                int32_t eax_17 = *arg1[1]
                
                if (eax_17 == *arg3[1])
                    if (eax_17 != 0 && (eax_17 & 0xf0000000) != 0x10000000)
                        return sub_603900(arg1, &var_14, arg3, &var_34)
                    
                    int32_t eax_19 = eax_17 u>> 0x18 & 0xf
                    
                    if (eax_19 != 1 && eax_19 != 2 && eax_19 != 3)
                        return sub_603900(arg1, &var_14, arg3, &var_34)
            
            return sub_5d5ff0(arg1, &var_14, arg3, &var_34)
    
    return 0
}
