// 函数名称: sub_4240c0
// 虚拟地址: 0x4240c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_4240c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_10 = 0
    int32_t var_10 = 0
    int32_t var_14 = arg3
    int32_t var_68 = 1
    int32_t var_c = arg7 + 1
    int32_t var_8 = 1
    void var_54
    int32_t eax_3
    int80_t result
    result, eax_3 = sub_4f66d0(&var_54, arg4, arg5, &var_14, fconvert.s(float.t(1)), &var_c, nullptr)
    int32_t entry_ebx
    __builtin_memcpy(entry_ebx, eax_3, 0x40)
    return result
}
