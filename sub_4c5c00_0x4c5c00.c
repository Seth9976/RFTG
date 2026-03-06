// 函数名称: sub_4c5c00
// 虚拟地址: 0x4c5c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_4c5c00(BOOL* arg1 @ esi, PSTR arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void fileInformation
    BOOL eax_3 = GetFileAttributesExA(arg2, GetFileExInfoStandard, &fileInformation)
    
    if (eax_3 != 0)
        int32_t var_14
        arg1[1] = var_14
        BOOL var_18
        *arg1 = var_18
        int32_t eax_4
        eax_4.b = 1
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    *arg1 = eax_3
    arg1[1] = eax_3
    eax_3.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_3
}
