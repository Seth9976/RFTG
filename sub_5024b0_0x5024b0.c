// 函数名称: sub_5024b0
// 虚拟地址: 0x5024b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5024b0(int32_t arg1, char* arg2, float* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t* esi = data_30785c8
    esi[3] += 1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    
    if (*esi == 0)
        sub_5043e0(esi)
    
    int32_t* ebx = *esi
    *esi = *ebx
    __builtin_memset(ebx, 0, 0x14)
    
    if (ebx != 0)
        *ebx = &data_83f3d3
        ebx[1] = &data_83f3d3
    
    int32_t* var_8 = ebx
    sub_4c4590(arg2)
    int32_t** var_1c = &var_8
    char* edx = sub_518190(arg1 + 4)
    double var_20_1 = fconvert.d(fconvert.t(arg3[2]))
    double var_28 = fconvert.d(fconvert.t(arg3[1]))
    double var_30 = fconvert.d(fconvert.t(*arg3))
    char const* const var_34 = "%g %g %g"
    sub_4c49b0(&ebx[1], edx)
    return &ebx[1]
}
