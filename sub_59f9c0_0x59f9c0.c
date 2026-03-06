// 函数名称: sub_59f9c0
// 虚拟地址: 0x59f9c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_59f9c0(int32_t arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: void* ecx = __chkstk(0x4854)
    void* ecx = __chkstk(0x4854)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t var_c = 0x4848
    char var_10 = 0
    int128_t var_4850[0x483]
    int128_t (* var_14)[0x483] = &var_4850
    int32_t var_4854 = 0
    sub_5abfc0(var_14, var_10, var_c)
    int32_t result = sub_59f3f0(ecx, &var_4854)
    
    if (result == 1)
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return 0
    
    if (result != 0)
        int32_t edx_1 = var_4850[0].d
        int32_t* entry_ebx
        *entry_ebx = var_4854
        *arg2 = edx_1
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
