// 函数名称: sub_4e9650
// 虚拟地址: 0x4e9650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e9650(float* arg1, float* arg2, float arg3)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(arg3)
    long double x87_r6 = fconvert.t(arg3)
    float* entry_ebx
    long double x87_r6_5 =
        (fconvert.t(arg2[1]) - fconvert.t(entry_ebx[1])) * x87_r6 + fconvert.t(entry_ebx[1])
    *arg1 = fconvert.s((fconvert.t(*arg2) - fconvert.t(*entry_ebx)) * x87_r6 + fconvert.t(*entry_ebx))
    arg1[1] = fconvert.s(x87_r6_5)
    long double x87_r6_13 =
        (fconvert.t(arg2[3]) - fconvert.t(entry_ebx[3])) * x87_r6 + fconvert.t(entry_ebx[3])
    arg1[2] =
        fconvert.s((fconvert.t(arg2[2]) - fconvert.t(entry_ebx[2])) * x87_r6 + fconvert.t(entry_ebx[2]))
    arg1[3] = fconvert.s(x87_r6_13)
    long double x87_r6_21 =
        (fconvert.t(arg2[5]) - fconvert.t(entry_ebx[5])) * x87_r6 + fconvert.t(entry_ebx[5])
    arg1[4] =
        fconvert.s((fconvert.t(arg2[4]) - fconvert.t(entry_ebx[4])) * x87_r6 + fconvert.t(entry_ebx[4]))
    arg1[5] = fconvert.s(x87_r6_21)
    long double x87_r6_29 =
        (fconvert.t(arg2[7]) - fconvert.t(entry_ebx[7])) * x87_r6 + fconvert.t(entry_ebx[7])
    arg1[6] =
        fconvert.s((fconvert.t(arg2[6]) - fconvert.t(entry_ebx[6])) * x87_r6 + fconvert.t(entry_ebx[6]))
    arg1[7] = fconvert.s(x87_r6_29)
    long double x87_r6_37 =
        (fconvert.t(arg2[9]) - fconvert.t(entry_ebx[9])) * x87_r6 + fconvert.t(entry_ebx[9])
    arg1[8] =
        fconvert.s((fconvert.t(arg2[8]) - fconvert.t(entry_ebx[8])) * x87_r6 + fconvert.t(entry_ebx[8]))
    arg1[9] = fconvert.s(x87_r6_37)
    float* var_24 = arg1
    long double x87_r6_45 =
        (fconvert.t(arg2[0xb]) - fconvert.t(entry_ebx[0xb])) * x87_r6 + fconvert.t(entry_ebx[0xb])
    arg1[0xa] = fconvert.s((fconvert.t(arg2[0xa]) - fconvert.t(entry_ebx[0xa])) * x87_r6
        + fconvert.t(entry_ebx[0xa]))
    arg1[0xb] = fconvert.s(x87_r6_45)
    long double x87_r6_53 =
        (fconvert.t(arg2[0xd]) - fconvert.t(entry_ebx[0xd])) * x87_r6 + fconvert.t(entry_ebx[0xd])
    arg1[0xc] = fconvert.s((fconvert.t(arg2[0xc]) - fconvert.t(entry_ebx[0xc])) * x87_r6
        + fconvert.t(entry_ebx[0xc]))
    arg1[0xd] = fconvert.s(x87_r6_53)
    long double x87_r6_61 =
        (fconvert.t(arg2[0xf]) - fconvert.t(entry_ebx[0xf])) * x87_r6 + fconvert.t(entry_ebx[0xf])
    arg1[0xe] = fconvert.s((fconvert.t(arg2[0xe]) - fconvert.t(entry_ebx[0xe])) * x87_r6
        + fconvert.t(entry_ebx[0xe]))
    arg1[0xf] = fconvert.s(x87_r6_61)
    arg1[0x10] = sub_4658f0(&arg2[0x10], &entry_ebx[0x10], fconvert.s(x87_r6))
    arg1[0x11] = sub_4658f0(&arg2[0x11], &entry_ebx[0x11], fconvert.s(fconvert.t(arg3)))
    arg1[0x12] = entry_ebx[0x12]
    int32_t result = entry_ebx[0x13]
    arg1[0x13] = result
    return result
}
