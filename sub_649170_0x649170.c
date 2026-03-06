// 函数名称: sub_649170
// 虚拟地址: 0x649170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_649170(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    void* esi = arg1[7]
    void* edi = *(esi + 0xd44)
    *arg1 = 0
    arg1[1] = arg3
    arg1[2] = arg2
    long double x87_r7 = fconvert.t(*(esi + 0xd48))
    *(esi + 0xd80) = 1
    *(esi + 0xd84) = 1
    int32_t eax = sub_685f40(x87_r7)
    bool cond:0 = *(esi + 0xda0) != 0
    long double x87_r7_2 = fconvert.t(*(esi + 0xd48)) - float.t(eax)
    *(esi + 0xd90) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    long double x87_r6_1 = float.t(1)
    
    if (not(cond:0))
        double* ecx_1 = *(edi + 0x78) + (eax << 3)
        *(esi + 0xd98) =
            fconvert.d((x87_r6_1 - x87_r7_2) * fconvert.t(*ecx_1) + fconvert.t(ecx_1[1]) * x87_r7_2)
    
    int32_t edx = *(edi + 0x70)
    long double x87_r6_2 = x87_r6_1 - x87_r7_2
    *(esi + 0xda8) = fconvert.d(float.t(*(edx + (eax << 2) + 4)) * x87_r7_2
        + float.t(*(edx + (eax << 2))) * x87_r6_2)
    int32_t ecx_3 = *(edi + 0x74)
    int32_t* result = ecx_3 + (eax << 2)
    *(esi + 0xdb0) =
        fconvert.d(x87_r7_2 * float.t(*(ecx_3 + (eax << 2) + 4)) + x87_r6_2 * float.t(*result))
    *(esi + 0xdb8) = fconvert.d(fconvert.t(-6.0))
    *(esi + 0xdc0) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xdc8) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xdd0) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xdd8) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xde0) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xde8) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xdf0) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xdf8) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xe00) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xe08) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xe10) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xe18) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xe20) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xe28) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xe30) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xe38) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    *(esi + 0xe40) = fconvert.d(fconvert.t(*(esi + 0xd48)))
    return result
}
