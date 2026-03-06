// 函数名称: sub_5211a0
// 虚拟地址: 0x5211a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5211a0(void* arg1, void* arg2)
{
    // 第一条实际指令: void* i = *(arg1 + 0x14)
    for (void* i = *(arg1 + 0x14); i != 0; i = *(arg1 + 0x14))
        void* esi_1 = *(arg1 + 0x18)
        long double x87_r7_13 = fconvert.t(fconvert.s(fconvert.t(*(i + 8)) - fconvert.t(*(arg2 + 8))))
        long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*(i + 4)) - fconvert.t(*(arg2 + 4))))
        long double x87_r5_1 =
            fconvert.t(fconvert.s(fconvert.t(*(i + 0xc)) - fconvert.t(*(arg2 + 0xc))))
        long double x87_r4_1 =
            fconvert.t(fconvert.s(fconvert.t(*(esi_1 + 8)) - fconvert.t(*(arg2 + 8))))
        long double x87_r3_1 =
            fconvert.t(fconvert.s(fconvert.t(*(esi_1 + 4)) - fconvert.t(*(arg2 + 4))))
        long double x87_r2_1 =
            fconvert.t(fconvert.s(fconvert.t(*(esi_1 + 0xc)) - fconvert.t(*(arg2 + 0xc))))
        long double x87_r4_3 =
            fconvert.t(fconvert.s(x87_r5_1 * x87_r5_1 + x87_r7_13 * x87_r7_13 + x87_r6_1 * x87_r6_1))
        long double x87_r6_6 =
            fconvert.t(fconvert.s(x87_r2_1 * x87_r2_1 + x87_r4_1 * x87_r4_1 + x87_r3_1 * x87_r3_1))
        x87_r6_6 - x87_r4_3
        arg1.w = (x87_r6_6 < x87_r4_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_6, x87_r4_3) ? 1 : 0) << 0xa
            | (x87_r6_6 == x87_r4_3 ? 1 : 0) << 0xe
        bool cond:0_1 = (arg1:1.b & 0x41) == 0
        arg1 = i
        
        if (not(cond:0_1))
            arg1 = esi_1
}
