// 函数名称: sub_4f2510
// 虚拟地址: 0x4f2510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4f2510(int32_t arg1 @ esi, uint32_t arg2, void* arg3, float* arg4)
{
    // 第一条实际指令: __chkstk(0x2120)
    __chkstk(0x2120)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    void* result = arg3
    uint32_t ebx = arg2
    int32_t ecx = *(ebx + 0x2dc)
    uint32_t var_20a8 = ebx
    
    if (data_3079208 != **(ebx + 0x2e4))
    label_4f258b:
        float var_2098[0x1a]
        sub_4f0ce0(sub_4ef420(ebx, result, &var_2098), ebx, arg4, &var_2098)
        int32_t* eax_5 = sub_466320(**(ebx + 0x2e4))
        
        if (*(*(ebx + 0x2dc) * 0x134 + *eax_5 + 0xe9) == 0)
            result = sub_466320(**(ebx + 0x2e4))
        
        if (*(*(ebx + 0x2dc) * 0x134 + *eax_5 + 0xe9) != 0
                || *(*(ebx + 0x2dc) * 0x134 + *result + 0xea) != 0)
            void* eax_8 = nullptr
            int32_t var_20a0_1 = 0
            void var_20fc
            __builtin_memcpy(&var_20fc, 0x27e8090, 0x1c)
            int32_t var_2010[0x7fb]
            
            while (true)
                void* var_20a4_1
                void* esi_2
                
                if (eax_8 != 0)
                    void* ecx_6 = *(eax_8 + 0x2fc)
                    var_20a4_1 = ecx_6
                    esi_2 = ecx_6
                else
                    esi_2 = *(ebx + 0x2d0)
                    var_20a4_1 = esi_2
                
                if (esi_2 == 0)
                    break
                
                int32_t* eax_10 = sub_466320(**(esi_2 + 0x2e4))
                void* edi_1 = esi_2 + 0x2a8
                void var_2030
                
                if (*(*(esi_2 + 0x2dc) * 0x134 + *eax_10 + 0xd9) == 0)
                    edi_1 = &var_2030
                float var_2120
                sub_405f60(&var_2120, edi_1)
                void var_20e0
                __builtin_memcpy(&var_20e0, &var_2120, 0x20)
                int32_t* eax_13 = sub_466320(**(var_20a8 + 0x2e4))
                int32_t ecx_10 = *(var_20a8 + 0x2dc) * 0x134
                long double x87_r7_4
                float var_20e8
                float var_20c8
                
                if (*(ecx_10 + *eax_13 + 0xea) == 0)
                    long double x87_r7_11 =
                        fconvert.t(fconvert.s(fconvert.t(var_20e8) - fconvert.t(var_20c8)))
                    float var_20ec
                    float var_20cc
                    long double x87_r6_1 =
                        fconvert.t(fconvert.s(fconvert.t(var_20ec) - fconvert.t(var_20cc)))
                    float var_20e4
                    float var_20c4
                    long double x87_r5_1 =
                        fconvert.t(fconvert.s(fconvert.t(var_20e4) - fconvert.t(var_20c4)))
                    x87_r7_4 = x87_r7_11 * x87_r7_11 + x87_r6_1 * x87_r6_1 + x87_r5_1 * x87_r5_1
                else
                    int32_t var_14_8 = ecx_10
                    x87_r7_4 = sub_4064d0(fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_20c8)
                        - fconvert.t(var_20e8)))))
                var_200c
                *(&var_200c + (var_20a0_1 << 3)) = fconvert.s(fconvert.t(fconvert.s(x87_r7_4)))
                var_2010[var_20a0_1 * 2] = var_20a4_1
                int32_t eax_15 = var_20a0_1 + 1
                var_20a0_1 = eax_15
                
                if (eax_15 == 0x400)
                    sub_4c5680("too many particle to sort")
                    break
                
                eax_8 = var_20a4_1
                ebx = var_20a8
            
            int32_t ecx_12
            result, ecx_12 = sub_4640b0(&var_2010, &(&__saved_ebp)[var_20a0_1 * 2 - 0x803], 
                (&(&__saved_ebp)[var_20a0_1 * 2 - 0x803] - &var_2010) s>> 3, sub_4f24d0)
            int32_t esi_5 = 0
            
            if (var_20a0_1 s> 0)
                do
                    result = sub_4f2510(var_2010[esi_5 * 2], &var_2098, arg4)
                    esi_5 += 1
                while (esi_5 s< var_20a0_1)
        else
            void* esi_1 = nullptr
            
            while (true)
                if (esi_1 != 0)
                    esi_1 = *(esi_1 + 0x2fc)
                else
                    esi_1 = *(ebx + 0x2d0)
                
                if (esi_1 == 0)
                    break
                
                result = sub_4f2510(esi_1, &var_2098, arg4)
    else
        if (ecx u> 0xff)
            sub_4c5870("emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", &data_83f3d3, 
                "Windows\EditorWindow.cpp", 0x18c4, "EditorEmitterIsHidden")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*((ecx << 3) + &data_3078878) == 0)
            goto label_4f258b
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
