// 函数名称: sub_46c8f0
// 虚拟地址: 0x46c8f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46c8f0(void* arg1 @ esi, int128_t* arg2)
{
    // 第一条实际指令: void* ecx = __chkstk(0x1ed4)
    void* ecx = __chkstk(0x1ed4)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    char arg_14 = 1
    int32_t __saved_ebp
    int32_t result
    result.b =
        sub_4a3e90(sub_5ab990(&__saved_ebp, arg2, 0x1ec8), &__saved_ebp, *(arg1 + 0x7c), *(ecx + 0x7c))
        != 0
    sub_5a6aba(eax_1 ^ &var_8)
    return result
}
