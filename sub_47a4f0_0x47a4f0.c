// 函数名称: sub_47a4f0
// 虚拟地址: 0x47a4f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_47a4f0(float* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void* ebx = sub_4eb5a0(arg3, *((arg5 << 2) + &data_30d72c4))
    void* ebx = sub_4eb5a0(arg3, *((arg5 << 2) + &data_30d72c4))
    
    if (arg4 == 1)
        arg4 = data_307c898
    else
        int32_t* eax_2
        
        if (eax_2 != 2)
            char const* const var_50 = "CursorTypeToParticle"
            int32_t var_54 = 0x78f
            char const* const var_58 = "..\code\RftGVR.cpp"
            char* const var_5c = &data_83f3d3
            sub_4c5870("Halt", var_5c, var_58, var_54, var_50)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        arg4 = data_307c89c
    
    if (ebx != 0 && *ebx != arg4)
        sub_4eb650()
        ebx = nullptr
    
    float var_28 = *arg1
    int32_t var_38 = *arg3
    int32_t ecx_3 = arg3[3]
    int32_t var_24 = arg1[1]
    int32_t var_20 = arg1[2]
    int32_t var_50_1 = ecx_3
    int32_t var_34 = arg3[1]
    int32_t var_30 = arg3[2]
    int32_t var_2c = ecx_3
    long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(data_30929cc) - fconvert.t(arg1[1])))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(data_30929c8) - fconvert.t(*arg1)))
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(data_30929d0) - fconvert.t(arg1[2])))
    int32_t eax_9
    int32_t* ecx_4
    long double st0
    st0, eax_9, ecx_4 = sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_6 * x87_r7_6
        + x87_r6 * x87_r6 + x87_r5 * x87_r5))))
    float var_3c = fconvert.s(st0 * fconvert.t(0.10000000149011612))
    
    if (ebx == 0)
        float* var_50_3 = arg1
        ebx = sub_4eb490(eax_9, arg4, ecx_4)
        *((arg5 << 2) + &data_30d72c4) = *(ebx + 0x78)
    
    long double x87_r7_13 = fconvert.t(data_8c4d34)
    int32_t var_50_4 = __builtin_memcpy(ebx + 0x2c, &var_3c, 0x20)
    return sub_4eed90(ebx, fconvert.s(x87_r7_13))
}
