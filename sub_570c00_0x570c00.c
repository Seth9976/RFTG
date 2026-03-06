// 函数名称: sub_570c00
// 虚拟地址: 0x570c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_570c00(int32_t* arg1 @ esi, float* arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_6
    float ecx
    int32_t edx
    int32_t edx_1
    
    if (arg3 - 2 u<= 9)
        switch (arg3)
            case 2, 9
                long double x87_r6 = float.t(0)
                long double x87_r7_1 = fconvert.t(arg2[1]) * x87_r6
                long double x87_r6_1 = x87_r6 * fconvert.t(*arg2)
                *arg1 = 0
                arg1[1] = 0
                arg1[2] = 0x3f800000
                arg1[3] =
                    fconvert.s(fneg(fconvert.t(fconvert.s(x87_r7_1 + x87_r6_1 + fconvert.t(arg2[2])))))
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return arg1
            case 3, 0xa
                long double x87_r6_2 = float.t(0)
                long double x87_r7_7 = fconvert.t(arg2[1]) * x87_r6_2
                long double x87_r5 = fconvert.t(*arg2)
                *arg1 = 0x3f800000
                arg1[1] = 0
                arg1[2] = 0
                arg1[3] = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r7_7 + x87_r5
                    + x87_r6_2 * fconvert.t(arg2[2])))))
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return arg1
            case 4, 0xb
                long double x87_r6_4 = float.t(0)
                long double x87_r7_13 = fconvert.t(*arg2) * x87_r6_4
                long double x87_r5_1 = fconvert.t(arg2[1])
                *arg1 = 0
                arg1[1] = 0x3f800000
                arg1[2] = 0
                arg1[3] = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r7_13 + x87_r5_1
                    + x87_r6_4 * fconvert.t(arg2[2])))))
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return arg1
            case 5
                float var_50
                sub_465a20(&var_50, edx, &data_273abc4)
                ecx = var_50
                int32_t var_4c
                edx_1 = var_4c
                int32_t var_48
                int32_t var_10 = var_48
                void var_60
                eax_6 = &var_60
            label_570c41:
                float var_18 = ecx
                int32_t var_14 = edx_1
                sub_4058c0(eax_6, arg2, &var_18)
                int32_t edx_3 = eax_6[1]
                *arg1 = *eax_6
                int32_t ecx_3 = eax_6[2]
                arg1[1] = edx_3
                int32_t edx_4 = eax_6[3]
                arg1[2] = ecx_3
                arg1[3] = edx_4
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return arg1
            case 6
                float var_30
                sub_466130(&var_30, edx, &data_273abc4)
                ecx = var_30
                int32_t var_2c
                edx_1 = var_2c
                int32_t var_28
                int32_t var_10_2 = var_28
                void var_80
                eax_6 = &var_80
                goto label_570c41
            case 7
                float var_40
                sub_405900(&var_40, edx, &data_273abc4)
                ecx = var_40
                int32_t var_3c
                edx_1 = var_3c
                int32_t var_38
                int32_t var_10_1 = var_38
                void var_70
                eax_6 = &var_70
                goto label_570c41
    sub_4c5870("Halt", &data_83f3d3, "Editor\FabEditor.cpp", 0x2f7, "CalcDragPlane")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
