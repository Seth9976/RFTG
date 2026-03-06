// 函数名称: sub_6493f0
// 虚拟地址: 0x6493f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6493f0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: long double x87_r7 = float.t(arg5)
    long double x87_r7 = float.t(arg5)
    void* esi = *(arg1 + 0x1c)
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax:1.b & 1) == 0)
        long double x87_r6_1 = float.t(arg4)
        x87_r6_1 - x87_r7
        eax.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax:1.b & 0x41) != 0)
            long double x87_r6_2 = float.t(arg6)
            x87_r6_2 - x87_r6_1
            eax.w = (x87_r6_2 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r6_1 ? 1 : 0) << 0xe
            
            if ((eax:1.b & 0x41) != 0)
                return 0xffffff7d
            
            eax = arg6
            arg5 = eax
        else
            long double x87_r5_1 = float.t(arg6)
            x87_r5_1 - x87_r7
            eax.w = (x87_r5_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r7 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax:1.b & 0x41) != 0)
                eax = sub_685f40(x87_r7 * fconvert.t(0.875))
                arg5 = eax
            else
                eax = sub_685f40(float.t(arg4 + arg6) * fconvert.t(0.5))
                arg5 = eax
    
    *(esi + 0xd58) = fconvert.s(float.t(arg5))
    int32_t eax_2 = sub_6489f0(eax, 1, arg2, arg3, fconvert.d(float.t(arg5)), esi + 0xd48)
    *(esi + 0xd44) = eax_2
    
    if (eax_2 == 0)
        return 0xffffff7e
    
    sub_649170(arg1, arg3, arg2)
    *(esi + 0xd88) = 1
    *(esi + 0xd5c) = 1
    *(esi + 0xd60) = arg6
    *(esi + 0xd70) = arg4
    int32_t eax_6 = sub_685f40(fconvert.t(fconvert.d(x87_r7)))
    *(esi + 0xd68) = fconvert.d(fconvert.t(1.5))
    *(esi + 0xd78) = fconvert.d(fconvert.t(0.10000000000000001))
    *(esi + 0xd64) = eax_6
    *(esi + 0xd74) = arg5 * 2
    return 0
}
