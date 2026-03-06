// 函数名称: sub_663d80
// 虚拟地址: 0x663d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_663d80(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t edx = 0
    int32_t edx = 0
    char* result = arg2 - 1
    int32_t edi = 0
    int32_t var_c = 0
    int32_t var_8 = 1
    *result = 0
    
    if (result u> arg1)
        int32_t eax_1 = arg3
        uint32_t esi_1 = arg4
        
        while (esi_1 != 0 || edx s< var_8)
            if (eax_1 - 1 u> 4)
                esi_1 = 0
            else
                switch (eax_1)
                    case 1
                        goto label_663e1f
                    case 2
                        var_8 = 2
                    label_663e1f:
                        uint32_t edx_5 = esi_1 u/ 0xa
                        result -= 1
                        uint32_t eax_11
                        eax_11.b = *("0123456789ABCDEF" - edx_5 * 0xa + esi_1)
                        *result = eax_11.b
                        esi_1 = edx_5
                    case 3
                        goto label_663e46
                    case 4
                        var_8 = 2
                    label_663e46:
                        int32_t eax_2
                        eax_2.b = (*"0123456789ABCDEF")[esi_1 & 0xf]
                        result -= 1
                        *result = eax_2.b
                        esi_1 u>>= 4
                    case 5
                        var_8 = 5
                        uint32_t eax_4
                        uint32_t edx_2
                        
                        if (edi == 0)
                            edx_2 = esi_1 u/ 0xa
                            eax_4 = edx_2 * 5
                        
                        if (edi != 0 || esi_1 != eax_4 * 2)
                            edx_2 = esi_1 u/ 0xa
                            result -= 1
                            uint32_t eax_8
                            eax_8.b = *("0123456789ABCDEF" - edx_2 * 0xa + esi_1)
                            *result = eax_8.b
                            edi = 1
                        
                        esi_1 = edx_2
            
            eax_1 = arg3
            edx = var_c + 1
            var_c = edx
            
            if (eax_1 == 5 && edx == eax_1)
                if (result u<= arg1)
                    break
                
                if (edi != 0)
                    result -= 1
                    *result = 0x2e
                else if (esi_1 == 0)
                    result -= 1
                    *result = 0x30
            
            if (result u<= arg1)
                break
    
    return result
}
