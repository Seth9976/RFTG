// 函数名称: sub_4e9580
// 虚拟地址: 0x4e9580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_4e9580(float* arg1, float* arg2, float arg3)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(arg3)
    long double x87_r6 = fconvert.t(arg3)
    float* var_1c = arg1
    long double x87_r6_2 = fconvert.t(arg2[1])
    float* entry_ebx
    *arg1 = fconvert.s((fconvert.t(*arg2) - fconvert.t(*entry_ebx)) * x87_r6 + fconvert.t(*entry_ebx))
    long double x87_r6_6 = fconvert.t(arg2[2])
    arg1[1] = fconvert.s((x87_r6_2 - fconvert.t(entry_ebx[1])) * x87_r6 + fconvert.t(entry_ebx[1]))
    long double x87_r6_10 = fconvert.t(arg2[3])
    arg1[2] = fconvert.s((x87_r6_6 - fconvert.t(entry_ebx[2])) * x87_r6 + fconvert.t(entry_ebx[2]))
    long double x87_r6_14 = fconvert.t(arg2[4])
    arg1[3] = fconvert.s((x87_r6_10 - fconvert.t(entry_ebx[3])) * x87_r6 + fconvert.t(entry_ebx[3]))
    long double x87_r6_18 = fconvert.t(arg2[5])
    arg1[4] = fconvert.s((x87_r6_14 - fconvert.t(entry_ebx[4])) * x87_r6 + fconvert.t(entry_ebx[4]))
    arg1[5] = fconvert.s((x87_r6_18 - fconvert.t(entry_ebx[5])) * x87_r6 + fconvert.t(entry_ebx[5]))
    arg1[8] = sub_4658f0(&arg2[8], &entry_ebx[8], fconvert.s(x87_r6))
    float result = sub_4658f0(&arg2[9], &entry_ebx[9], fconvert.s(fconvert.t(arg3)))
    arg1[9] = result
    return result
}
