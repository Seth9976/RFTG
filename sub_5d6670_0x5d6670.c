// 函数名称: sub_5d6670
// 虚拟地址: 0x5d6670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5d6670(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t eax_2 = sub_5d7630(arg3, arg4, arg5, arg6, arg7)
    int32_t eax_2 = sub_5d7630(arg3, arg4, arg5, arg6, arg7)
    
    if (eax_2 == 0)
        sub_5cce60("Unknown pixel format")
        return 0
    
    int32_t var_10_1 = 0x3c
    int32_t var_14_1 = 1
    char* result = sub_5d0ad0()
    
    if (result == 0)
        sub_5cd050(result)
        return 0
    
    int32_t* eax_5 = sub_5d8610(eax_2)
    *(result + 4) = eax_5
    char* result_1 = result
    
    if (eax_5 != 0)
        *(result + 8) = arg1
        *(result + 0xc) = arg2
        *(result + 0x10) = sub_5d7ce0(result_1)
        sub_5d5f90(result, nullptr)
        int32_t* ecx_2 = *(result + 4)
        int32_t eax_8 = *ecx_2
        
        if (eax_8 == 0 || (eax_8 & 0xf0000000) == 0x10000000)
            int32_t eax_10 = eax_8 u>> 0x18 & 0xf
            
            if (eax_10 != 1 && eax_10 != 2 && eax_10 != 3)
                goto label_5d678a
            
            ecx_2.b = ecx_2[2].b
            int32_t* eax_12 = sub_5d7b90(1 << ecx_2.b)
            
            if (eax_12 != 0)
                if (*eax_12 == 2)
                    *eax_12[1] = 0xff
                    *(eax_12[1] + 1) = 0xff
                    *(eax_12[1] + 2) = 0xff
                    *(eax_12[1] + 4) = 0
                    *(eax_12[1] + 5) = 0
                    *(eax_12[1] + 6) = 0
                
                sub_5d5c80(result, eax_12)
                sub_5d7c20(eax_12)
                goto label_5d678a
        else
        label_5d678a:
            
            if (*(result + 8) != 0)
                int32_t eax_14 = *(result + 0xc)
                
                if (eax_14 != 0)
                    int32_t var_10_6 = *(result + 0x10) * eax_14
                    int32_t eax_15 = sub_5d0ac0()
                    *(result + 0x14) = eax_15
                    
                    if (eax_15 == 0)
                        sub_5d65d0(result)
                        sub_5cd050(0)
                        return 0
                    
                    int32_t var_10_8 = *(result + 0x10) * *(result + 0xc)
                    int32_t var_14_3 = 0
                    int32_t var_18_3 = eax_15
                    sub_5cd100()
            
            void* eax_17 = sub_5d83d0()
            *(result + 0x34) = eax_17
            
            if (eax_17 != 0)
                if (arg7 != 0)
                    sub_5d5f00(result, 1)
                
                *(result + 0x38) = 1
                return result
        
        result_1 = result
    
    sub_5d65d0(result_1)
    return 0
}
