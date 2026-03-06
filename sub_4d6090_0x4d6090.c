// 函数名称: sub_4d6090
// 虚拟地址: 0x4d6090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d6090(float* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: long double x87_r7_1 = fconvert.t(arg3[8]) + fconvert.t(arg3[7])
    long double x87_r7_1 = fconvert.t(arg3[8]) + fconvert.t(arg3[7])
    arg1[5] = arg3[4]
    arg1[6] = arg3[5]
    long double x87_r7_2 = x87_r7_1 + fconvert.t(arg3[9])
    arg1[7] = arg3[6]
    arg1[1] = *arg3
    arg1[2] = arg3[1]
    int32_t edx_4 = arg3[2]
    *arg1 = fconvert.s(x87_r7_2 * fconvert.t(0.3333333432674408))
    arg1[3] = edx_4
    arg1[4] = arg3[3]
}
