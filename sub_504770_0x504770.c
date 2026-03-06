// 函数名称: sub_504770
// 虚拟地址: 0x504770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_504770(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* esi = data_30785c8
    int32_t* esi = data_30785c8
    esi[3] += 1
    
    if (*esi == 0)
        sub_5043e0(esi)
    
    int32_t* esi_1 = *esi
    *esi = *esi_1
    __builtin_memset(esi_1, 0, 0x14)
    
    if (esi_1 != 0)
        *esi_1 = &data_83f3d3
        esi_1[1] = &data_83f3d3
    
    int32_t* var_c = esi_1
    int32_t edx = sub_518190(&arg1[1], &var_c)
    
    if (*(arg2 + 4) != 3)
    label_5047e3:
        
        if (*(arg2 + 4) == 1)
            sub_4c4590(&data_83f3d3)
            
            if (*(arg2 + 0x10) s> 0)
                sub_4c4690(esi_1, *(arg2 + 0xc))
            
            char eax_4
            eax_4, edx = sub_5551f0(arg2)
            
            if (eax_4 != 0)
                int32_t eax_8 = *(arg2 + 4)
                char* eax_10
                
                if (eax_8 == 1)
                    esi_1[2] = sub_500720()
                    sub_4c4510(esi_1)
                    int32_t edx_2
                    eax_10, edx_2 = sub_5049f0(esi_1[2], arg2)
                    
                    if (eax_10.b == 0)
                        if (*esi_1 != 0)
                            int32_t var_20_6 = *esi_1
                            sub_504710(eax_10, edx_2, arg2, "failed to read block '%s'")
                            int32_t eax_12
                            eax_12.b = 0
                            return eax_12
                        
                        char* const var_20_5 = &data_83f3d3
                        sub_504710(eax_10, edx_2, arg2, "failed to read block '%s'")
                        int32_t eax_11
                        eax_11.b = 0
                        return eax_11
                else if (eax_8 != 3)
                    if (eax_8 != 4)
                        char* const esi_8
                        
                        if (*esi_1 != 0)
                            esi_8 = *esi_1
                        else
                            esi_8 = &data_83f3d3
                        
                        char* const var_20_15 = esi_8
                        sub_504710(eax_8, edx, arg2, "bad block '%s'")
                        int32_t eax_25
                        eax_25.b = 0
                        return eax_25
                    
                    char* esi_6
                    
                    if (*esi_1 != 0)
                        esi_6 = *esi_1
                    else
                        esi_6 = &data_83f3d3
                    
                    int32_t edx_5
                    eax_10, edx_5 = sub_5552d0(arg2, esi_6)
                    
                    if (eax_10.b == 0)
                        if (*esi_1 == 0)
                            char* const var_20_13 = &data_83f3d3
                            sub_504710(&data_83f3d3, edx_5, arg2, "failed to read close tag '%s'")
                            int32_t eax_22
                            eax_22.b = 0
                            return eax_22
                        
                        int32_t eax_23 = *esi_1
                        int32_t var_20_14 = eax_23
                        sub_504710(eax_23, edx_5, arg2, "failed to read close tag '%s'")
                        int32_t eax_24
                        eax_24.b = 0
                        return eax_24
                else
                    int32_t* eax_14
                    int32_t edx_3
                    eax_14, edx_3 = sub_555320(&esi_1[1], arg2)
                    
                    if (eax_14.b == 0)
                        if (*esi_1 != 0)
                            int32_t var_20_8 = *esi_1
                            sub_504710(eax_14, edx_3, arg2, "failed to read value '%s'")
                            int32_t eax_16
                            eax_16.b = 0
                            return eax_16
                        
                        char* const var_20_7 = &data_83f3d3
                        sub_504710(eax_14, edx_3, arg2, "failed to read value '%s'")
                        int32_t eax_15
                        eax_15.b = 0
                        return eax_15
                    
                    char* esi_4
                    
                    if (*esi_1 != 0)
                        esi_4 = *esi_1
                    else
                        esi_4 = &data_83f3d3
                    
                    int32_t edx_4
                    eax_10, edx_4 = sub_5552d0(arg2, esi_4)
                    
                    if (eax_10.b == 0)
                        if (*esi_1 == 0)
                            char* const var_20_10 = &data_83f3d3
                            sub_504710(&data_83f3d3, edx_4, arg2, "failed to read close tag '%s'")
                            int32_t eax_18
                            eax_18.b = 0
                            return eax_18
                        
                        int32_t eax_19 = *esi_1
                        int32_t var_20_11 = eax_19
                        sub_504710(eax_19, edx_4, arg2, "failed to read close tag '%s'")
                        int32_t eax_20
                        eax_20.b = 0
                        return eax_20
                
                eax_10.b = 1
                return eax_10
    else
        char eax_2
        eax_2, edx = sub_5551f0(arg2)
        
        if (eax_2 != 0)
            goto label_5047e3
    
    char* const eax_6 = *arg1
    
    if (eax_6 == 0)
        eax_6 = &data_83f3d3
    
    char* const var_20_2 = eax_6
    sub_504710(eax_6, edx, arg2, "failed to read open block '%s'")
    int32_t eax_7
    eax_7.b = 0
    return eax_7
}
