// 函数名称: sub_5d2780
// 虚拟地址: 0x5d2780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d2780(uint32_t arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t var_310 = eax
    char var_104[0x100]
    sub_5ce6a0(&var_104, 0x100, "%s: ")
    void* eax_1 = sub_5cd1b0(&var_104)
    wchar16 var_304[0x100]
    waveOutGetErrorTextW(arg1, &var_304, 0x100 - eax_1)
    int32_t __saved_ebp
    WideCharToMultiByte(0, 0, &var_304, 0xffffffff, &__saved_ebp + eax_1 - 0x100, 0x100 - eax_1, 
        nullptr, nullptr)
    char (* var_310_2)[0x100] = &var_104
    sub_5cce60("%s")
    return 0xffffffff
}
