// 函数名称: sub_4da780
// 虚拟地址: 0x4da780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4da780(int32_t arg1, int32_t* arg2, float* arg3, int32_t* arg4, float* arg5, int32_t* arg6, float* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
    long double x87_r4 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
    float var_254 =
        fconvert.s(fconvert.t(arg5[1]) * x87_r4 + fconvert.t(*arg5) * x87_r6 + fconvert.t(arg5[2]))
    long double x87_r5_5 = fconvert.t(arg5[4])
    float var_48 = var_254
    float var_250 = fconvert.s(x87_r4 * x87_r5_5 + x87_r6 * fconvert.t(arg5[3]) + fconvert.t(arg5[5]))
    float var_44 = var_250
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(arg3[2])))
    long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
    float var_264 =
        fconvert.s(fconvert.t(arg5[1]) * x87_r4_2 + fconvert.t(*arg5) * x87_r6_2 + fconvert.t(arg5[2]))
    float var_40 = var_264
    float var_260 = fconvert.s(x87_r4_2 * fconvert.t(arg5[4]) + x87_r6_2 * fconvert.t(arg5[3])
        + fconvert.t(arg5[5]))
    float var_3c = var_260
    long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(arg3[2])))
    long double x87_r4_4 = fconvert.t(fconvert.s(fconvert.t(arg3[3])))
    float var_38 =
        fconvert.s(fconvert.t(arg5[1]) * x87_r4_4 + fconvert.t(*arg5) * x87_r6_4 + fconvert.t(arg5[2]))
    float var_34 = fconvert.s(x87_r4_4 * fconvert.t(arg5[4]) + x87_r6_4 * fconvert.t(arg5[3])
        + fconvert.t(arg5[5]))
    long double x87_r6_6 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
    long double x87_r4_6 = fconvert.t(fconvert.s(fconvert.t(arg3[3])))
    float var_10_5 =
        fconvert.s(fconvert.t(arg5[1]) * x87_r4_6 + fconvert.t(*arg5) * x87_r6_6 + fconvert.t(arg5[2]))
    float var_30 = var_10_5
    float var_c_5 = fconvert.s(x87_r4_6 * fconvert.t(arg5[4]) + x87_r6_6 * fconvert.t(arg5[3])
        + fconvert.t(arg5[5]))
    long double x87_r7_32 = fconvert.t(var_250)
    float var_2c = var_c_5
    long double x87_r5_24 = fconvert.t(var_260)
    x87_r5_24 - x87_r7_32
    float eax_3
    eax_3.w = (x87_r5_24 < x87_r7_32 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_24, x87_r7_32) ? 1 : 0) << 0xa
        | (x87_r5_24 == x87_r7_32 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x44}
    float var_18
    
    if (not(p))
        long double x87_r6_9 = fconvert.t(var_254)
        long double x87_r4_8 = fconvert.t(var_10_5)
        x87_r4_8 - x87_r6_9
        eax_3.w = (x87_r4_8 < x87_r6_9 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_8, x87_r6_9) ? 1 : 0) << 0xa
            | (x87_r4_8 == x87_r6_9 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            void* ecx_1 = data_27e7fe0
            float var_25c = fconvert.s(x87_r6_9)
            int32_t edx_6 = *(ecx_1 + 0x28)
            void* eax_4 = ecx_1 + 0x28
            float var_258 = fconvert.s(x87_r7_32)
            int32_t edx_7 = *(eax_4 + 4)
            float var_254_1 = fconvert.s(fconvert.t(var_264))
            int32_t edx_8 = *(eax_4 + 8)
            float var_250_1 = fconvert.s(fconvert.t(var_c_5))
            int32_t edx_9 = *(eax_4 + 0xc)
            int32_t edx_10 = *(eax_4 + 0x10)
            *eax_4 = *arg6
            *(eax_4 + 4) = arg6[1]
            *(eax_4 + 8) = arg6[2]
            *(eax_4 + 0xc) = arg6[3]
            *(eax_4 + 0x10) = arg6[4]
            bool cond:1 = *(ecx_1 + 0x38) == 0
            var_18 = var_25c
            float var_14 = var_258
            float var_10_6 = var_254_1
            float var_c_6 = var_250_1
            
            if (cond:1)
                sub_4d9830(eax_4, arg2, arg4, arg7, &var_18, nullptr)
            else
                eax_4 = sub_4d9650(eax_4, eax_4, arg7, &var_25c, &var_18)
                void var_26c
                
                if (eax_4.b != 0)
                    sub_4d9830(eax_4, arg2, arg4, &var_25c, &var_26c, nullptr)
            
            void* eax_5 = data_27e7fe0
            *(eax_5 + 0x28) = edx_6
            *(eax_5 + 0x2c) = edx_7
            *(eax_5 + 0x30) = edx_8
            *(eax_5 + 0x34) = edx_9
            *(eax_5 + 0x38) = edx_10
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 
    
    if (arg6[4] != 0xffffffff)
        sub_4c5870("clipRect.regions == -1", &data_83f3d3, "Sprite.cpp", 0x510, "DrawImageClipped")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_26 = arg6[3]
    int32_t var_288_2 = edx_26
    void var_24c
    void var_14c
    int32_t i_2 = sub_54bda0(&var_24c, edx_26, &var_14c, &var_48, &var_24c, *arg6, arg6[1], arg6[2])
    
    if (i_2 s> 0)
        void var_244
        void* edi_4 = &var_244
        void var_140
        void* ebx_1 = &var_140
        int32_t i_1 = i_2
        int32_t i
        
        do
            void* eax_8 = data_27e7fe0
            long double x87_r6_10 = fconvert.t(fconvert.s(fconvert.t(*arg7)))
            float var_28 =
                fconvert.s((fconvert.t(arg7[2]) - x87_r6_10) * fconvert.t(*(ebx_1 - 8)) + x87_r6_10)
            long double x87_r6_11 = fconvert.t(fconvert.s(fconvert.t(*arg7)))
            float var_20_1 =
                fconvert.s((fconvert.t(arg7[2]) - x87_r6_11) * fconvert.t(*ebx_1) + x87_r6_11)
            long double x87_r6_12 = fconvert.t(fconvert.s(fconvert.t(*arg7)))
            var_18 =
                fconvert.s((fconvert.t(arg7[2]) - x87_r6_12) * fconvert.t(*(ebx_1 + 8)) + x87_r6_12)
            long double x87_r6_13 = fconvert.t(fconvert.s(fconvert.t(*arg7)))
            float var_10_7 =
                fconvert.s((fconvert.t(arg7[2]) - x87_r6_13) * fconvert.t(*(ebx_1 + 0x10)) + x87_r6_13)
            var_48 = fconvert.s(fconvert.t(*(edi_4 - 8)) + fconvert.t(*(eax_8 + 0x20)))
            float var_44_1 = fconvert.s(fconvert.t(*(edi_4 - 4)) + fconvert.t(*(eax_8 + 0x24)))
            float var_40_1 = fconvert.s(fconvert.t(*(eax_8 + 0x20)) + fconvert.t(*edi_4))
            float var_3c_2 = fconvert.s(fconvert.t(*(edi_4 + 4)) + fconvert.t(*(eax_8 + 0x24)))
            float var_38_2 = fconvert.s(fconvert.t(*(edi_4 + 8)) + fconvert.t(*(eax_8 + 0x20)))
            float var_34_2 = fconvert.s(fconvert.t(*(edi_4 + 0xc)) + fconvert.t(*(eax_8 + 0x24)))
            float var_30_2 = fconvert.s(fconvert.t(*(edi_4 + 0x10)) + fconvert.t(*(eax_8 + 0x20)))
            float var_2c_2 = fconvert.s(fconvert.t(*(edi_4 + 0x14)) + fconvert.t(*(eax_8 + 0x24)))
            sub_4d8cf0(eax_8, &var_48, arg4, &var_28, arg2, nullptr)
            ebx_1 += 0x20
            edi_4 += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
