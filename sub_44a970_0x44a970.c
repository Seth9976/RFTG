// 函数名称: sub_44a970
// 虚拟地址: 0x44a970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_44a970(int32_t arg1, float* arg2, int32_t arg3, void* arg4, void* arg5, float arg6, char arg7)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6976aa
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_14c
    int32_t eax_2 = __security_cookie ^ &var_14c
    int32_t __saved_edi
    int32_t var_15c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edx = data_27e7a40
    char* result = *(edx + 0x548)
    
    if (*(result + 0xbfac) == *(arg4 + 0xac) || arg3 == 0xffffffff || arg3 == *(edx + 0x74)
        || arg3 == *(result + 0xbfb0))
    label_44aa00:
        int32_t* var_138_1 = data_307c1dc
        
        if (arg5 s>= 0xc)
            var_138_1 = data_307c1d8
        
        float var_128_1 = fconvert.s(fconvert.t(arg2[5]))
        void var_120
        void* var_160 = &var_120
        float var_124_1 = fconvert.s(fconvert.t(arg2[6]))
        int32_t eax_6
        int80_t st0_1
        st0_1, eax_6 = sub_40a930(var_160)
        float var_60
        __builtin_memcpy(&var_60, eax_6, 0x40)
        void* eax_7 = sub_4f4890(var_138_1)
        long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
        long double x87_r5_3 = fconvert.t(0.5)
        float var_130_2 = fconvert.s(fconvert.t(fconvert.s(x87_r5_1
            * fconvert.t(fconvert.s(fconvert.t(*(eax_7 + 0x14)) - fconvert.t(*(eax_7 + 0xc))))))
            * x87_r5_3)
        float ecx_3 = fconvert.s(fconvert.t(var_128_1) - fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(*(eax_7 + 0x10)) - fconvert.t(*(eax_7 + 8)))) * x87_r5_1))
            * x87_r5_3)))
        var_60 = ecx_3
        float var_5c_1 = fconvert.s(fconvert.t(var_124_1) - fconvert.t(var_130_2))
        float var_54_1 = fconvert.s(fconvert.t(*arg2))
        
        if (arg7 != 0)
            ecx_3 = *(arg4 + 0xac)
            float var_58
            
            if (*(*(data_27e7a40 + 0x548) + 0xbfac) != ecx_3)
                float var_58_1 = fconvert.s(x87_r5_3 * fconvert.t(var_58))
        
        var_160 = ecx_3
        var_160 = fconvert.s(float.t(1))
        sub_4f5f30(var_138_1, &var_60, 0, var_160)
        
        if ((data_3166468 & 1) == 0)
            data_3166468.d |= 1
            int32_t var_c_1 = 0
            int32_t* eax_11 = data_307c1dc
            var_160 = "goal_sm_5vp"
            int32_t eax_12 = sub_4f5220(eax_11, var_160)
            int32_t* ecx_5 = data_307c1dc
            data_315fca8 = eax_12
            int32_t eax_13 = sub_4f5220(ecx_5, "goal_sm_each_color")
            int32_t* edx_5 = data_307c1dc
            data_315fcac = eax_13
            data_315fcb0 = sub_4f5220(edx_5, "goal_sm_alien")
            int32_t eax_16 = sub_4f5220(data_307c1dc, "goal_sm_discard")
            int32_t* ecx_6 = data_307c1dc
            data_315fcb4 = eax_16
            int32_t eax_17 = sub_4f5220(ecx_6, "goal_sm_allphases")
            int32_t* edx_6 = data_307c1dc
            data_315fcb8 = eax_17
            data_315fcbc = sub_4f5220(edx_6, "small_six")
            int32_t eax_20 = sub_4f5220(data_307c1dc, "small_chromosome")
            int32_t* ecx_7 = data_307c1dc
            data_315fcc0 = eax_20
            int32_t eax_21 = sub_4f5220(ecx_7, "small_four_goods")
            int32_t* edx_7 = data_307c1dc
            var_160 = "small_eight_tableau"
            data_315fcc4 = eax_21
            data_315fcc8 = sub_4f5220(edx_7, var_160)
            int32_t eax_24 = sub_4f5220(data_307c1dc, "small_takeover")
            int32_t* ecx_8 = data_307c1dc
            data_315fccc = eax_24
            int32_t eax_25 = sub_4f5220(ecx_8, "small_prestige_vp")
            int32_t* edx_8 = data_307c1dc
            data_315fcd0 = eax_25
            data_315fcd4 = sub_4f5220(edx_8, "small_imperium")
            int32_t eax_28 = sub_4f5220(data_307c1d8, "goal_large_sixmilitary")
            int32_t* ecx_9 = data_307c1d8
            data_315fcd8 = eax_28
            int32_t eax_29 = sub_4f5220(ecx_9, "large_blue_brown")
            int32_t* edx_9 = data_307c1d8
            data_315fcdc = eax_29
            data_315fce0 = sub_4f5220(edx_9, "large_dev")
            int32_t eax_32 = sub_4f5220(data_307c1d8, "large_production")
            int32_t* ecx_10 = data_307c1d8
            var_160 = "large_explore"
            data_315fce4 = eax_32
            int32_t eax_33 = sub_4f5220(ecx_10, var_160)
            int32_t* edx_10 = data_307c1d8
            data_315fce8 = eax_33
            data_315fcec = sub_4f5220(edx_10, "large_rebel")
            int32_t eax_36 = sub_4f5220(data_307c1d8, "large_prestige")
            int32_t* ecx_11 = data_307c1d8
            data_315fcf0 = eax_36
            data_315fcf4 = sub_4f5220(ecx_11, "large_consume")
            int32_t var_c_2 = 0xffffffff
        
        int32_t eax_38 = (&data_315fca8)[arg5]
        var_160 = &var_60
        float* var_164_4 = &var_60
        __builtin_memcpy(&var_120, sub_4f62d0(eax_38, fconvert.s(float.t(1)), arg5), 0x40)
        int32_t eax_40 = sub_4f4890(var_138_1)
        void* ecx_15 = eax_38 * 0x118 + *eax_40
        int32_t* ecx_17
        int32_t edx_12
        int80_t st0_3
        st0_3, ecx_17, edx_12 = sub_4f67d0(eax_40, nullptr, *(ecx_15 + 0x68), ecx_15, &data_be1ae0, 
            &var_120, nullptr, nullptr)
        result = arg5 - 0xd
        
        switch (result)
            case nullptr, 3, 4, 5, 6
                int32_t eax_43
                
                if ((data_3166468 & 2) != 0)
                    eax_43 = data_3166464
                else
                    data_3166468.d |= 2
                    int32_t var_c_3 = 1
                    ecx_17 = data_307c1d8
                    var_160 = "txt3"
                    eax_43, edx_12 = sub_4f5220(ecx_17, var_160)
                    data_3166464 = eax_43
                    int32_t var_c_4 = 0xffffffff
                
                var_160 = &var_60
                int32_t* var_164_7 = ecx_17
                __builtin_memcpy(&var_120, sub_4f62d0(eax_43, fconvert.s(float.t(1)), edx_12), 0x40)
                result = sub_4f5010(&var_120, eax_43 * 0x118 + *sub_4f4890(var_138_1), &data_85f7c4, 0)
            case 1, 2
                if ((data_3166468 & 4) == 0)
                    data_3166468.d |= 4
                    int32_t var_c_5 = 2
                    int32_t* eax_46 = data_307c1d8
                    var_160 = "txt3"
                    data_3166460 = sub_4f5220(eax_46, var_160)
                    int32_t var_c_6 = 0xffffffff
                
                var_160 = nullptr
                int32_t* var_164_10 = ecx_17
                result =
                    sub_4f50c0(var_138_1, data_3166460, &data_85f7c8, fconvert.s(float.t(1)), var_160)
    else
        long double x87_r7_1 = float.t(1)
        long double temp1_1 = fconvert.t(arg6)
        x87_r7_1 - temp1_1
        result.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
        
        if ((result:1.b & 0x41) == 0)
            goto label_44aa00
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_14c)
    return result
}
