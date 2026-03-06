// 函数名称: sub_666450
// 虚拟地址: 0x666450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_666450(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = arg1
    
    if (eax_2 != 0)
        if (arg2 != 0)
            int32_t var_6c = arg3
            void var_2cc
            int32_t eax_3 = arg2(&var_2cc, eax_2)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_3
        
        eax_2 = __free_base(eax_2)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}
