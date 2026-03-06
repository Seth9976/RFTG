// 函数名称: sub_64fc10
// 虚拟地址: 0x64fc10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64fc10(float arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    long double x87_r7 = float.t(0)
    long double x87_r6 = fconvert.t(arg1)
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    x87_r6 - x87_r7
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t edi = 0
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        edi = 0x80000000
        arg1 = fconvert.s(fneg(x87_r7))
        x87_r7 = fconvert.t(arg1)
    
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686ac0(mxcsr, x87control, x87_r7)
    int16_t x87control_2
    long double st0_1
    st0_1, x87control_2 = sub_686ac0(mxcsr, x87control_1, fconvert.t(2.0))
    double var_1c = fconvert.d(fconvert.t(fconvert.d(st0)) / st0_1 + fconvert.t(0.001))
    int32_t eax_1
    int32_t ecx
    int32_t edx
    eax_1, ecx, edx = sub_685f40(sub_686950(mxcsr, x87control_2))
    var_1c:4.d = 0x14 - eax_1
    int16_t x87control_3
    long double st0_3
    st0_3, x87control_3 = sub_5ab269(0x14 - eax_1, edx, ecx, fconvert.d(fconvert.t(arg1)))
    double var_1c_1 = fconvert.d(st0_3 + fconvert.t(0.5))
    return sub_685f40(sub_686950(mxcsr, x87control_3)) | (eax_1 + 0x300) << 0x15 | edi
}
