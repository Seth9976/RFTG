// 函数名称: sub_5a724b
// 虚拟地址: 0x5a724b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a724b(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t esi = DecodePointer(data_bec584)
    
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    *arg1 = 0
    int32_t edi
    int32_t var_10_1 = edi
    int32_t result
    
    if (esi != 0)
    label_5a731b:
        
        if (esi(arg1, 4) != 0)
            result = 0
        else
            *__errno() = 0xc
            result = *__errno()
    else
        HMODULE eax_3 = LoadLibraryW(u"ADVAPI32.DLL")
        
        if (eax_3 != 0)
            esi = GetProcAddress(eax_3, "SystemFunction036")
            
            if (esi != 0)
                int32_t eax_10 = EncodePointer(esi)
                int32_t eax_11 = sub_5accf7()
                
                if (InterlockedExchange(&data_bec584, eax_10) != eax_11)
                    FreeLibrary(eax_3)
                
                goto label_5a731b
            
            void* eax_6 = __errno()
            *eax_6 = sub_5abcf1(GetLastError())
            __invalid_parameter_noinfo()
            result = sub_5abcf1(GetLastError())
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result = 0x16
    
    return result
}
