// 函数名称: sub_57e950
// 虚拟地址: 0x57e950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_57e950()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_210
    __builtin_memset(&var_210, 0, 0x208)
    struct IShellFolder var_218
    struct IShellFolder* ppshf = &var_218
    int32_t result_1 = 0
    
    if (SHGetDesktopFolder(ppshf) s>= 0)
        struct IShellFolder eax_3 = var_218
        void var_220
        void var_21c
        (*(*eax_3 + 0xc))(eax_3, 0, 0, &var_210, &var_220, &result_1, &var_21c)
        struct IShellFolder eax_5 = var_218
        (*(*eax_5 + 8))(eax_5)
    
    int32_t result = result_1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
