// 函数名称: sub_4d4f90
// 虚拟地址: 0x4d4f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d4f90(int32_t arg1, float* arg2, int32_t arg3, void* arg4, float* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi_2 = arg6 * 0x140 + *(arg3 + 4)
    int32_t ebx = *(esi_2 + 0x18)
    void* edi = arg4
    void* var_4c = edi
    void* var_3c = esi_2
    
    if (mods.dp.d(sx.q(ebx), 3) != 0)
        sub_4c5870("defSubMesh.indexCount % 3 == 0", &data_83f3d3, "Structure.cpp", 0x49b, 
            "sStructurePolygonDoesIntersectRay")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = 0
    float var_34 = fconvert.s(float.t(0))
    char var_2d = 1
    int32_t var_38 = 0
    int32_t eax_6
    
    if (ebx s> 0)
        while (true)
            int32_t eax_8 = *(esi_2 + 0x20)
            int16_t ebx_1 = *(eax_8 + (ecx << 1) + 2)
            uint32_t eax_9 = zx.d(*(eax_8 + (ecx << 1) + 4))
            int32_t* eax_10
            int80_t st0_1
            st0_1, eax_10 = sub_4d4e00(eax_9, edi, esi_2, zx.d(*(eax_8 + (ecx << 1))))
            int32_t ecx_2 = eax_10[1]
            float var_2c = *eax_10
            uint32_t eax_11 = zx.d(ebx_1)
            int32_t var_28_1 = ecx_2
            int32_t var_24_1 = eax_10[2]
            int32_t* eax_12
            int80_t st0_2
            st0_2, eax_12 = sub_4d4e00(eax_11, edi, esi_2, eax_11)
            int32_t eax_13 = eax_12[2]
            int32_t var_20_1 = *eax_12
            int32_t var_1c_1 = eax_12[1]
            int32_t var_18_1 = eax_13
            int32_t* eax_14
            long double st0_3
            st0_3, eax_14 = sub_4d4e00(eax_13, edi, esi_2, zx.d(eax_9.w))
            int32_t var_14_1 = *eax_14
            int32_t var_10_1 = eax_14[1]
            int32_t var_c_1 = eax_14[2]
            
            if (sub_4d8050(&var_2c, arg5).b != 0)
                float var_48
                long double x87_r7_1 = fconvert.t(var_48)
                long double x87_r6_1
                
                if (var_2d == 0)
                    x87_r6_1 = fconvert.t(var_34)
                    x87_r6_1 - x87_r7_1
                
                if (var_2d != 0 || (((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
                    var_34 = fconvert.s(x87_r7_1)
                    var_2d = 0
            
            eax_6 = var_38 + 3
            var_38 = eax_6
            
            if (eax_6 s>= *(var_3c + 0x18))
                break
            
            edi = var_4c
            ecx = var_38
            esi_2 = var_3c
        
        if (var_2d == 0)
            *arg2 = fconvert.s(fconvert.t(var_34))
            eax_6.b = 1
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 
    
    eax_6.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
