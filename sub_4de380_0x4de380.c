// 函数名称: sub_4de380
// 虚拟地址: 0x4de380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4de380(int32_t arg1, int32_t arg2, float* arg3, float* arg4, int32_t* arg5, char arg6, float arg7, int32_t* arg8, int32_t arg9, int32_t* arg10, int32_t* arg11)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg11
    float* esi = arg3
    float var_3c = arg7
    float* var_58 = esi
    int32_t* var_38 = arg8
    int32_t var_34 = arg9
    int32_t* var_70 = ebx
    void* var_7c = arg4
    int32_t* var_54 = arg10
    
    if (arg10 == 0)
    label_4de3fa:
        void* ecx_3 = *(*(sub_466320(ebx) + 4) + 4)
        
        if (data_8bd344 s<= 0x53)
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* edi_1 = *(data_8bd340 + 0x14c)
        void* eax_10 = *(edi_1 + 0xc)
        
        if (eax_10 == 0)
            sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                "AttribTagGetDefMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(eax_10 + 0x10) != 0xf)
            sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR", &data_83f3d3, 
                "AttribMap.cpp", 0x1e9, "AttribMapGetAssetPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_2 = *(ecx_3 + 4)
        int32_t eax_13 = 0
        
        if (edx_2 s<= 0)
        label_4de4d3:
            var_54 = *(edi_1 + 0x24)
        else
            int32_t* ecx_4 = *(ecx_3 + 8)
            
            while (*ecx_4 != 0x53)
                eax_13 += 1
                ecx_4 = &ecx_4[2]
                
                if (eax_13 s>= edx_2)
                    goto label_4de4d3
            
            var_54 = ecx_4[1]
        
        if (var_54 == 0)
            var_54 = data_30d739c
    else
        int32_t* var_90_1 = arg10
        
        if (sub_50bf30(arg4, arg8) != 0)
            void var_28
            var_7c = &var_28
            var_54 = *(*sub_4ca0f0(arg10) + 0x24)
        
        ebx = var_70
        
        if (var_54 == 0)
            goto label_4de3fa
    
    void* ecx_6 = *(*(sub_466320(ebx) + 4) + 4)
    
    if (data_8bd344 s<= 0x54)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi_2 = *(data_8bd340 + 0x150)
    void* eax_17 = *(edi_2 + 0xc)
    
    if (eax_17 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_17 + 0x10) != 0xf)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR", &data_83f3d3, 
            "AttribMap.cpp", 0x1e9, "AttribMapGetAssetPtr")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_5 = *(ecx_6 + 4)
    int32_t eax_20 = 0
    int32_t* var_74
    int32_t* ecx_8
    
    if (edx_5 s<= 0)
    label_4de5cd:
        ecx_8 = *(edi_2 + 0x24)
        var_74 = ecx_8
    else
        ecx_8 = *(ecx_6 + 8)
        
        while (*ecx_8 != 0x54)
            eax_20 += 1
            ecx_8 = &ecx_8[2]
            
            if (eax_20 s>= edx_5)
                goto label_4de5cd
        
        var_74 = ecx_8[1]
    
    int32_t var_78 = 0
    long double x87_r7
    
    if (data_27e8494 == 1)
        x87_r7 = float.t(0)
    else if (data_30785b4 == 0)
        float* eax_22 = &data_307859c
        
        if (data_3078598 == 0)
            eax_22 = &var_3c
        
        long double st0_1
        st0_1, ecx_8 = sub_4dc3e0(eax_22)
        x87_r7 = st0_1
    else
        x87_r7 = fconvert.t(data_30785b8)
        var_78 = data_30785bc
    
    float var_50 = fconvert.s(x87_r7)
    int32_t* var_90_4 = ecx_8
    
    if (sub_4de230(ebx, fconvert.s(fconvert.t(var_50))) == 0)
        int32_t* ebx_2 = sub_4dc1a0()
        ebx_2[0x14] = var_74
        __builtin_memcpy(&ebx_2[2], 0x83faf8, 0x40)
        *ebx_2 = 1
        ebx_2[0x13] = var_54
        ebx_2[0x12] = var_70
        ebx_2[0x51] = data_306856c
        ebx_2[0x52] = 1
        ebx_2[0x53] = sub_4dc440(var_70)
        int32_t eax_32 = sub_4dc4c0(var_70)
        esi = var_58
        ebx_2[0x55] = fconvert.s(fconvert.t(var_50))
        ebx_2[0x54] = eax_32
        ebx_2[0x57] = 0
        ebx_2[0x56] = var_78
    else
        int32_t eax_24 = data_2de8568
        *(eax_24 * 0x180 + 0x27e8530) += 1
    
    int32_t eax_33 = data_306856c
    data_306856c = eax_33 + 1
    float var_6c = fconvert.s(fconvert.t(esi[3]) - fconvert.t(*esi))
    float var_68 = fconvert.s(fconvert.t(esi[4]) - fconvert.t(esi[1]))
    float var_64 = fconvert.s(fconvert.t(esi[5]) - fconvert.t(esi[2]))
    float var_4c = fconvert.s(fconvert.t(esi[6]) - fconvert.t(*esi))
    long double x87_r7_15 = fconvert.t(fconvert.s(fconvert.t(esi[7]) - fconvert.t(esi[1])))
    long double x87_r5 = fconvert.t(var_64)
    long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(esi[8]) - fconvert.t(esi[2])))
    long double x87_r2 = fconvert.t(var_68)
    var_3c = fconvert.s(x87_r7_15 * x87_r5 - x87_r4_1 * x87_r2)
    long double x87_r3_3 = fconvert.t(var_6c)
    long double x87_r2_3 = fconvert.t(var_4c)
    var_4c = var_3c
    float var_48_1 = fconvert.s(x87_r4_1 * x87_r3_3 - x87_r5 * x87_r2_3)
    float var_44_1 = fconvert.s(x87_r2 * x87_r2_3 - x87_r7_15 * x87_r3_3)
    float* eax_36 = sub_4132a0(&var_4c, &var_3c)
    float ecx_12 = *eax_36
    int32_t edx_9 = eax_36[1]
    int32_t esi_3 = eax_36[2]
    int32_t* eax_37 = var_58
    *(eax_33 * 0xa0 + 0x2de856c) = *eax_37
    *(eax_33 * 0xa0 + 0x2de8570) = eax_37[1]
    int32_t edi_8 = eax_37[2]
    *(eax_33 * 0xa0 + 0x2de8578) = ecx_12
    *(eax_33 * 0xa0 + 0x2de857c) = edx_9
    *(eax_33 * 0xa0 + 0x2de8580) = esi_3
    int32_t* esi_4 = arg5
    *(eax_33 * 0xa0 + 0x2de8574) = edi_8
    int32_t ecx_13 = *esi_4
    uint32_t edx_14 = ((ecx_13 u>> 0x18 << 8) + zx.d(ecx_13.b)) << 8
    int32_t* eax_42
    int32_t ecx_16
    uint32_t edx_23
    
    if (arg6 == 0)
        *(eax_33 * 0xa0 + 0x2de8584) =
            ((edx_14 + zx.d((ecx_13 u>> 8).b)) << 8) + zx.d((ecx_13 u>> 0x10).b)
        ecx_16 = esi_4[1]
        eax_42 = eax_37
        edx_23 = (((ecx_16 u>> 0x18 << 8) + zx.d(ecx_16.b)) << 8) + zx.d((ecx_16 u>> 8).b)
        esi_4 = arg5
    else
        *(eax_33 * 0xa0 + 0x2de8584) =
            ((edx_14 + zx.d((ecx_13 u>> 8).b)) << 8) + zx.d((ecx_13 u>> 0x10).b)
        ecx_16 = esi_4[1]
        eax_42 = eax_37
        edx_23 = (((ecx_16 u>> 0x18 << 8) + zx.d(ecx_16.b)) << 8) + zx.d((ecx_16 u>> 8).b)
    
    *(eax_33 * 0xa0 + 0x2de8588) = (edx_23 << 8) + zx.d((ecx_16 u>> 0x10).b)
    *(eax_33 * 0xa0 + 0x2de858c) = *var_7c
    *(eax_33 * 0xa0 + 0x2de8590) = *(var_7c + 4)
    *(eax_33 * 0xa0 + 0x2de8594) = eax_42[3]
    *(eax_33 * 0xa0 + 0x2de8598) = eax_42[4]
    *(eax_33 * 0xa0 + 0x2de859c) = eax_42[5]
    *(eax_33 * 0xa0 + 0x2de85a0) = ecx_12
    *(eax_33 * 0xa0 + 0x2de85a4) = edx_9
    *(eax_33 * 0xa0 + 0x2de85a8) = esi_3
    int32_t ecx_33
    
    if (arg6 == 0)
        int32_t ecx_34 = *esi_4
        *(eax_33 * 0xa0 + 0x2de85ac) = (((((ecx_34 u>> 0x18 << 8) + zx.d(ecx_34.b)) << 8)
            + zx.d((ecx_34 u>> 8).b)) << 8) + zx.d((ecx_34 u>> 0x10).b)
        ecx_33 = esi_4[1]
    else
        int32_t ecx_25 = esi_4[2]
        *(eax_33 * 0xa0 + 0x2de85ac) = (((((ecx_25 u>> 0x18 << 8) + zx.d(ecx_25.b)) << 8)
            + zx.d((ecx_25 u>> 8).b)) << 8) + zx.d((ecx_25 u>> 0x10).b)
        ecx_33 = esi_4[3]
    
    *(eax_33 * 0xa0 + 0x2de85b0) = (((((ecx_33 u>> 0x18 << 8) + zx.d(ecx_33.b)) << 8)
        + zx.d((ecx_33 u>> 8).b)) << 8) + zx.d((ecx_33 u>> 0x10).b)
    *(eax_33 * 0xa0 + 0x2de85b4) = *(var_7c + 8)
    *(eax_33 * 0xa0 + 0x2de85b8) = *(var_7c + 0xc)
    *(eax_33 * 0xa0 + 0x2de85bc) = eax_42[6]
    *(eax_33 * 0xa0 + 0x2de85c0) = eax_42[7]
    *(eax_33 * 0xa0 + 0x2de85c4) = eax_42[8]
    *(eax_33 * 0xa0 + 0x2de85c8) = ecx_12
    *(eax_33 * 0xa0 + 0x2de85cc) = edx_9
    *(eax_33 * 0xa0 + 0x2de85d0) = esi_3
    int32_t ecx_61
    
    if (arg6 == 0)
        int32_t ecx_62 = *esi_4
        *(eax_33 * 0xa0 + 0x2de85d4) = (((((ecx_62 u>> 0x18 << 8) + zx.d(ecx_62.b)) << 8)
            + zx.d((ecx_62 u>> 8).b)) << 8) + zx.d((ecx_62 u>> 0x10).b)
        ecx_61 = esi_4[1]
    else
        int32_t ecx_53 = esi_4[4]
        *(eax_33 * 0xa0 + 0x2de85d4) = (((((ecx_53 u>> 0x18 << 8) + zx.d(ecx_53.b)) << 8)
            + zx.d((ecx_53 u>> 8).b)) << 8) + zx.d((ecx_53 u>> 0x10).b)
        ecx_61 = esi_4[5]
    
    *(eax_33 * 0xa0 + 0x2de85d8) = (((((ecx_61 u>> 0x18 << 8) + zx.d(ecx_61.b)) << 8)
        + zx.d((ecx_61 u>> 8).b)) << 8) + zx.d((ecx_61 u>> 0x10).b)
    *(eax_33 * 0xa0 + 0x2de85dc) = *(var_7c + 0x10)
    *(eax_33 * 0xa0 + 0x2de85e0) = *(var_7c + 0x14)
    *(eax_33 * 0xa0 + 0x2de85e4) = eax_42[9]
    *(eax_33 * 0xa0 + 0x2de85e8) = eax_42[0xa]
    *(eax_33 * 0xa0 + 0x2de85ec) = eax_42[0xb]
    *(eax_33 * 0xa0 + 0x2de85f0) = ecx_12
    *(eax_33 * 0xa0 + 0x2de85f4) = edx_9
    *(eax_33 * 0xa0 + 0x2de85f8) = esi_3
    int32_t eax_51
    
    if (arg6 == 0)
        int32_t eax_52 = *esi_4
        *(eax_33 * 0xa0 + 0x2de85fc) = (((((eax_52 u>> 0x18 << 8) + zx.d(eax_52.b)) << 8)
            + zx.d((eax_52 u>> 8).b)) << 8) + zx.d((eax_52 u>> 0x10).b)
        eax_51 = esi_4[1]
    else
        int32_t eax_48 = esi_4[6]
        *(eax_33 * 0xa0 + 0x2de85fc) = (((((eax_48 u>> 0x18 << 8) + zx.d(eax_48.b)) << 8)
            + zx.d((eax_48 u>> 8).b)) << 8) + zx.d((eax_48 u>> 0x10).b)
        eax_51 = esi_4[7]
    
    uint32_t result = zx.d((eax_51 u>> 0x10).b)
    *(eax_33 * 0xa0 + 0x2de8600) =
        (((((eax_51 u>> 0x18 << 8) + zx.d(eax_51.b)) << 8) + zx.d((eax_51 u>> 8).b)) << 8) + result
    *(eax_33 * 0xa0 + 0x2de8604) = *(var_7c + 0x18)
    *(eax_33 * 0xa0 + 0x2de8608) = *(var_7c + 0x1c)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
