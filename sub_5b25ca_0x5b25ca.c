// 函数名称: sub_5b25ca
// 虚拟地址: 0x5b25ca
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PSTRsub_5b25ca()
{
    // 第一条实际指令: PWSTR eax = GetEnvironmentStringsW()
    PWSTR eax = GetEnvironmentStringsW()
    PWSTR ebx = eax
    
    if (ebx == 0)
        return nullptr
    
    if (*ebx != 0)
        while (true)
            eax = &eax[1]
            
            if (*eax == 0)
                eax = &eax[1]
                
                if (*eax == 0)
                    break
    
    int32_t edi
    int32_t var_1c_1 = edi
    int32_t cbMultiByte =
        WideCharToMultiByte(0, 0, ebx, ((eax - ebx) s>> 1) + 1, nullptr, 0, nullptr, nullptr)
    PSTR var_8_1
    PSTR lpMultiByteStr
    
    if (cbMultiByte != 0)
        lpMultiByteStr = sub_5abd7c(cbMultiByte)
        var_8_1 = lpMultiByteStr
    
    PSTR result
    
    if (cbMultiByte == 0 || lpMultiByteStr == 0)
        FreeEnvironmentStringsW(ebx)
        result = nullptr
    else
        if (WideCharToMultiByte(0, 0, ebx, ((eax - ebx) s>> 1) + 1, lpMultiByteStr, cbMultiByte, 
                nullptr, nullptr) == 0)
            __free_base(var_8_1)
            var_8_1 = nullptr
        
        FreeEnvironmentStringsW(ebx)
        result = var_8_1
    
    return result
}
