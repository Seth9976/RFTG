// 函数名称: sub_413110
// 虚拟地址: 0x413110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_413110(float* arg1 @ esi, int32_t* arg2 @ edi)
{
    // 第一条实际指令: float eax
    float eax
    float edx
    eax, edx = sub_40af40(arg1)
    float eax_1
    float edx_1
    eax_1, edx_1 = sub_4130b0(eax, edx)
    float eax_3
    float edx_2
    eax_3, edx_2 = sub_4130b0(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1)), 
        fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1])))
    long double x87_r7_4 = fconvert.t(eax_1)
    long double x87_r6_2 = fconvert.t(edx_1)
    *arg2 = fconvert.s(x87_r7_4)
    arg2[1] = fconvert.s(x87_r6_2)
    arg2[2] = fconvert.s(fconvert.t(fconvert.s(x87_r7_4 + fconvert.t(eax_3))))
    arg2[3] = fconvert.s(fconvert.t(fconvert.s(x87_r6_2 + fconvert.t(edx_2))))
    return arg2
}
