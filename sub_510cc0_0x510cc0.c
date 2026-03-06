// 函数名称: sub_510cc0
// 虚拟地址: 0x510cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_510cc0(float* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: float var_c = fconvert.s(float.t(arg3[1]))
    float var_c = fconvert.s(float.t(arg3[1]))
    long double x87_r7_2 = float.t(arg3[2])
    *arg1 = fconvert.s(float.t(*arg3))
    arg1[1] = var_c
    arg1[2] = fconvert.s(x87_r7_2)
}
