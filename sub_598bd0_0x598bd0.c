// 函数名称: sub_598bd0
// 虚拟地址: 0x598bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_598bd0(int32_t* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* edx
    ecx, edx = __chkstk(0x36b8)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t var_36b8 = arg2
    int32_t result = sub_598840(arg2, edx, ecx, &var_36b8, arg1)
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
