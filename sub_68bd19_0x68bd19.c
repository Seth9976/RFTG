// 函数名称: sub_68bd19
// 虚拟地址: 0x68bd19
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68bd19(void* arg1 @ ebp, long double arg2 @ st0)
{
    // 第一条实际指令: long double x87_r7 = fabs(arg2)
    long double x87_r7 = fabs(arg2)
    long double x87_r6 = data_8a6410
    x87_r6 - x87_r7
    *(arg1 - 0xa0) = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    char ecx
    
    if ((*(arg1 - 0x9f) & 0x41) == 0)
        long double st0_1
        long double x87_r1
        long double x87_r2
        st0_1, ecx = fFEXPH(arg1, arg2, x87_r1, x87_r2)
        char entry_ebx
        
        if (entry_ebx != 0)
            ExpHypSum(st0_1)
            return &data_68bdb3
    
    *(arg1 - 0x90) = 8
    long double st0_5 = sub_68868d()
    unimplemented  {call 0x68868d}
    return sub_688743(ecx, st0_5) __tailcall
}
