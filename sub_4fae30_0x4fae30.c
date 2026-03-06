// 函数名称: sub_4fae30
// 虚拟地址: 0x4fae30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_4fae30(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: void* eax = sub_4fc3d0(&data_be1cb8, arg1)
    void* eax = sub_4fc3d0(&data_be1cb8, arg1)
    void var_90
    void var_50
    int32_t entry_ebx
    int32_t var_a4_1 = __builtin_memcpy(&var_50, sub_4fab00(arg1, &var_90, entry_ebx, arg3), 0x40)
    int32_t eax_5
    int80_t result
    result, eax_5 = sub_4f66d0(&var_90, *(eax + 4), entry_ebx, arg4, fconvert.s(float.t(1)), arg5, arg6)
    __builtin_memcpy(arg2, eax_5, 0x40)
    return result
}
