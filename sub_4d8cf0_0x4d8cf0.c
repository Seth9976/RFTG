// 函数名称: sub_4d8cf0
// 虚拟地址: 0x4d8cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4d8cf0(int32_t arg1, float* arg2, int32_t* arg3, float* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692a6c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = data_27e7fe4
    bool cond:0 = *(esi + 0xdf) == 0
    int32_t* eax_4 = arg6
    int32_t* var_50 = arg3
    uint32_t result
    int32_t* var_54
    float var_48
    float var_44
    
    if (not(cond:0))
        *(esi + 0xe4)
        *(esi + 0xe0)
        int32_t i = 0
        long double x87_r6_1 = float.t(1)
        var_54 = &var_44
        float var_74_1 = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r6_1 / fconvert.t(*(esi + 0xe4))))))
        
        do
            int32_t* var_a4_1 = arg3
            float var_6c_1 =
                fconvert.s(fconvert.t(arg2[i * 2]) * fconvert.t(fconvert.s(x87_r6_1 / x87_r6_1)))
            int16_t x87control_1
            long double st0_1
            st0_1, x87control_1 = sub_406680(fconvert.s(fconvert.t(var_6c_1)))
            var_54[-1] = fconvert.s(fconvert.t(*(esi + 0xe0)) * fconvert.t(fconvert.s(st0_1)))
            int32_t mxcsr
            long double st0_2
            st0_2, arg3 = sub_686860(mxcsr, x87control_1, fconvert.t(fconvert.s(fconvert.t(var_6c_1))))
            i += 1
            void* eax_7 = &var_54[3]
            long double x87_r7_18 =
                fconvert.t(*(esi + 0xe0)) * fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0_2))))
            var_54 = eax_7
            *(eax_7 - 0xc) = fconvert.s(x87_r7_18)
            *(eax_7 - 8) = fconvert.s(fconvert.t(arg2[i * 2 - 1]) * fconvert.t(var_74_1))
        while (i s< 4)
        
        int32_t* eax_8 = eax_4
        
        if (eax_8 == 0)
            int32_t* esi_1 = *(esi + 0x254)
            
            if (esi_1 == 0)
                if ((data_31657e4 & 1) == 0)
                    data_31657e4.d |= 1
                    int32_t var_8_1 = 0
                    data_31657e0 = sub_509140(5, "sys/sprite_3d.material")
                    int32_t var_8_2 = 0xffffffff
                
                eax_8 = data_31657e0
            else
                eax_8 = esi_1
        
        result = sub_4deaf0(eax_8, arg5, &var_48, arg4, var_50, eax_8)
    else
        float var_38
        
        if (*(esi + 0xdc) == 0)
            int32_t* edx_9 = sub_54b920(1)
            void* ebx_1 = data_27e7fe0
            
            if (*(ebx_1 + 0x1d) == 0)
                sub_4c5870("gpSpriteAppData->spritesDrawing", &data_83f3d3, "Sprite.cpp", 0x159, 
                    "SpriteDrawVerts")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* ecx_10 = var_50
            float* var_4c_6 = arg4
            int32_t* esi_3 = ecx_10
            
            if (ecx_10 != 0)
                int32_t* var_a4_5 = ecx_10
                
                if (sub_50bf30(arg4, edx_9) != 0)
                    var_4c_6 = &var_38
                    esi_3 = *(*sub_4ca0f0(esi_3) + 0x24)
                
                ebx_1 = data_27e7fe0
            
            int32_t eax_18 = *(ebx_1 + 0x18)
            
            if (eax_18 == 0 || eax_18 == 0x400)
            label_4d92d9:
                sub_4d8b30()
                ebx_1 = data_27e7fe0
                *(ebx_1 + 0x4c) = esi_3
                *(ebx_1 + 0x50) = eax_4
            else if (*(ebx_1 + 0x4c) != esi_3 || *(ebx_1 + 0x50) != eax_4)
                void* eax_19 = data_27e7fe4
                *(eax_19 + 0x2c) += 1
                void* eax_20 = data_27e7fcc
                
                if (eax_20 != 0 && ((*(eax_20 + 0x3c) u>> 8).b & 1) != 0)
                    void* eax_21 = *(ebx_1 + 0x50)
                    
                    if (eax_21 == eax_4)
                        void* ebx_2 = *(ebx_1 + 0x4c)
                        
                        if (ebx_2 == 0 || esi_3 == 0)
                            sub_4c5680("Texture Swap with null")
                        else
                            char* eax_26 = esi_3[8]
                            char* const ecx_15 = &data_83f3d3
                            
                            if (eax_26 != 0)
                                ecx_15 = eax_26
                            
                            char* const eax_27 = *(ebx_2 + 0x20)
                            
                            if (eax_27 == 0)
                                eax_27 = &data_83f3d3
                            
                            char* const var_a4_9 = ecx_15
                            char* const var_a8_4 = eax_27
                            sub_4c5680("Texture Swap: %s %s")
                    else
                        var_54 = &data_83f3d3
                        int32_t var_8_5 = 2
                        var_50 = &data_83f3d3
                        var_8_5.b = 3
                        
                        if (eax_21 == 0)
                            sub_4c4590("Default")
                        else
                            sub_4c4510(eax_21 + 0x20)
                        
                        if (eax_4 == 0)
                            sub_4c4590("Default")
                        else
                            sub_4c4510(&eax_4[8])
                        
                        int32_t* ecx_12 = var_50
                        
                        if (ecx_12 == 0)
                            ecx_12 = &data_83f3d3
                        
                        int32_t* eax_25 = var_54
                        
                        if (eax_25 == 0)
                            eax_25 = &data_83f3d3
                        
                        int32_t* var_a4_8 = ecx_12
                        int32_t* var_a8_3 = eax_25
                        sub_4c5680("Material change: %s to  %s")
                        var_8_5.b = 2
                        sub_4c43d0(&var_50)
                        int32_t var_8_6 = 0xffffffff
                        sub_4c43d0(&var_54)
                
                goto label_4d92d9
            
            if (*(ebx_1 + 0x3c) == 0)
                if (*(ebx_1 + 0x18) != 0)
                    sub_4c5870("gpSpriteAppData->numBufferSprites == 0", &data_83f3d3, "Sprite.cpp", 
                        0x1b1, "SpriteDrawVerts")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int128_t* eax_31 = (*(*data_3078804 + 0x60))(*(ebx_1 + (*(ebx_1 + 0x10) << 2)))
                ebx_1 = data_27e7fe0
                *(ebx_1 + 0x3c) = eax_31
                sub_5abfc0(eax_31, 0, 0x18000)
            
            int32_t edx_13 = *arg5
            uint32_t ecx_19 = arg5[1]
            int32_t* eax_35 = *(ebx_1 + 0x18) * 0x60 + *(ebx_1 + 0x3c)
            uint32_t ecx_22 = edx_13 u>> 0x18 << 8
            uint32_t ecx_27
            uint32_t edx_15
            uint32_t ebx_11
            uint32_t esi_9
            
            if (data_3078808 != 1)
                ecx_27 = ((((ecx_22 + zx.d(edx_13.b)) << 8) + zx.d((edx_13 u>> 8).b)) << 8)
                    + zx.d((edx_13 u>> 0x10).b)
                esi_9 = (ecx_19 u>> 0x18 << 8) + zx.d(ecx_19.b)
                ebx_11 = ecx_19
                edx_15 = ecx_19 u>> 0x10
            else
                ecx_27 = ((((ecx_22 + zx.d((edx_13 u>> 0x10).b)) << 8) + zx.d((edx_13 u>> 8).b)) << 8)
                    + zx.d(edx_13.b)
                edx_15 = ecx_19
                esi_9 = (edx_15 u>> 0x18 << 8) + zx.d((edx_15 u>> 0x10).b)
                ebx_11 = edx_15
            
            uint32_t esi_18 = (((esi_9 << 8) + zx.d((ebx_11 u>> 8).b)) << 8) + zx.d(edx_15.b)
            *eax_35 = *arg2
            eax_35[1] = arg2[1]
            eax_35[2] = fconvert.s(fconvert.t(*var_4c_6))
            long double x87_r7_31 = fconvert.t(var_4c_6[1])
            eax_35[4] = ecx_27
            eax_35[3] = fconvert.s(x87_r7_31)
            eax_35[5] = esi_18
            eax_35[6] = arg2[2]
            eax_35[7] = arg2[3]
            eax_35[8] = fconvert.s(fconvert.t(var_4c_6[2]))
            long double x87_r7_33 = fconvert.t(var_4c_6[3])
            eax_35[0xa] = ecx_27
            eax_35[9] = fconvert.s(x87_r7_33)
            eax_35[0xb] = esi_18
            eax_35[0xc] = arg2[4]
            eax_35[0xd] = arg2[5]
            eax_35[0xe] = fconvert.s(fconvert.t(var_4c_6[4]))
            long double x87_r7_35 = fconvert.t(var_4c_6[5])
            eax_35[0x10] = ecx_27
            eax_35[0xf] = fconvert.s(x87_r7_35)
            eax_35[0x11] = esi_18
            eax_35[0x12] = arg2[6]
            eax_35[0x13] = arg2[7]
            eax_35[0x14] = fconvert.s(fconvert.t(var_4c_6[6]))
            long double x87_r7_37 = fconvert.t(var_4c_6[7])
            eax_35[0x16] = ecx_27
            eax_35[0x15] = fconvert.s(x87_r7_37)
            eax_35[0x17] = esi_18
            void* eax_36 = data_27e7fe0
            *(eax_36 + 0x18) += 1
            result = data_27e7fe4
            *(result + 0x24) += 1
        else
            long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(arg2[1])))
            long double x87_r5_3 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
            long double x87_r3_1 = float.t(0)
            long double x87_r4_7 = fconvert.t(*(esi + 0xac))
            var_48 = fconvert.s(fconvert.t(*(esi + 0xa4)) * x87_r3_1
                + fconvert.t(*(esi + 0xa0)) * x87_r6_3 + x87_r5_3 * fconvert.t(*(esi + 0x9c))
                + fconvert.t(*(esi + 0xa8)))
            var_44 = fconvert.s(x87_r4_7 * x87_r5_3 + fconvert.t(*(esi + 0xb0)) * x87_r6_3
                + fconvert.t(*(esi + 0xb4)) * x87_r3_1 + fconvert.t(*(esi + 0xb8)))
            float var_40_1 = fconvert.s(x87_r6_3 * fconvert.t(*(esi + 0xc0))
                + x87_r5_3 * fconvert.t(*(esi + 0xbc)) + fconvert.t(*(esi + 0xc4)) * x87_r3_1
                + fconvert.t(*(esi + 0xc8)))
            long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(arg2[3])))
            long double x87_r4_14 = fconvert.t(fconvert.s(fconvert.t(arg2[2])))
            float var_60_2 = fconvert.s(x87_r4_14 * fconvert.t(*(esi + 0xbc))
                + x87_r5_7 * fconvert.t(*(esi + 0xc0)) + fconvert.t(*(esi + 0xc4)) * x87_r3_1
                + fconvert.t(*(esi + 0xc8)))
            float var_88_3 = fconvert.s(fconvert.t(arg2[4]))
            float var_3c_1 = fconvert.s(fconvert.t(*(esi + 0xa0)) * x87_r5_7
                + x87_r4_14 * fconvert.t(*(esi + 0x9c)) + fconvert.t(*(esi + 0xa4)) * x87_r3_1
                + fconvert.t(*(esi + 0xa8)))
            float var_84_3 = fconvert.s(fconvert.t(arg2[5]))
            var_38 = fconvert.s(fconvert.t(*(esi + 0xac)) * x87_r4_14
                + fconvert.t(*(esi + 0xb0)) * x87_r5_7 + fconvert.t(*(esi + 0xb4)) * x87_r3_1
                + fconvert.t(*(esi + 0xb8)))
            float var_34_1 = var_60_2
            long double x87_r5_11 = fconvert.t(var_84_3)
            long double x87_r4_23 = fconvert.t(var_88_3)
            float var_30_1 = fconvert.s(fconvert.t(*(esi + 0xa0)) * x87_r5_11
                + x87_r4_23 * fconvert.t(*(esi + 0x9c)) + fconvert.t(*(esi + 0xa4)) * x87_r3_1
                + fconvert.t(*(esi + 0xa8)))
            float var_2c_1 = fconvert.s(fconvert.t(*(esi + 0xac)) * x87_r4_23
                + fconvert.t(*(esi + 0xb0)) * x87_r5_11 + fconvert.t(*(esi + 0xb4)) * x87_r3_1
                + fconvert.t(*(esi + 0xb8)))
            float var_28_1 = fconvert.s(x87_r4_23 * fconvert.t(*(esi + 0xbc))
                + x87_r5_11 * fconvert.t(*(esi + 0xc0)) + fconvert.t(*(esi + 0xc4)) * x87_r3_1
                + fconvert.t(*(esi + 0xc8)))
            long double x87_r5_15 = fconvert.t(fconvert.s(fconvert.t(arg2[7])))
            long double x87_r4_32 = fconvert.t(fconvert.s(fconvert.t(arg2[6])))
            float var_24_1 = fconvert.s(fconvert.t(*(esi + 0xa0)) * x87_r5_15
                + x87_r4_32 * fconvert.t(*(esi + 0x9c)) + fconvert.t(*(esi + 0xa4)) * x87_r3_1
                + fconvert.t(*(esi + 0xa8)))
            float var_20_1 = fconvert.s(fconvert.t(*(esi + 0xac)) * x87_r4_32
                + fconvert.t(*(esi + 0xb0)) * x87_r5_15 + fconvert.t(*(esi + 0xb4)) * x87_r3_1
                + fconvert.t(*(esi + 0xb8)))
            float var_1c_1 = fconvert.s(x87_r3_1 * fconvert.t(*(esi + 0xc4))
                + x87_r4_32 * fconvert.t(*(esi + 0xbc)) + x87_r5_15 * fconvert.t(*(esi + 0xc0))
                + fconvert.t(*(esi + 0xc8)))
            
            if (eax_4 == 0)
                int32_t* esi_2 = *(esi + 0x254)
                
                if (esi_2 == 0)
                    if ((data_31657e4 & 2) == 0)
                        data_31657e4.d |= 2
                        int32_t var_8_3 = 1
                        data_31657dc = sub_509140(5, "sys/sprite_3d.material")
                        int32_t var_8_4 = 0xffffffff
                    
                    eax_4 = data_31657dc
                else
                    eax_4 = esi_2
            
            int32_t* eax_11 = var_50
            result = sub_4deaf0(eax_11, arg5, &var_48, arg4, eax_11, eax_4)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
