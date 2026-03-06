// 函数名称: sub_445ac0
// 虚拟地址: 0x445ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_445ac0(int32_t* arg1 @ edi, float arg2)
{
    // 第一条实际指令: int32_t* esi = data_307c1dc
    int32_t* esi = data_307c1dc
    
    if (arg2 s>= 0xc)
        esi = data_307c1d8
    
    void* eax = sub_4f4890(esi)
    float ecx = *(eax + 8)
    float edx = *(eax + 0xc)
    float var_28 = *(eax + 0x10)
    float edx_1 = *(eax + 0x14)
    float var_10 = fconvert.s(fconvert.t(var_28) - fconvert.t(ecx))
    float var_c = fconvert.s(fconvert.t(edx_1) - fconvert.t(edx))
    float* entry_ebx
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*entry_ebx)))
    var_10 = fconvert.s(fconvert.t(var_10) * x87_r6)
    float var_c_1 = fconvert.s(x87_r6 * fconvert.t(var_c))
    float var_18_1 = fconvert.s(fconvert.t(entry_ebx[5]))
    long double x87_r7_10 = fconvert.t(entry_ebx[6])
    var_28 = var_18_1
    float var_14_1 = fconvert.s(x87_r7_10)
    float var_24_1 = var_14_1
    int32_t var_20
    sub_405e30(&var_20, &var_10, &var_28)
    *arg1 = var_20
    int32_t var_1c
    arg1[1] = var_1c
    arg1[2] = var_18_1
    arg1[3] = var_14_1
    return arg1
}
