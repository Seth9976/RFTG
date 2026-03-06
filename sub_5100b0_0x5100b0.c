// 函数名称: sub_5100b0
// 虚拟地址: 0x5100b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5100b0(int32_t arg1, int32_t arg2, int32_t arg3, float* arg4)
{
    // 第一条实际指令: void var_d4
    void var_d4
    int32_t eax_1 = __security_cookie ^ &var_d4
    int32_t ebx = arg3
    int32_t var_b8 = ebx
    int32_t* eax_4 = sub_50c140(*sub_510b30(arg3, ebx))
    int32_t edi = 0
    float var_c0 = fconvert.s(fconvert.t(10000f))
    int32_t* var_c8 = eax_4
    int32_t var_cc = 0xffffffff
    int32_t var_d0 = 0
    
    if (eax_4[1] s> 0)
        int32_t var_c4_1 = 0
        
        while (true)
            int32_t ecx = *eax_4
            
            if (*(ecx + edi + 0x31) == 0)
                int32_t* eax_5 = sub_510b30(ecx, ebx)
                int32_t* esi_1 = *eax_5
                
                if (esi_1[1] != 0x20)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_FAB", &data_83f3d3, "FabDef.cpp", 0xe7, 
                        "FabDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*esi_1 == 0)
                    sub_520800(eax_5, ebx.b, esi_1, 0)
                    
                    if (*esi_1 == 0)
                        sub_509540(esi_1)
                
                int32_t* eax_7 = **esi_1
                void var_88
                float var_34[0xa]
                __builtin_memcpy(&var_34, sub_50c2d0(eax_7, &var_88, *eax_7 + edi, &var_88, eax_5), 
                    0x28)
                float var_b0[0xa]
                float* eax_9
                int32_t edx_4
                eax_9, edx_4 = sub_54cb80(&var_b0, &var_34)
                void var_5c
                __builtin_memcpy(&var_5c, eax_9, 0x28)
                float var_b4
                
                if (sub_54cc80(arg4, edx_4, &var_5c, arg4) == 0 && sub_4d7c20(&var_5c, &var_b4).b != 0)
                    long double x87_r7_1 = fconvert.t(var_b4)
                    long double x87_r6_1 = fconvert.t(var_c0)
                    x87_r6_1 - x87_r7_1
                    
                    if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
                        var_c0 = fconvert.s(x87_r7_1)
                        var_cc = var_d0
                
                eax_4 = var_c8
            
            int32_t ecx_7 = var_d0 + 1
            edi = var_c4_1 + 0xb8
            var_d0 = ecx_7
            var_c4_1 = edi
            
            if (ecx_7 s>= eax_4[1])
                break
            
            ebx = var_b8
    
    sub_5a6aba(eax_1 ^ &var_d4)
}
