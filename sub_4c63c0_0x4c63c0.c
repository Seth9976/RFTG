// 函数名称: sub_4c63c0
// 虚拟地址: 0x4c63c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_4c63c0(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_114 = arg1
    BOOL eax_3
    
    if (IsClipboardFormatAvailable(1) != 0 && OpenClipboard(nullptr) != 0)
        BOOL hMem = GetClipboardData(1)
        
        if (hMem != 0)
            eax_3 = GlobalLock(hMem)
            
            if (eax_3 != 0)
                char var_110 = 0
                int128_t var_10f[0x7]
                sub_5abfc0(&var_10f, 0, 0xff)
                _strncpy(&var_110, eax_3, 0x80)
                char var_91 = 0
                sub_4c4590(&var_110)
                GlobalUnlock(hMem)
                CloseClipboard()
                BOOL eax_5
                eax_5.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_5
    
    eax_3.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_3
}
