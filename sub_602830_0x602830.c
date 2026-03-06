// 函数名称: sub_602830
// 虚拟地址: 0x602830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_602830(HWND arg1, int32_t arg2, int32_t arg3, char* arg4, uint32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = 0
    
    if (*(arg5 + 0x20) == 0 || *(arg5 + 0x28) == 0 || *(arg5 + 0x24) == 0)
        return 0
    
    if (arg2 == 0x10f)
        HIMC param1
        int32_t edx_1
        param1, edx_1 = ImmGetContext(arg1)
        
        if ((*arg4 & 0x800) != 0)
            sub_601b80(param1, edx_1, GCS_RESULTSTR, arg5)
            sub_601c10(arg5)
        
        if ((*arg4 & 8) != 0)
            if (*(arg5 + 0x1504) == 0)
                *(arg5 + 0x78) = 0
            
            sub_601b80(param1, arg4, GCS_COMPSTR, arg5)
            sub_601c60(arg5)
        
        ImmReleaseContext(arg1, param1)
        return 1
    
    if (arg2 == 0x51)
        sub_602790(arg5)
        return 0
    
    if (arg2 == 0x10d)
        return 1
    
    if (arg2 == 0x10e)
        *(arg5 + 0x38) = (arg2 - 0x10d).w - 1
        *(arg5 + 0x78) = 0
        *(arg5 + 0x98) = 0
        sub_5d0fc0(&data_83f3d3, 0, 0)
        return 0
    
    if (arg2 == 0x281)
        *arg4 = 0
    else if (arg2 == 0x282)
        int32_t var_8_2
        
        if (arg3 - 3 u> 0xb)
            var_8_2 = 1
            return 1
        
        switch (arg3 + &jump_table_602ab0[4]:1)
            case &lookup_table_602ac4, &lookup_table_602ac4[2]
                if (*(arg5 + 0x1504) == 0)
                    result = 1
                    sub_6027f0(arg5)
                    HIMC param1_1 = ImmGetContext(arg1)
                    
                    if (param1_1 != 0)
                        sub_601dd0(param1_1, arg5)
                        ImmReleaseContext(arg1, param1_1)
                        return 1
            case &lookup_table_602ac4[1]
                int32_t var_8_1 = 1
                sub_602810(arg5)
                return 1
            case &lookup_table_602ac4[3], &lookup_table_602ac4[5]
                sub_601ab0(arg5)
                return 0
            case &lookup_table_602ac4[4], &lookup_table_602ac4[6], &lookup_table_602ac4[7], 
                    &lookup_table_602ac4[8], &lookup_table_602ac4[9], &lookup_table_602ac4[0xa]
                var_8_2 = 1
                return 1
            case &lookup_table_602ac4[0xb]
                int32_t eax_20
                HWND edx_4
                eax_20, edx_4 = sub_601720(arg5, 0)
                HWND var_20_1 = arg1
                sub_602590(arg5, edx_4)
                
                if (eax_20 u> 0x5000404)
                    if (eax_20 u<= 0x5030804)
                        if (eax_20 != 0x5030804 && eax_20 != 0x5010404 && eax_20 != 0x5020404)
                            return 0
                        
                        goto label_602a73
                    
                    if (eax_20 == 0x6000404)
                        goto label_602a73
                else if (eax_20 == 0x5000404)
                label_602a73:
                    int32_t eax_27 = *arg4
                    
                    if (eax_27 == 0x10 || eax_27 == 0x11 || eax_27 == 0x1a || eax_27 == 0x1b
                            || eax_27 == 0x1c)
                        int32_t var_8_3 = 1
                        return 1
                else
                    if (eax_20 u<= 0x4020804)
                        if (eax_20 != 0x4020804 && eax_20 != 0x4010804 && eax_20 != 0x4020404)
                            return 0
                        
                        goto label_602a2d
                    
                    if (eax_20 == 0x4030404 || eax_20 == 0x4040404)
                    label_602a2d:
                        int32_t eax_24 = *arg4
                        
                        if (eax_24 == 1 || eax_24 == 2)
                            var_8_2 = 1
                            return 1
    
    return result
}
