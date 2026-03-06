// 函数名称: sub_5dd2a0
// 虚拟地址: 0x5dd2a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dd2a0(int32_t arg1 @ edi, void* arg2, char* arg3)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 0xffffffff
    
    int32_t entry_ebx
    int32_t var_1c = entry_ebx
    int32_t var_20 = arg1
    int32_t var_24 = 0x72
    int32_t eax
    int32_t var_28 = eax
    *(arg2 + 0x1c) = 0xffffffff
    *(arg2 + 0x20) = 0
    *(arg2 + 0x24) = 0
    *(arg2 + 0x28) = 0
    int32_t var_2c = 0x77
    int32_t var_30 = eax
    int32_t edi_1 = sbb.d(arg1, arg1, sub_5cd400() != 0) & 3
    int32_t var_34 = 0x2b
    int32_t var_38 = eax
    int32_t ebx_1 = sbb.d(entry_ebx, entry_ebx, sub_5cd400() != 0) & 2
    int32_t eax_7 = sub_5cd400()
    int32_t var_8_1
    
    if (eax_7 == 0)
        var_8_1 = eax_7
    
    if (eax_7 != 0 || edi_1 != 0)
        var_8_1 = 0x80000000
    
    int32_t var_24_1 = 0x61
    int32_t var_28_1 = eax
    int32_t eax_8 = sub_5cd400()
    int32_t eax_9 = neg.d(eax_8)
    int32_t eax_11 = sbb.d(eax_9, eax_9, eax_8 != 0) & 4
    int32_t eax_12
    
    if (eax_11 == 0)
        int32_t var_24_2 = 0x2b
        int32_t var_28_2 = eax
        eax_12 = sub_5cd400()
    
    int32_t esi_1
    
    if (eax_11 != 0 || eax_12 != 0 || ebx_1 != 0)
        esi_1 = 0x40000000
    else
        esi_1 = 0
    
    if (var_8_1 == 0 && esi_1 == 0)
        return 0xffffffff
    
    int32_t var_24_3 = 0x400
    int32_t eax_14 = sub_5d0ac0()
    *(arg2 + 0x20) = eax_14
    
    if (eax_14 == 0)
        sub_5cd050(eax_14)
        return 0xffffffff
    
    uint32_t uMode = SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOOPENFILEERRORBOX)
    void* var_28_3 = sub_5cd1b0(arg3) + 1
    char* var_2c_1 = arg3
    PWSTR lpFileName = sub_5dd160("UTF-16LE", "UTF-8")
    enum FILE_SHARE_MODE dwShareMode
    dwShareMode.b = esi_1 == 0
    HANDLE eax_18 = CreateFileW(lpFileName, esi_1 | var_8_1, dwShareMode, nullptr, 
        eax_11 | ebx_1 | edi_1, FILE_ATTRIBUTE_NORMAL, nullptr)
    PWSTR lpFileName_1 = lpFileName
    sub_5d0af0()
    SetErrorMode(uMode)
    
    if (eax_18 != 0xffffffff)
        int32_t ecx_5
        ecx_5.b = eax_11 != 0
        *(arg2 + 0x1c) = eax_18
        *(arg2 + 0x18) = ecx_5
        return 0
    
    int32_t var_24_7 = *(arg2 + 0x20)
    sub_5d0af0()
    char* var_28_4 = arg3
    *(arg2 + 0x20) = 0
    sub_5cce60("Couldn't open %s")
    return 0xfffffffe
}
