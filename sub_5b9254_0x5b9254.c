// 函数名称: sub_5b9254
// 虚拟地址: 0x5b9254
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b9254(int16_t* arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: if (arg2 != 0 && arg3 != 0)
    if (arg2 != 0 && arg3 != 0)
        if (*arg2 != 0)
            void* var_14
            sub_5a73dd(&var_14, arg4)
            void* var_c
            char var_8
            
            if (*(var_14 + 0x14) != 0)
                if (sub_5aec60(*arg2, &var_14) != 0)
                    void* eax_7 = var_14
                    int32_t cbMultiByte = *(eax_7 + 0xac)
                    
                    if (cbMultiByte s<= 1 || arg3 s< cbMultiByte)
                    label_5b92fc:
                        
                        if (arg3 u>= *(eax_7 + 0xac) && arg2[1] != 0)
                            goto label_5b9309
                        
                        goto label_5b9329
                    
                    int32_t cchWideChar_1
                    cchWideChar_1.b = arg1 != 0
                    bool cond:0_1 = MultiByteToWideChar(*(eax_7 + 4), 
                        MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, cbMultiByte, arg1, cchWideChar_1) != 0
                    eax_7 = var_14
                    
                    if (not(cond:0_1))
                        goto label_5b92fc
                    
                label_5b9309:
                    int32_t result = *(eax_7 + 0xac)
                    
                    if (var_8 != 0)
                        *(var_c + 0x70) &= 0xfffffffd
                    
                    return result
                
                int32_t cchWideChar
                cchWideChar.b = arg1 != 0
                
                if (MultiByteToWideChar(*(var_14 + 4), MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 1, 
                    arg1, cchWideChar) == 0)
                label_5b9329:
                    *__errno() = 0x2a
                    
                    if (var_8 != 0)
                        *(var_c + 0x70) &= 0xfffffffd
                    
                    return 0xffffffff
            else if (arg1 != 0)
                *arg1 = zx.w(*arg2)
            
            if (var_8 != 0)
                *(var_c + 0x70) &= 0xfffffffd
            
            return 1
        
        if (arg1 != 0)
            *arg1 = 0
    
    return 0
}
