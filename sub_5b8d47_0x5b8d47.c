// 函数名称: sub_5b8d47
// 虚拟地址: 0x5b8d47
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b8d47(int32_t* arg1, BOOL arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: BOOL lpMultiByteStr = arg2
    BOOL lpMultiByteStr = arg2
    int32_t edi
    int32_t var_20 = edi
    
    if (lpMultiByteStr == 0 && arg3 u> 0)
        if (arg1 != 0)
            *arg1 = 0
        
        return 0
    
    if (arg1 != 0)
        *arg1 = 0xffffffff
    
    if (arg3 u> 0x7fffffff)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    void* var_14
    sub_5a73dd(&var_14, arg4)
    void* eax_3 = var_14
    void* var_c
    char var_8
    wchar16 wideCharStr
    
    if (*(eax_3 + 0x14) != 0)
        arg2 = 0
        int32_t eax_10 =
            WideCharToMultiByte(*(eax_3 + 4), 0, &wideCharStr, 1, lpMultiByteStr, arg3, nullptr, &arg2)
        
        if (eax_10 == 0)
            if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
                if (lpMultiByteStr != 0 && arg3 u> 0)
                    sub_5abfc0(lpMultiByteStr, 0, arg3)
                
                goto label_5b8dfe
            
        label_5b8dd1:
            *__errno() = 0x2a
            int32_t result = *__errno()
            
            if (var_8 != 0)
                *(var_c + 0x70) &= 0xfffffffd
            
            return result
        
        if (arg2 != 0)
            goto label_5b8dd1
        
        if (arg1 != 0)
            *arg1 = eax_10
    else
        eax_3.w = wideCharStr
        
        if (eax_3.w u> 0xff)
            if (lpMultiByteStr != 0 && arg3 u> 0)
                sub_5abfc0(lpMultiByteStr, 0, arg3)
            
            goto label_5b8dd1
        
        if (lpMultiByteStr == 0)
            goto label_5b8e1c
        
        if (arg3 u<= 0)
        label_5b8dfe:
            *__errno() = 0x22
            __invalid_parameter_noinfo()
            
            if (var_8 != 0)
                *(var_c + 0x70) &= 0xfffffffd
            
            return 0x22
        
        *lpMultiByteStr = eax_3.b
    label_5b8e1c:
        
        if (arg1 != 0)
            *arg1 = 1
    
    if (var_8 == 0)
        return 0
    
    *(var_c + 0x70) &= 0xfffffffd
    return 0
}
