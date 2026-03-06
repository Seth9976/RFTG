// 函数名称: sub_50dbb0
// 虚拟地址: 0x50dbb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_50dbb0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69863e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_13c
    int32_t eax_2 = __security_cookie ^ &var_13c
    int32_t __saved_edi
    int32_t var_14c = __security_cookie ^ &__saved_edi
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*arg2 != 0)
        sub_4c5870("elState.asset == NULL", &data_83f3d3, "FabDef.cpp", 0x346, "FabUIDraw")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*arg1 != 2)
        sub_4c5870("el.type == FAB_UI", &data_83f3d3, "FabDef.cpp", 0x347, "FabUIDraw")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1[0x1d] != 0)
        float var_118
        float var_f0
        __builtin_memcpy(&var_f0, sub_50c2d0(&var_118, arg2, arg1, &var_118, arg2), 0x28)
        void* esi_2
        
        if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
            esi_2 = &arg1[2]
        else
            esi_2 = arg2 + 0x484
        
        float var_70
        __builtin_memcpy(&var_70, esi_2, 0x24)
        float var_48
        __builtin_memcpy(&var_48, &var_70, 0x24)
        float var_3c
        float* eax_9 = sub_465b90(&var_118, &var_3c)
        int32_t edx = eax_9[1]
        float var_44 = *eax_9
        var_48 = fconvert.s(float.t(1))
        int32_t var_40_1 = edx
        int32_t edx_1 = eax_9[3]
        float eax_10 = var_70
        var_3c = eax_9[2]
        int32_t var_38_1 = edx_1
        float var_6c
        float var_30_1 = var_6c
        float var_34_1 = eax_10
        float var_68
        float var_2c_1 = var_68
        __builtin_memcpy(&var_70, &var_48, 0x20)
        int32_t edx_3 = sub_405f60(&var_118, arg2 + 0x3c)
        __builtin_memcpy(&var_48, &var_118, 0x20)
        float var_138
        sub_405900(&var_138, edx_3, &var_44)
        float ecx_5 = var_138
        float var_104
        long double x87_r7_3 = fconvert.t(var_104) - fconvert.t(data_27e800c)
        float var_130
        float eax_12 = var_130
        float var_134
        var_6c = var_134
        var_70 = ecx_5
        var_138 = fconvert.s(x87_r7_3)
        var_68 = eax_12
        float var_100
        long double x87_r7_5 = fconvert.t(var_100) - fconvert.t(data_27e8010)
        data_30785b4 = 1
        data_30785bc = 0
        float var_134_1 = fconvert.s(x87_r7_5)
        float var_fc
        var_130 = fconvert.s(fconvert.t(var_fc) - fconvert.t(data_27e8014))
        var_138 = fconvert.s(fconvert.t(var_6c) * fconvert.t(var_134_1)
            + fconvert.t(var_70) * fconvert.t(var_138) + fconvert.t(var_68) * fconvert.t(var_130))
        data_30785b8 = fconvert.s(fconvert.t(var_138))
        sub_4dad50()
        
        if ((data_31666f4 & 1) == 0)
            data_31666f4.d |= 1
            int32_t var_c_1 = 0
            data_31666f0 = sub_509140(5, "sys/sprite_3d.material")
            int32_t var_c_2 = 0xffffffff
        
        void* ecx_6 = data_27e7fe4
        int32_t edx_5 = data_31666f0
        float var_d4
        var_138 = fconvert.s(fconvert.t(var_d4))
        float eax_14 = var_138
        *(ecx_6 + 0x254) = edx_5
        float var_cc
        float var_134_2 = fconvert.s(fconvert.t(var_cc))
        var_70 = eax_14
        var_6c = var_134_2
        sub_405e30(&var_118, &var_70, &data_840a00)
        var_48 = var_118
        float var_114
        var_44 = var_114
        float var_10c
        var_3c = var_10c
        int32_t* eax_17 = *(arg2 + 0x60)
        
        if (eax_17 == 0)
            eax_17 = arg1[0x1d]
        
        void* eax_18 = sub_4f4890(eax_17)
        float edx_10 = *(eax_18 + 0xc)
        var_70 = *(eax_18 + 8)
        float ecx_11 = *(eax_18 + 0x10)
        var_6c = edx_10
        float edx_11 = *(eax_18 + 0x14)
        var_68 = ecx_11
        int32_t eax_19
        int80_t st0_1
        st0_1, eax_19 = sub_4fb1d0(&var_48, &var_70)
        __builtin_memcpy(&var_f0, eax_19, 0x40)
        long double x87_r6_5
        
        if (*(arg2 + 0x4a8) s<= *(arg2 + 0x5c))
            x87_r6_5 = fconvert.t(arg1[0x1e])
        else
            x87_r6_5 = fconvert.t(*(arg2 + 0x4ac))
        
        long double x87_r6_6 = fconvert.t(fconvert.s(x87_r6_5))
        var_138 = fconvert.s(x87_r6_6)
        long double x87_r5_1 = fconvert.t(var_138)
        var_138 = fconvert.s(x87_r5_1)
        float var_134_3 = fconvert.s(x87_r5_1)
        float var_b8
        long double x87_r5_2 = fconvert.t(var_b8)
        float var_c0
        long double x87_r3_1 = fconvert.t(var_c0)
        long double x87_r2_2 = fconvert.t(0.5)
        float var_bc
        long double x87_r2_4 = fconvert.t(var_bc)
        float var_b4
        long double x87_r0_1 = fconvert.t(var_b4)
        float var_120_1 = fconvert.s((x87_r2_4 + x87_r0_1) * x87_r2_2)
        long double x87_r0_4 = fconvert.t(fconvert.s((x87_r5_2 + x87_r3_1) * x87_r2_2))
        var_118 = fconvert.s((x87_r3_1 - x87_r0_4) * fconvert.t(var_138) + x87_r0_4)
        float var_c0_1 = var_118
        long double x87_r2_6 = fconvert.t(var_120_1)
        float var_b8_1 = fconvert.s(x87_r0_4 + (x87_r5_2 - x87_r0_4) * fconvert.t(var_138))
        long double x87_r1_6 = fconvert.t(var_134_3)
        float var_bc_1 = fconvert.s((x87_r2_4 - x87_r2_6) * x87_r1_6 + x87_r2_6)
        float var_b4_1 = fconvert.s(x87_r2_6 + x87_r1_6 * (x87_r0_1 - x87_r2_6))
        var_138 = fconvert.s((fconvert.t(var_68) + fconvert.t(var_70)) * x87_r2_2)
        float var_e4
        long double x87_r4_11 = fconvert.t(var_e4)
        float var_124_3 = fconvert.s(fconvert.t(var_138) * x87_r4_11)
        void* eax_23 = data_27e7fe0
        float var_120_2 = fconvert.s(
            fconvert.t(fconvert.s(x87_r2_2 * (fconvert.t(var_6c) + fconvert.t(edx_11)))) * x87_r4_11)
        int32_t edx_15 = *(eax_23 + 0x2c)
        int32_t esi_7 = *(eax_23 + 0x28)
        int32_t edx_16 = *(eax_23 + 0x30)
        int32_t edx_17 = *(eax_23 + 0x34)
        var_138 = fconvert.s(float.t(1) - x87_r6_6)
        int32_t edx_18 = *(eax_23 + 0x38)
        long double x87_r3_15 = fconvert.t(var_138)
        *(eax_23 + 0x28) = var_48
        *(eax_23 + 0x2c) = var_44
        var_138 = fconvert.s(fconvert.t(var_124_3) * x87_r3_15)
        int32_t var_110
        *(eax_23 + 0x30) = var_110
        *(eax_23 + 0x34) = var_3c
        *(eax_23 + 0x38) = 0xffffffff
        int32_t* eax_24 = *(arg2 + 0x60)
        float var_134_5 = fconvert.s(x87_r3_15 * fconvert.t(var_120_2))
        var_f0 = fconvert.s(fconvert.t(var_f0) + fconvert.t(var_138))
        float var_ec
        float var_ec_1 = fconvert.s(fconvert.t(var_ec) + fconvert.t(var_134_5))
        float var_e4_1 = fconvert.s(x87_r6_6 * x87_r4_11)
        
        if (eax_24 == 0)
            eax_24 = arg1[0x1d]
        
        int32_t var_150_4 = sub_50d440(eax_24)
        float var_150_5 = fconvert.s(float.t(1))
        sub_4f9fe0(*(arg2 + 4), &var_f0)
        void* eax_26 = data_27e7fe0
        *(eax_26 + 0x28) = esi_7
        *(eax_26 + 0x2c) = edx_15
        *(eax_26 + 0x30) = edx_16
        *(eax_26 + 0x34) = edx_17
        *(eax_26 + 0x38) = edx_18
        void* eax_27 = data_27e7fe4
        *(eax_27 + 0x254) = 0
        __builtin_memcpy(eax_27 + 0x9c, 0x83faf8, 0x40)
        *(eax_27 + 0xdc) = 0
        result = sub_4e2080()
        data_30785b4 = 0
        data_30785bc = 0
        data_30785b8 = fconvert.s(float.t(0))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_13c)
    return result
}
