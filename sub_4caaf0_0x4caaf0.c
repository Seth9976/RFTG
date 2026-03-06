// 函数名称: sub_4caaf0
// 虚拟地址: 0x4caaf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4caaf0(int32_t arg1 @ edi, void* arg2, float* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: float var_10 = 0f
    float var_10 = 0f
    float var_c = 0f
    int32_t var_74
    char** entry_ebx
    int32_t mxcsr
    int16_t x87control
    
    if (arg1 == 2 || arg1 == 5 || arg1 == 8)
        char** var_70_1 = entry_ebx
        double var_1c_1 = fconvert.d(fconvert.t(0f))
        int32_t ecx_2
        long double st0_1
        st0_1, ecx_2 = sub_4cb0b0(arg2)
        var_74 = ecx_2
        var_74.q = fconvert.d(fconvert.t(fconvert.s(st0_1 * fconvert.t(0.5))))
        long double st0_2
        st0_2, x87control = sub_686950(mxcsr, x87control, var_74)
        var_10 = fconvert.s(fconvert.t(var_1c_1) - fconvert.t(fconvert.s(st0_2)))
    
    if (arg1 == 3 || arg1 == 6 || arg1 == 9)
        char** var_70_2 = entry_ebx
        var_10 = fconvert.s(fconvert.t(fconvert.d(fconvert.t(var_10))) - sub_4cb0b0(arg2))
    
    if (arg1 == 4 || arg1 == 5 || arg1 == 6)
        char** esi_1
        
        if (entry_ebx != 0)
            if (entry_ebx[1] != 0x12)
                sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                    "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            esi_1 = entry_ebx
        else
            esi_1 = sub_50a390(entry_ebx + 0x12)
        
        if (*esi_1 == 0)
            var_74 = 0
            sub_5094d0(esi_1, 0, 1)
        
        esi_1[7] = &esi_1[7][1]
        double var_1c_3 = fconvert.d(fconvert.t(var_c))
        long double x87_r7_12 = float.t(***esi_1)
        esi_1[7] -= 1
        var_74.q = fconvert.d(fconvert.t(fconvert.s(x87_r7_12 * fconvert.t(0.5))))
        var_c = fconvert.s(fconvert.t(var_1c_3)
            - fconvert.t(fconvert.s(sub_686950(mxcsr, x87control, var_74))))
    
    if (arg1 == 7 || arg1 == 8 || arg1 == 9)
        char** esi_2
        
        if (entry_ebx != 0)
            if (entry_ebx[1] != 0x12)
                sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                    "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            esi_2 = entry_ebx
        else
            esi_2 = sub_50a390(entry_ebx + 0x12)
        
        if (*esi_2 == 0)
            sub_5094d0(esi_2, 0, 1)
        
        esi_2[7] = &esi_2[7][1]
        long double x87_r7_19 = fconvert.t(var_c) - float.t(***esi_2)
        esi_2[7] -= 1
        var_c = fconvert.s(x87_r7_19)
    
    long double x87_r7_20 = float.t(1)
    float var_40 = fconvert.s(x87_r7_20)
    long double x87_r6 = float.t(0)
    float var_34 = fconvert.s(x87_r6)
    float var_28 = fconvert.s(x87_r6)
    float var_3c = fconvert.s(x87_r6)
    float var_24 = fconvert.s(x87_r6)
    float var_30 = fconvert.s(x87_r7_20)
    float var_38 = fconvert.s(fconvert.t(var_10))
    float var_2c = fconvert.s(fconvert.t(var_c))
    float var_20 = fconvert.s(x87_r7_20)
    float var_64[0x9]
    sub_413350(&var_40, &var_64, arg3)
    return sub_4ca330(arg4, entry_ebx, arg2, &var_64, arg4, arg5)
}
