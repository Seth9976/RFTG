// 函数名称: sub_4661a0
// 虚拟地址: 0x4661a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4661a0(float* arg1, int32_t* arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg4)
    long double x87_r7 = fconvert.t(*arg4)
    arg1[1] = *arg3
    *arg1 = fconvert.s(x87_r7)
    arg1[2] = arg3[1]
    int32_t ecx = arg3[3]
    arg1[3] = arg3[2]
    arg1[4] = ecx
    arg1[5] = *arg2
    int32_t edx = arg2[2]
    arg1[6] = arg2[1]
    arg1[7] = edx
}
