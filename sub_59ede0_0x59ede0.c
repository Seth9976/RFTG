// 函数名称: sub_59ede0
// 虚拟地址: 0x59ede0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_59ede0(void* arg1 @ esi, int32_t* arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    uint32_t* edx
    ecx, edx = __chkstk(0x4850)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t var_8_1 = 1
    int32_t var_c = arg3
    int32_t var_4854
    int32_t result = sub_59e970(arg1, edx, ecx, &var_4854)
    
    if (result == 0)
        *(arg1 + 0xa8) = *(arg1 + 0xb0)
        sub_5a6aba(var_8_1 ^ &__saved_ebp)
        return result
    
    if (arg2 != 0)
        *arg2 = var_4854
    
    int32_t* entry_ebx
    int32_t var_4850
    
    if (entry_ebx != 0)
        *entry_ebx = var_4850
    sub_5a6aba(var_8_1 ^ &__saved_ebp)
    return 1
}
