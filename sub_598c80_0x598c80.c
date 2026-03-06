// 函数名称: sub_598c80
// 虚拟地址: 0x598c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_598c80(int32_t* arg1 @ esi, int32_t arg2 @ edi, int32_t* arg3)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* edx
    ecx, edx = __chkstk(0x36bc)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t* var_36b8 = arg3
    bool cond:0 = sub_598220(&var_36b8) != 0
    int32_t* eax_4 = var_36b8
    
    if (not(cond:0))
        eax_4[0x2a] = eax_4[0x2c]
        sub_5a6aba(arg2 ^ &__saved_ebp)
        return 0
    
    if (arg1 != 0)
        *arg1 = *eax_4
    
    if (ecx != 0)
        *ecx = eax_4[1]
    
    if (edx != 0)
        *edx = eax_4[2]
    
    sub_5a6aba(arg2 ^ &__saved_ebp)
    return 1
}
