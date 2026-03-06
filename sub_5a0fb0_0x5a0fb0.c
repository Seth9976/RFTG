// 函数名称: sub_5a0fb0
// 虚拟地址: 0x5a0fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a0fb0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4 @ edi, uint32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3 = sub_5a9a41(arg4)
    void var_bc
    sub_595670(arg4, &var_bc)
    int32_t* entry_ebx
    int32_t result = sub_5a0e50(arg5, arg3, entry_ebx, &var_bc, arg3)
    sub_5a9831(arg4, eax_3, FILE_BEGIN)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
