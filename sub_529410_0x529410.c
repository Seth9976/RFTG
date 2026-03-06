// 函数名称: sub_529410
// 虚拟地址: 0x529410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_529410(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: float eax
    float eax
    float edx
    eax, edx = sub_40af40(arg2)
    long double x87_r7_4 = fconvert.t(data_30d950c)
    float var_24 =
        fconvert.s(x87_r7_4 * fconvert.t(fconvert.s(fconvert.t(eax) - fconvert.t(data_30d9510))))
    float var_20 =
        fconvert.s(x87_r7_4 * fconvert.t(fconvert.s(fconvert.t(edx) - fconvert.t(data_30d9514))))
    float eax_1
    float edx_1
    eax_1, edx_1 = sub_4fc8c0(arg2)
    long double x87_r7_10 = fconvert.t(data_30d950c)
    float var_1c_2 =
        fconvert.s(x87_r7_10 * fconvert.t(fconvert.s(fconvert.t(eax_1) - fconvert.t(data_30d9510))))
    float var_18_2 =
        fconvert.s(x87_r7_10 * fconvert.t(fconvert.s(fconvert.t(edx_1) - fconvert.t(data_30d9514))))
    *arg1 = fconvert.s(fconvert.t(var_24))
    arg1[1] = fconvert.s(fconvert.t(var_20))
    arg1[2] = fconvert.s(fconvert.t(var_1c_2))
    arg1[3] = fconvert.s(fconvert.t(var_18_2))
    return arg1
}
