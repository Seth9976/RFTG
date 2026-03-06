// 函数名称: sub_56f590
// 虚拟地址: 0x56f590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_56f590(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = arg3[3]
    int32_t ecx = arg3[4]
    float edi = arg3[2]
    int32_t var_78 = 0x3f800000
    int32_t var_74 = 0x3f800000
    int32_t var_70 = 0x3f800000
    float var_6c
    
    if (*arg3 - 1 u> 1)
        var_6c = edi
        int32_t var_68_4 = arg3[3]
        int32_t var_64_4 = arg3[4]
        int32_t var_54_2 = 0x3f800000
        int32_t var_50_2 = 0x3f800000
        int32_t var_4c_2 = 0x3f800000
        int32_t var_60_2 = arg3[5]
        int32_t var_5c_2 = arg3[6]
        int32_t var_58_2 = arg3[7]
    else
        int32_t eax_5 = arg3[0xf]
        float ebx_1 = data_27e800c
        
        if (eax_5 u> 3)
            sub_4c5870("Halt", &data_83f3d3, "Editor\FabEditor.cpp", 0x19f, "ElTransform")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float var_34
        float var_28
        float var_24
        float* eax_15
        void* edi_1
        
        switch (eax_5)
            case 0
                int32_t ecx_2 = arg3[3]
                var_6c = edi
                int32_t var_68 = ecx_2
                int32_t var_54 = 0x3f800000
                int32_t var_64 = arg3[4]
                int32_t var_50 = var_74
                int32_t var_4c = var_70
                int32_t var_60 = arg3[5]
                int32_t var_5c = arg3[6]
                int32_t var_58 = arg3[7]
            case 1
                float var_b8
                sub_465a20(&var_b8, 0x3f800000, &data_27e7ffc)
                float ecx_5 = var_b8
                float var_c8
                float var_b4
                sub_405900(&var_c8, var_b4, &data_27e7ffc)
                float var_c4
                float var_c0
                float var_b0
                sub_4e21d0(0, edi, arg3[3], arg3[4], ebx_1, data_27e8010, data_27e8014, ecx_5, var_b4, 
                    var_b0, var_c8, var_c4, var_c0, &var_24)
                long double x87_r7_1 = fconvert.t(-0f)
                float var_44_2 = fconvert.s(x87_r7_1)
                float var_18_1 = fconvert.s(x87_r7_1)
                int32_t var_64_1 = ecx
                int32_t var_68_1 = eax_2
                float var_10_1 = fconvert.s(fconvert.t(-1f))
                var_6c = edi
                float var_14_1 = var_44_2
                eax_15 = sub_4137a0(0x840740, &var_34)
                void var_88
                edi_1 = &var_88
            label_56f724:
                float ecx_13 = *eax_15
                var_24 = eax_15[1]
                int32_t edx_10 = eax_15[3]
                var_28 = ecx_13
                int32_t var_1c_1 = edx_10
                int32_t var_20_1 = eax_15[2]
                goto label_56f73e
            case 2
                sub_4e21d0(1, edi, arg3[3], arg3[4], ebx_1, data_27e8010, data_27e8014, 0f, 0f, 1f, 0f, 
                    0f, 0f, &var_34)
                long double x87_r7_5 = fconvert.t(-0f)
                float var_18_3 = fconvert.s(x87_r7_5)
                float var_40_4 = fconvert.s(fconvert.t(-1f))
                int32_t var_68_3 = eax_2
                int32_t var_64_3 = ecx
                float var_14_3 = fconvert.s(x87_r7_5)
                var_6c = edi
                float var_10_3 = var_40_4
                float* eax_25 = sub_4137a0(0x840740, &var_24)
                float ecx_26 = eax_25[1]
                var_28 = *eax_25
                int32_t edx_22 = eax_25[2]
                int32_t eax_26 = eax_25[3]
                var_24 = ecx_26
                int32_t var_20_2 = edx_22
                int32_t var_1c_2 = eax_26
                void var_98
                edi_1 = &var_98
            label_56f73e:
                int32_t* eax_16
                int80_t st0_1
                st0_1, eax_16 = sub_465c60(&var_28, edi_1)
                int32_t var_60_1 = *eax_16
                int32_t var_5c_1 = eax_16[1]
                int32_t var_58_1 = eax_16[2]
                int32_t var_54_1 = var_78
                int32_t var_50_1 = var_74
                int32_t var_4c_1 = var_70
            case 3
                float var_d8
                sub_466130(&var_d8, 0x3f800000, &data_27e7ffc)
                float var_d4
                float var_d0
                sub_4e21d0(3, edi, arg3[3], arg3[4], ebx_1, data_27e8010, data_27e8014, 0f, 0f, 1f, 
                    var_d8, var_d4, var_d0, &var_34)
                long double x87_r7_3 = fconvert.t(-0f)
                float var_44_3 = fconvert.s(x87_r7_3)
                float var_18_2 = fconvert.s(x87_r7_3)
                int32_t var_64_2 = ecx
                int32_t var_68_2 = eax_2
                float var_10_2 = fconvert.s(fconvert.t(-1f))
                var_6c = edi
                float var_14_2 = var_44_3
                eax_15 = sub_4137a0(0x840740, &var_24)
                void var_a8
                edi_1 = &var_a8
                goto label_56f724
    
    __builtin_memcpy(arg4, &var_6c, 0x24)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}
