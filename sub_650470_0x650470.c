// 函数名称: sub_650470
// 虚拟地址: 0x650470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_650470(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    sub_5abfc0(edi, 0, 0x38)
    edi[3] = arg2
    edi[1] = arg2[1]
    edi[2] = arg2[1]
    *edi = *arg2
    edi[5] = sub_64fcf0(arg2[2], arg2[1], 0)
    long double x87_r0
    edi[0xb] = sub_64fea0(x87_r0, arg2)
    int32_t ecx_2 = arg2[4]
    int32_t* edx_2 = ecx_2 & 0x1fffff
    long double x87_r0_1 = float.t(edx_2)
    
    if (ecx_2 s< 0)
        x87_r0_1 = fneg(x87_r0_1)
    
    int128_t* var_18
    var_18.q = fconvert.d(x87_r0_1)
    int16_t x87control
    long double st0
    st0, x87control = sub_5ab269((ecx_2 s>> 0x15 & 0x3ff) - 0x314, edx_2, ecx_2, var_18, 
        (ecx_2 s>> 0x15 & 0x3ff) - 0x314)
    arg1 = fconvert.s(st0)
    int32_t eax_8
    int32_t ecx_3
    int32_t edx_3
    int32_t mxcsr
    eax_8, ecx_3, edx_3 = sub_685f40(sub_686950(mxcsr, x87control, 0f))
    edi[0xc] = eax_8
    int32_t esi_1 = arg2[5]
    long double x87_r0_4 = float.t(esi_1 & 0x1fffff)
    
    if (esi_1 s< 0)
        x87_r0_4 = fneg(x87_r0_4)
    
    var_18.q = fconvert.d(x87_r0_4)
    int16_t x87control_1
    long double st0_2
    st0_2, x87control_1 = sub_5ab269((esi_1 s>> 0x15 & 0x3ff) - 0x314, edx_3, ecx_3, var_18, 
        (esi_1 s>> 0x15 & 0x3ff) - 0x314)
    arg1 = fconvert.s(st0_2)
    edi[0xd] = sub_685f40(sub_686950(mxcsr, x87control_1, 0f))
    return 0
}
