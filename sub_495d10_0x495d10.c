// 函数名称: sub_495d10
// 虚拟地址: 0x495d10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_495d10(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t edx
    ecx, edx = __chkstk(0x1ed4)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t var_14 = edx
    void var_1ed4
    sub_48bb40(arg1, &var_1ed4, edx.b)
    int16_t var_1e24[0xf06]
    
    if (sub_492910(*(arg2 + (ecx << 2)), 1, &var_1ed4, edx) != 0)
        var_1e24[edx * 0x5a] += 1
    int80_t result = sub_495c40(*(arg2 + (ecx << 2)), &var_1ed4, arg3, arg4)
    int32_t entry_ebx
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return result
}
