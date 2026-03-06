// 函数名称: sub_515b70
// 虚拟地址: 0x515b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_515b70(int32_t* arg1, uint64_t (* arg2)[0x2] @ edi, float arg3, int32_t arg4, float* arg5)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    int32_t ebx = arg1[1]
    int32_t esi_1 = *arg1 - 1
    double var_18
    int32_t eax_1
    int32_t edx
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, eax_1 = sub_5aa120(eax, edx, &var_18, mxcsr, x87control, 
        fconvert.d(fconvert.t(fconvert.s(float.t(esi_1) * fconvert.t(arg3)))), &var_18, arg2)
    arg3 = fconvert.s(fconvert.t(fconvert.s(st0)))
    long double x87_r7_5 = float.t(0)
    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(var_18)))
    x87_r6_1 - x87_r7_5
    eax_1.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_2
    
    if (p)
        x87_r6_2 = x87_r6_1 + fconvert.t(0.5)
    else
        x87_r6_2 = x87_r6_1 - fconvert.t(0.5)
    
    int32_t eax_2 = sub_685f40(x87_r6_2)
    int80_t result
    
    if (eax_2 s>= 0)
        if (eax_2 s< esi_1)
            goto label_515bef
        
        int32_t esi_6 = esi_1 * ebx + arg4
        
        if (esi_6 s>= arg1[3])
            sub_4c5870("transformIndex < pAnimImportData->boneTransformCount", &data_83f3d3, 
                0x1aa0088af54, "AnimGetCurrentBonePositionAtTime")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        __builtin_memcpy(arg5, esi_6 * 0x2c + eax, 0x2c)
        char eax_6
        int80_t result_1
        result_1, eax_6 = sub_5190b0(arg5)
        result = result_1
        
        if (eax_6 == 0)
            sub_4c5870("IsValidBoneTransform(*pAnimatedBone)", &data_83f3d3, 0x1ac0088af54, 
                "AnimGetCurrentBonePositionAtTime")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        arg3 = fconvert.s(x87_r7_5)
        eax_2 = 0
    label_515bef:
        int32_t esi_4 = (eax_2 + 1) * ebx + arg4
        
        if (esi_4 s>= arg1[3])
            sub_4c5870("transformIndex2 < pAnimImportData->boneTransformCount", &data_83f3d3, 
                0x1b20088af54, "AnimGetCurrentBonePositionAtTime")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float* edi_2 = (eax_2 * ebx + arg4) * 0x2c + eax
        char eax_8
        int80_t st0_1
        st0_1, eax_8 = sub_5190b0(edi_2)
        
        if (eax_8 == 0)
            sub_4c5870("IsValidBoneTransform(pBoneTransforms[transformIndex1])", &data_83f3d3, 
                0x1b40088af54, "AnimGetCurrentBonePositionAtTime")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float* esi_10 = esi_4 * 0x2c + eax
        int32_t eax_10
        int80_t st0_2
        st0_2, eax_10 = sub_5190b0(esi_10)
        
        if (eax_10.b == 0)
            sub_4c5870("IsValidBoneTransform(pBoneTransforms[transformIndex2])", &data_83f3d3, 
                0x1b50088af54, "AnimGetCurrentBonePositionAtTime")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float* var_2c_1 = esi_10
        sub_518ed0(eax_10, esi_10, edi_2, arg5, fconvert.s(fconvert.t(arg3)))
        char eax_12
        int80_t result_2
        result_2, eax_12 = sub_5190b0(arg5)
        result = result_2
        
        if (eax_12 == 0)
            sub_4c5870("IsValidBoneTransform(*pAnimatedBone)", &data_83f3d3, 0x1b80088af54, 
                "AnimGetCurrentBonePositionAtTime")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    return result
}
