// 函数名称: sub_56a660
// 虚拟地址: 0x56a660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_56a660(float* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_5abfc0(&arg1[1], 0, 0x34)
    long double x87_r7 = fconvert.t(0.52359879016876221)
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7)
    bool cond:0 = data_3079214 != 2
    void* eax = data_27e7fd0
    *arg1 = fconvert.s(fconvert.t(fconvert.s(x87_r7)))
    arg1[1] = fconvert.s(float.t(*(eax + 0x18)) / float.t(*(eax + 0x14)))
    arg1[2] = fconvert.s(fconvert.t(0.200000003f))
    arg1[3] = fconvert.s(fconvert.t(1000f))
    
    if (cond:0)
        sub_4138d0(eax, &arg1[4], &data_3079240, &data_3079234, &data_8409cc)
        return arg1
    
    sub_4138d0(eax, &arg1[4], &data_8409c0, &data_8409a8, &data_8409cc)
    return arg1
}
