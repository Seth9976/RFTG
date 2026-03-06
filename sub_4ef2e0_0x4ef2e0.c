// 函数名称: sub_4ef2e0
// 虚拟地址: 0x4ef2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4ef2e0(void* arg1 @ esi, float* arg2 @ edi, float arg3, float arg4)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    long double x87_r6 = fconvert.t(arg3)
    x87_r6 - x87_r7
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 1) == 0)
        long double x87_r5_1 = float.t(1)
        x87_r5_1 - x87_r6
        
        if ((((x87_r5_1 < x87_r6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r6) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r6 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0)
            long double x87_r4 = fconvert.t(arg4)
            x87_r4 - x87_r7
            
            if ((((x87_r4 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r7) ? 1 : 0) << 0xa
                    | (x87_r4 == x87_r7 ? 1 : 0) << 0xe | 0x2000):1.b & 1) == 0)
                x87_r5_1 - x87_r7
                
                if ((((x87_r5_1 < x87_r7 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_1, x87_r7) ? 1 : 0) << 0xa
                        | (x87_r5_1 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
                    int32_t ecx
                    int32_t var_28 = ecx
                    int32_t eax_1 =
                        sub_4685a0(fconvert.s(fconvert.t(fconvert.s(x87_r7 * float.t(*(arg1 + 4))))))
                    int32_t eax_2
                    char edx
                    eax_2, edx = sub_4685a0(fconvert.s(fconvert.t(fconvert.s(float.t(*(arg1 + 8))
                        * fconvert.t(arg4)))))
                    int32_t eax_4 = sub_553f70(*(arg1 + 0x10))
                    int32_t eax_9
                    uint32_t edx_1
                    eax_9, edx_1 =
                        sub_554240(*(arg1 + 0xc) * eax_2 + eax_4 * eax_1 + *arg1, edx, *(arg1 + 0x10))
                    int32_t var_28_3 = eax_9
                    float var_1c
                    sub_4e3630(&var_1c, edx_1)
                    *arg2 = var_1c
                    int32_t var_18
                    arg2[1] = var_18
                    int32_t var_14
                    arg2[2] = var_14
                    int32_t var_10
                    arg2[3] = var_10
                    return arg2
            
            sub_4c5870("uv.y >= 0.0 && uv.y < 1.0f", &data_83f3d3, "Particle.cpp", 0x674, 
                "ImageSampleNearestAt")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_4c5870("uv.x >= 0.0 && uv.x < 1.0f", &data_83f3d3, "Particle.cpp", 0x673, 
        "ImageSampleNearestAt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
