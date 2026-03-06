// 函数名称: sub_50c1b0
// 虚拟地址: 0x50c1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_50c1b0(int32_t* arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = *arg2
    float eax_6
    float ecx_3
    float edx
    
    if (ecx == 2)
        int32_t* eax_7 = arg2[0x1d]
        
        if (eax_7 == 0)
        label_50c1ce:
            eax_6 = 1f
            ecx_3 = 1f
            edx = 1f
        else
            void* eax_8 = sub_4f4890(eax_7)
            long double x87_r6_1 = fconvert.t(0.0010000000474974513)
            eax_6 = fconvert.s(
                fconvert.t(fconvert.s(fconvert.t(*(eax_8 + 0x10)) - fconvert.t(*(eax_8 + 8))))
                * x87_r6_1)
            ecx_3 = fconvert.s(float.t(0) * x87_r6_1)
            edx = fconvert.s(x87_r6_1
                * fconvert.t(fconvert.s(fconvert.t(*(eax_8 + 0x14)) - fconvert.t(*(eax_8 + 0xc)))))
    else
        if (ecx != 3)
            goto label_50c1ce
        
        void* eax_5 = *sub_4d5460(arg2[0x16])
        ecx_3 = fconvert.s(fconvert.t(*(eax_5 + 0x30)) - fconvert.t(*(eax_5 + 0x24)))
        eax_6 = fconvert.s(fconvert.t(*(eax_5 + 0x2c)) - fconvert.t(*(eax_5 + 0x20)))
        edx = fconvert.s(fconvert.t(*(eax_5 + 0x34)) - fconvert.t(*(eax_5 + 0x28)))
    
    *arg1 = eax_6
    arg1[1] = ecx_3
    arg1[2] = edx
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
