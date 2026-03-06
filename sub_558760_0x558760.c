// 函数名称: sub_558760
// 虚拟地址: 0x558760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_558760(int32_t* arg1)
{
    // 第一条实际指令: void var_14
    void var_14
    void var_10
    int32_t result
    int32_t var_8
    
    if ((*(*arg1 + 0x2c))(arg1, 0, 0, &result, &var_14, &var_10, &var_8, 2) != 0)
        sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x74, "DxSoundLockBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (var_8 == 0)
        return result
    
    sub_4c5870("b2 == 0", &data_83f3d3, "Windows\WindowsSound.cpp", 0x75, "DxSoundLockBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
