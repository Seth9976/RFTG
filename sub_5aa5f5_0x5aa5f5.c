// 函数名称: sub_5aa5f5
// 虚拟地址: 0x5aa5f5
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5aa5f5(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result
    
    if (arg1 != 0)
        int16_t rootPathName = arg1.w + 0x40
        int16_t var_e_1 = 0x3a
        int16_t var_c_1 = 0x5c
        int16_t var_a_1 = 0
        uint32_t eax_4 = GetDriveTypeW(&rootPathName)
        
        if (eax_4 == 0 || eax_4 == 1)
            result = 0
        else
            result = 1
    else
        result = 1
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
