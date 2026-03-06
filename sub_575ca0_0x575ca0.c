// 函数名称: sub_575ca0
// 虚拟地址: 0x575ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_575ca0(float* arg1 @ esi)
{
    // 第一条实际指令: sub_5abfc0(arg1, 0, 0x40)
    sub_5abfc0(arg1, 0, 0x40)
    arg1[2] = fconvert.s(float.t(1))
    float var_8 = fconvert.s(fneg(fconvert.t(data_27bc444)))
    long double x87_r7_5 = fconvert.t(data_27bc43c)
    *arg1 = fconvert.s(x87_r7_5 * fconvert.t(fconvert.s(fneg(fconvert.t(data_27bc440)))))
    arg1[1] = fconvert.s(x87_r7_5 * fconvert.t(var_8))
    arg1[3] = fconvert.s(x87_r7_5)
    long double x87_r7_6 = float.t(0)
    long double x87_r6_4 = fconvert.t(3238f)
    arg1[8] = fconvert.s(x87_r7_6)
    long double x87_r5 = fconvert.t(2048f)
    arg1[9] = fconvert.s(x87_r7_6)
    arg1[0xa] = fconvert.s(x87_r6_4)
    arg1[0xc] = fconvert.s(x87_r7_6)
    arg1[0xb] = fconvert.s(x87_r5)
    arg1[0xd] = fconvert.s(x87_r7_6)
    arg1[0xe] = fconvert.s(x87_r6_4)
    arg1[0xf] = fconvert.s(x87_r5)
    return arg1
}
