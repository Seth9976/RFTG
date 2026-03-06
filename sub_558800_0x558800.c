// 函数名称: sub_558800
// 虚拟地址: 0x558800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_558800(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_18 = 0
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t edx = *(*arg1 + 0xc)
    int32_t var_1c = 0x14
    
    if (edx(arg1, &var_1c) != 0)
        sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x7e, "DxSoundUnlockBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_20_1 = 0
    int32_t var_24_1 = 0
    int32_t var_28 = var_1c
    int32_t edi
    int32_t var_2c = edi
    int32_t result = (*(*arg1 + 0x4c))(arg1)
    
    if (result == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x81, "DxSoundUnlockBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
