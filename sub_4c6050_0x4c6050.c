// 函数名称: sub_4c6050
// 虚拟地址: 0x4c6050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c6050()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_8bc5ff != 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return &data_83f3d3
    
    if (data_315ff68 == 0)
        uint8_t pszPath[0x104]
        
        if (SHGetFolderPathA(nullptr, 0x801a, nullptr, 0, &pszPath) s< 0)
            sub_4c5870("Halt", &data_83f3d3, "xPlatformPC.cpp", 0x13b, "XGetSaveGameFolder")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_110_2 = *(data_27e7fd0 + 8)
        uint8_t (* var_114_1)[0x104] = &pszPath
        sub_5a733b(&data_315ff68, "%s\TempleGates\%s\")
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return &data_315ff68
}
