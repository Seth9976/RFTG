// 函数名称: sub_4066a0
// 虚拟地址: 0x4066a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4066a0(int32_t arg1, float arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int80_t st0_10
    long double x87_r0
    long double x87_r7_54
    
    switch (arg1)
        case 5
            long double x87_r7_16 = fconvert.t(arg2)
            float var_8_2 =
                fconvert.s(x87_r7_16 * x87_r7_16 * (fconvert.t(3.0) - (x87_r7_16 + x87_r7_16)))
        label_4068ac:
            float var_8_12 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
            unimplemented  {fstp dword [ebp-0x4], st0}
            unimplemented  {fld st0, dword [ebp+0x10]}
            unimplemented  {fld st0, dword [ebp+0xc]}
            unimplemented  {fld st0, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fsubp st2, st0}
            unimplemented  {fld st0, dword [ebp-0x4]}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            float var_8_13 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
            unimplemented  {fstp dword [ebp-0x4], st0}
            unimplemented  {fld st0, dword [ebp-0x4]}
            return 
        case 6
            int32_t var_c_1 = ecx
            int80_t st0_2
            st0_2, arg1 = sub_406460(fconvert.s(sub_406460(fconvert.s(fconvert.t(arg2)))))
            goto label_4068ac
        case 7
            int32_t var_c_4 = ecx
            int80_t st0_3
            st0_3, arg1 = sub_406460(fconvert.s(fconvert.t(arg2)))
            goto label_4068ac
        case 9
            goto label_4068ac
        case 0xa
            int32_t var_c_6 = ecx
            float var_8_5 = fconvert.s(sub_4064f0(fconvert.s(fconvert.t(arg2))))
            goto label_4068ac
        case 0xb
            int32_t var_c_8 = ecx
            sub_4064f0(fconvert.s(fconvert.t(arg2)))
            goto label_4068ac
        case 0xc
            int32_t var_c_10 = ecx
            sub_4064f0(fconvert.s(fconvert.t(arg2)))
            goto label_4068ac
        case 0xd
            int32_t var_c_12 = ecx
            sub_4064f0(fconvert.s(fconvert.t(arg2)))
            goto label_4068ac
        case 0xe
            x87_r7_54 = fconvert.t(fconvert.s(fconvert.t(data_30d7344) * fconvert.t(arg2)))
        label_4068a0:
            int32_t var_c_19 = ecx
            int80_t st0_11
            st0_11, arg1 = sub_406680(fconvert.s(x87_r7_54))
            goto label_4068ac
        case 0xf
            long double x87_r7_55 = fconvert.t(arg2)
            x87_r7_54 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_55 * x87_r7_55
                * (fconvert.t(3.0) - (x87_r7_55 + x87_r7_55)))) * fconvert.t(data_30d7344)))
            goto label_4068a0
        case 0x13
            int32_t var_c_14 = ecx
            int80_t st0_8
            st0_8, arg1 = sub_406520(fconvert.s(fconvert.t(arg2)))
            goto label_4068ac
        case 0x14
            st0_10, arg1 = sub_406610(x87_r0, fconvert.s(fconvert.t(arg2)), fconvert.s(fconvert.t(10f)))
            goto label_4068ac
        case 0x15
            st0_10, arg1 = sub_406610(x87_r0, fconvert.s(fconvert.t(arg2)), fconvert.s(fconvert.t(25f)))
            goto label_4068ac
        case 0x16
            int32_t var_c_16 = ecx
            int80_t st0_9
            st0_9, arg1 = sub_406580(x87_r0, fconvert.s(fconvert.t(arg2)))
            goto label_4068ac
    
    sub_4c5870("Halt", &data_83f3d3, "c:\ax2010\engine\MathFunctions.cpp", 0x1f2, "XCurveEvalNormal")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
