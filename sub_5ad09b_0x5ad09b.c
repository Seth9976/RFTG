// 函数名称: sub_5ad09b
// 虚拟地址: 0x5ad09b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ad09b()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_4 = edi
    HMODULE hModule = GetModuleHandleW(u"KERNEL32.DLL")
    
    if (hModule == 0)
        sub_5acd7a()
        return 0
    
    data_bec930 = GetProcAddress(hModule, "FlsAlloc")
    data_bec934 = GetProcAddress(hModule, "FlsGetValue")
    data_bec938 = GetProcAddress(hModule, "FlsSetValue")
    int32_t eax_4 = GetProcAddress(hModule, "FlsFree")
    bool cond:0 = data_bec930 == 0
    data_bec93c = eax_4
    
    if (cond:0 || data_bec934 == 0 || data_bec938 == 0 || eax_4 == 0)
        data_bec934 = TlsGetValue
        data_bec930 = sub_5acd00
        data_bec938 = TlsSetValue
        data_bec93c = TlsFree
    
    uint32_t dwTlsIndex = TlsAlloc()
    data_8b8524 = dwTlsIndex
    
    if (dwTlsIndex != 0xffffffff && TlsSetValue(dwTlsIndex, data_bec934) != 0)
        sub_5a7664()
        int32_t eax_6 = EncodePointer(data_bec930)
        int32_t var_c_3 = data_bec934
        data_bec930 = eax_6
        int32_t eax_7 = EncodePointer(var_c_3)
        int32_t var_c_4 = data_bec938
        data_bec934 = eax_7
        int32_t eax_8 = EncodePointer(var_c_4)
        int32_t var_c_5 = data_bec93c
        data_bec938 = eax_8
        data_bec93c = EncodePointer(var_c_5)
        
        if (sub_5aed63() != 0)
            int32_t eax_12 = DecodePointer(data_bec930)(sub_5acefe)
            data_8b8520 = eax_12
            
            if (eax_12 != 0xffffffff)
                uint32_t* eax_13 = __calloc_crt(1, 0x214)
                
                if (eax_13 != 0 && DecodePointer(data_bec938)(data_8b8520, eax_13) != 0)
                    sub_5acdb7(eax_13, 0)
                    uint32_t eax_16 = GetCurrentThreadId()
                    eax_13[1] = 0xffffffff
                    *eax_13 = eax_16
                    return 1
        
        sub_5acd7a()
    
    return 0
}
