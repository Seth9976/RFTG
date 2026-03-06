// 函数名称: sub_44a3b0
// 虚拟地址: 0x44a3b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_44a3b0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5, float arg6, char arg7)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69770a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_14c
    int32_t eax_2 = __security_cookie ^ &var_14c
    int32_t __saved_edi
    int32_t var_15c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edx = data_27e7a40
    void* result = *(edx + 0x548)
    
    if (*(result + 0xbfac) == *(arg4 + 0xac) || arg3 == 0xffffffff || arg3 == *(edx + 0x74)
        || arg3 == *(result + 0xbfb0))
    label_44a440:
        int32_t* var_138_1 = data_307c1dc
        
        if (arg5 s>= 0xc)
            var_138_1 = data_307c1d8
        
        sub_4dad50()
        long double x87_r7_2 = float.t(0)
        float var_6c_1 = fconvert.s(x87_r7_2)
        float var_13c_1 = fconvert.s(fconvert.t(2048f))
        float var_68_1 = fconvert.s(fconvert.t(3238f))
        float var_70 = fconvert.s(x87_r7_2)
        float var_64_1 = var_13c_1
        int32_t eax_7
        int80_t st0_1
        st0_1, eax_7 = sub_4fb1d0(&var_70, &var_70)
        float var_60
        __builtin_memcpy(&var_60, eax_7, 0x40)
        void* eax_8 = sub_4f4890(var_138_1)
        float edx_3 = *(eax_8 + 0xc)
        float edx_4 = *(eax_8 + 0x14)
        var_70 = fconvert.s(fconvert.t(*(eax_8 + 0x10)) - fconvert.t(*(eax_8 + 8)))
        float var_6c_2 = fconvert.s(fconvert.t(edx_4) - fconvert.t(edx_3))
        long double x87_r5_1 = fconvert.t(-0.5)
        var_60 = fconvert.s(fconvert.t(var_70) * x87_r5_1)
        float ecx_6 = fconvert.s(x87_r5_1 * fconvert.t(var_6c_2))
        float var_5c_1 = ecx_6
        
        if (arg7 != 0)
            ecx_6 = *(arg4 + 0xac)
            float var_58
            
            if (*(*(data_27e7a40 + 0x548) + 0xbfac) != ecx_6)
                float var_58_1 = fconvert.s(fconvert.t(var_58) * fconvert.t(0.5))
        
        float var_160_2 = ecx_6
        sub_4f5f30(var_138_1, &var_60, 0, fconvert.s(float.t(1)))
        char const* const var_170
        
        if ((data_3166474 & 1) == 0)
            data_3166474.d |= 1
            int32_t var_c_1 = 0
            int32_t eax_12 = sub_4f5220(data_307c1dc, "goal_sm_5vp")
            int32_t* ecx_8 = data_307c1dc
            char const* const var_168_2 = "goal_sm_each_color"
            data_315fc58 = eax_12
            int32_t eax_13 = sub_4f5220(ecx_8, var_168_2)
            int32_t* edx_6 = data_307c1dc
            var_170 = "goal_sm_alien"
            data_315fc5c = eax_13
            data_315fc60 = sub_4f5220(edx_6, var_170)
            int32_t eax_16 = sub_4f5220(data_307c1dc, "goal_sm_discard")
            int32_t* ecx_9 = data_307c1dc
            data_315fc64 = eax_16
            int32_t eax_17 = sub_4f5220(ecx_9, "goal_sm_allphases")
            int32_t* edx_7 = data_307c1dc
            data_315fc68 = eax_17
            data_315fc6c = sub_4f5220(edx_7, "small_six")
            int32_t eax_20 = sub_4f5220(data_307c1dc, "small_chromosome")
            int32_t* ecx_10 = data_307c1dc
            data_315fc70 = eax_20
            int32_t eax_21 = sub_4f5220(ecx_10, "small_four_goods")
            int32_t* edx_8 = data_307c1dc
            char const* const var_160_5 = "small_eight_tableau"
            data_315fc74 = eax_21
            data_315fc78 = sub_4f5220(edx_8, var_160_5)
            int32_t eax_24 = sub_4f5220(data_307c1dc, "small_takeover")
            int32_t* ecx_11 = data_307c1dc
            var_170 = "small_prestige_vp"
            data_315fc7c = eax_24
            int32_t eax_25 = sub_4f5220(ecx_11, var_170)
            int32_t* edx_9 = data_307c1dc
            data_315fc80 = eax_25
            data_315fc84 = sub_4f5220(edx_9, "small_imperium")
            int32_t eax_28 = sub_4f5220(data_307c1d8, "goal_large_sixmilitary")
            int32_t* ecx_12 = data_307c1d8
            data_315fc88 = eax_28
            int32_t eax_29 = sub_4f5220(ecx_12, "large_blue_brown")
            int32_t* edx_10 = data_307c1d8
            data_315fc8c = eax_29
            data_315fc90 = sub_4f5220(edx_10, "large_dev")
            int32_t eax_32 = sub_4f5220(data_307c1d8, "large_production")
            int32_t* ecx_13 = data_307c1d8
            char const* const var_160_6 = "large_explore"
            data_315fc94 = eax_32
            int32_t eax_33 = sub_4f5220(ecx_13, var_160_6)
            int32_t* edx_11 = data_307c1d8
            char const* const var_168_4 = "large_rebel"
            data_315fc98 = eax_33
            data_315fc9c = sub_4f5220(edx_11, var_168_4)
            int32_t* eax_35 = data_307c1d8
            var_170 = "large_prestige"
            int32_t eax_36 = sub_4f5220(eax_35, var_170)
            int32_t* ecx_14 = data_307c1d8
            data_315fca0 = eax_36
            data_315fca4 = sub_4f5220(ecx_14, "large_consume")
            int32_t var_c_2 = 0xffffffff
        
        float eax_38 = (&data_315fc58)[arg5]
        float* var_160_7 = &var_60
        float* var_164_6 = &var_60
        float var_164_7 = fconvert.s(float.t(1))
        var_70 = eax_38
        void var_130
        __builtin_memcpy(&var_130, sub_4f62d0(eax_38, var_164_7, arg5), 0x40)
        int32_t eax_40 = sub_4f4890(var_138_1)
        void* ecx_18 = var_70 i* 0x118 + *eax_40
        void* var_168_5 = nullptr
        int32_t* var_16c_5 = nullptr
        var_170 = &var_130
        int32_t* ecx_20
        int32_t edx_13
        int80_t st0_3
        st0_3, ecx_20, edx_13 = sub_4f67d0(ecx_18, nullptr, *(ecx_18 + 0x68), ecx_18, &data_be1ae0, 
            var_170, var_16c_5, var_168_5)
        
        if (arg5 - 0xd u<= 6)
            switch (arg5)
                case 0xd, 0x10, 0x11, 0x12, 0x13
                    float eax_45
                    
                    if ((data_3166474 & 2) != 0)
                        eax_45 = data_3166470
                    else
                        data_3166474.d |= 2
                        int32_t var_c_3 = 1
                        ecx_20 = data_307c1d8
                        eax_45, edx_13 = sub_4f5220(ecx_20, "txt3")
                        data_3166470 = eax_45
                        int32_t var_c_4 = 0xffffffff
                    
                    float* var_160_9 = &var_60
                    int32_t* var_164_9 = ecx_20
                    float var_164_10 = fconvert.s(float.t(1))
                    var_70 = eax_45
                    __builtin_memcpy(&var_130, sub_4f62d0(eax_45, var_164_10, edx_13), 0x40)
                    int32_t eax_47 = sub_4f4890(var_138_1)
                    sub_4f5010(&var_130, var_70 i* 0x118 + *eax_47, &data_85f7c4, 0)
                case 0xe, 0xf
                    if ((data_3166474 & 4) == 0)
                        data_3166474.d |= 4
                        int32_t var_c_5 = 2
                        data_316646c = sub_4f5220(data_307c1d8, "txt3")
                        int32_t var_c_6 = 0xffffffff
                    
                    int32_t var_160_11 = 0
                    int32_t* var_164_12 = ecx_20
                    float var_164_13 = fconvert.s(float.t(1))
                    int32_t ecx_22 = data_316646c
                    int32_t* var_168_7 = &data_85f7c8
                    var_170 = var_138_1
                    sub_4f50c0(var_170, ecx_22, var_168_7, var_164_13, var_160_11)
        
        void* eax_50 = data_27e7fe4
        __builtin_memcpy(eax_50 + 0x9c, 0x83faf8, 0x40)
        *(eax_50 + 0xdc) = 0
        result = sub_4e2080()
    else
        long double x87_r7_1 = float.t(1)
        long double temp1_1 = fconvert.t(arg6)
        x87_r7_1 - temp1_1
        result.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
        
        if ((result:1.b & 0x41) == 0)
            goto label_44a440
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_14c)
    return result
}
